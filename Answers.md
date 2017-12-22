1. I would say b because the processes when initialized are allocated a random chunk of memory, which in this case is 32kb/ea without interfering with other process memory space so P1 and P2 address space would be somewhere in the memory index 0-64,000. //32,000 per process


2.  Running (R): Currently doing work with that process;

    Sleeping (S): The processs was running and ran out of CPU time 
      and at that time the process was not finished so it was put 
      into standby or Sleep Mode.

    Terminated (T): The process has finished the work it needed to do 
      and exited the program with an exit code (0);

    Zombie (Z): The process has finished but is still Active in the 
      process table. Usually when a process did not teritinate properly.
3. 
  //Test Output (speedTest.c)
  TEST SPEED OF THIS LINE
  printf completed
  TEST SPEED OF THIS LINE
  write completed
  Printf Speed:101743400/ns
  Write Speed:89273900/ns
  Speed Difference:12469500
  Printf is faster

4. Printf would be a lot faster to complete (depending on size) because it is
    acessing the memory allocated (buffer) and only writes to the file once the
    buffer is full, where as write would have to access the HDD to find or create a
    file in the directory and write the line to the file and update(save) that current file before it is finished every single time.
