#include <stdio.h>
#include <limits.h>
 
void main()
{
   printf("char 存储大小 : %lu \n", sizeof(char));
   printf("unsigned char 存储大小 : %lu \n", sizeof(unsigned char));
   printf("signed char 存储大小 : %lu \n", sizeof(signed char));
   printf("int 存储大小 : %lu \n", sizeof(int));
   printf("unsigned int 存储大小 : %lu \n", sizeof(unsigned int));
   printf("short 存储大小 : %lu \n", sizeof(short));
   printf("unsigned short 存储大小 : %lu \n", sizeof(unsigned short));
   printf("long 存储大小 : %lu \n", sizeof(long));
   printf("unsigned long 存储大小 : %lu \n", sizeof(unsigned long));
   return 0;
}