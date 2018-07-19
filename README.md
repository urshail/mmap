# mmap
How to create a mmap in C/C++ which is shared in processes.

step 1 : 
  create a file  : "#Memory mapped file" >> mmapFile.txt 
  
Step 2:
  Process P1 => map a file in memory ( mmapFile.txt )
Step 3:
  Process p2 => modify content of mmapFile.txt with python/C/vim/echo .
  
New content should be visible with already present pointer returned by mmap().
