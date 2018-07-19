# mmap
How to create a mmap in C/C++ which is shared in processes.

step 1 : 
  create a file  : echo "#Memory mapped file" >> mmapFile.txt 
  
Step 2:
  Execute mmapRead and file modification in parellel.

time     P1 (mmapRead binay)                  P2 ( modify content of mmapFile.txt file ) 

t1     execute binary      
t2                                            echo "Git Hub is great" >> programs/c/process/mmapFile.txt
t3     press any no. 
       Modified content should be visible.
t4                                            echo "Modifying data 2nd time, enjoying it" >> programs/c/process/mmapFile.txt
t5     press any no. 
       Modified content should be visible.
t6                                            echo "Modifying data 3rd time, Awesome" >> programs/c/process/mmapFile.txt

New content should be visible with already present pointer returned by mmap().
