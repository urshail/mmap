#include<sys/types.h>
#include<fcntl.h>
#include<sys/mman.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<unistd.h>
#include<iostream>
using namespace std;

#define FileName "mmapFile.txt"
//atleast one byte in file is required, So adding a dummy line in file.

// ftruncate is required if you are going to add data greater than 4k.

int main()
{
int fd = open(FileName,O_RDONLY,S_IRUSR ); 
struct stat sb;
if( stat(FileName,&sb) == -1 )
  printf("failed in getting size of file\n");

char *file_in_mem = (char*)mmap(NULL,sb.st_size,PROT_READ,MAP_SHARED,fd,0);

cout<<file_in_mem<<endl;

int dg;

cout<<"============ waiting 1st time: modify file content now============="<<endl;
cin>>dg;
cout<<file_in_mem<<endl;

cout<<"============ waiting 2nd time: modify file content now============="<<endl;
cin>>dg;
cout<<file_in_mem<<endl;

cout<<"============ waiting 3rd time: modify file content now============="<<endl;
cin>>dg;
cout<<file_in_mem<<endl;

munmap(file_in_mem,sb.st_size);
close(fd);

}
