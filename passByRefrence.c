#include<stdio.h>
void swap(int *x, int *y){
int temp;
temp = *x;
*x = *y;
*y = temp;
}

int main(){
    int a,b;
    a = 10;
    b = 20;
    swap(&a,&b);
    printf("after swap %d,%d", a,b);
    return 0;
}
//here the swap is done using pointers.