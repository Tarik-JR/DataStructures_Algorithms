#include<stdlib.h>
#include<stdio.h>

int main(){
//first method to create a 2D array:
int A[2][4]={{1,2,3,4},
            {6,7,8,9}};//[rows][columns]
                       //
//second method: an array of pointers in stack and they point on something on heap
int *ptr[4];//array of pointers
ptr[0]=(int *)malloc(sizeof(int)*3);//dynamic array taht contains 3 int slots. its used when we know number of rows but not number of columns, cause nr of columns can be choosen at run time( the 3 in our case)
printf("%d\n",ptr[0][2]);
//third method: both arrays are dynamic with a pointer on stack that points on the first array.
int **pointer;//double pointer: a pointer that points on another pointer
int rows=3;
int columns=3;
pointer=malloc(sizeof(int *)*rows);//declare the first array
for (int m=0;m<rows;m++){
  pointer[m]=(int *)malloc(sizeof(int)*columns);
};//to avoid doing it manually
//fill in the 2D array:
int k=0;
for(int i=0;i<rows;i++){
  for(int j=0;j<columns;j++){
        k++;
        pointer[i][j]=k;
  }
}

//printing the 2D array:
for(int i=0;i<rows;i++){
  for(int j=0;j<columns;j++){
        printf("%d ",pointer[i][j]);
  };
        printf("\n");
};
return 0;
}
