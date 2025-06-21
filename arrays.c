#include<stdlib.h> //contains functions like malloc, Free and exit
#include<stdio.h> //standard input/output functions like printf and scanf
#include<math.h> //math functions such as sqrt(),pow(),sin().add -lm at the end of gcc command While compliing



int main(){
int a[5];//Static array declaration and all elemnts are garbage values
int b[3]={0}; //Static array declaration and all elemnts are 0.
printf("expected a garbagae value:%d\n",a[3]); //should return a garbage value because the array a is not initialized.
printf("expected 0: %d\n",2[b]);//should output 0 and this is a syntax to deal with index as well
printf("expected a garbage value: %d\n",*(a+2));//this should return the value of the third element in array a, normally a garbage value. a here is a pointer in the first elemnt of the array, REMEBER THAT,while a+1 tells the compiler that you want it to move the second elemnts's adresss, you can dereference using the * to get the value for sure, without * we wll get the value of a[0] +1 mathematically.

int *ptr;
ptr=(int *)malloc(sizeof(int)*5);//this a pointer to dynamic array.

int *ptr[3];//an array of pointers
ptr[0]=malloc(sizeof(float)*3);//the first pointer of the array of pointers is a pointer on an array of size 3*8

return 0;
}
