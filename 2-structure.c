#include<stdio.h>
struct rectangle
{
int lenght;
int breath;
};

int main(){
//struct rectangle r; decleration of the structure
struct rectangle r = {10,5}; // this is decleration + initialisation
// to acess a member we use a dot operator.
r.lenght = 25 ;
r.breath = 10;
printf("area of the rectangle is %d", r.lenght * r.breath);
return 0;
};