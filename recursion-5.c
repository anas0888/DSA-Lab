// this is called head recursion as we dont have any line of code before  a recursive call.
#include<stdio.h>
void fun(int n){
    if(n > 0){
        fun(n-1);
        printf("%d",n);
    }
}
int main(){
    fun(5);
}