#include<stdlib.h>
#include<stdio.h>

//prints x and then calls the unction again, o/p:87654321
void function(int x){
if(x>0){
printf("%d",x);
function(x-1);
}
}

void function2(int j){
if(j>0){
function(j-1);
printf("%d",j);
}

}
int main(){
function(8);
printf("\n");
function2(8);
return 0;
};
