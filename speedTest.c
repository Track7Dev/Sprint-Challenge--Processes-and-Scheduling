#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

int main (void) { 
    struct timespec start, finish; 

    // printf
    clock_gettime(CLOCK_REALTIME, &start); 
    printf("%s", "TEST SPEED OF THIS LINE\n");     
    clock_gettime(CLOCK_REALTIME, &finish); 
    int ptime = finish.tv_nsec - start.tv_nsec;
    puts("printf completed");

    //Write
    clock_gettime(CLOCK_REALTIME, &start);
    char * string = "TEST SPEED OF THIS LINE\n";
    write(0, string, strlen(string));     
    clock_gettime(CLOCK_REALTIME, &finish);
    int wtime = finish.tv_nsec - start.tv_nsec;
    puts("write completed");

    //Output
    printf("Printf Speed:%d/ns\n", ptime);
    printf("Write Speed:%d/ns\n", wtime);
    if(ptime > wtime) {
      printf("Speed Difference:%d\n", ptime - wtime);
      puts("Printf is faster");
    }
    if(ptime < wtime) {
      printf("Speed Difference:%d/ns\n", wtime - ptime);
      puts("write is faster");
    }
    if(ptime == wtime) puts("Prinf and Write ran at the same speed");
    return 0;
} 