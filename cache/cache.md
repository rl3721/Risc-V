testing a cache with 2 way, 8 sets, block size 4 word

2022/12/6: start

12/7: 
    decided to eliminate the dirty bit, designing a write through cache instead of a write back cache. This is because for write back read and write from the memory can would occur in the same cycle without pipelining support. Such that the memory will need two address ports. I believe that this would deviate too much from reality. Hence try to complete it with write through first and see form there. 
    The 153rd bit (the original dirty bit) can be still kept in, just not used

12/8/10:48 start top combining cache and memory, and testbench

