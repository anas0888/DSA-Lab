#include<stdio.h>
#include<stdlib.h>
int *createArray(int size){
int *array = (int *)malloc(size * sizeof(size));

if(array == NULL){
    printf("memory allocation failed \n");
    exit(1);
}
for(int i = 0 ; i < size ; i++){
    array[i]= i * 2 ;
}
return array;
}

int main(){
    int size = 5;
    int * myArray  = createArray(size);
    printf("array elements :");
    for(int i = 0 ; i < size ; i++){
      printf("%d",myArray[i]);

    }
}