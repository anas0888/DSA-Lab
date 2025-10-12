#include<stdio.h>
#include<math.h>
struct complexNumber {
int real;
int real2;
};
int main(){

{
 struct complexNumber CN = {5,2};
 CN.real2 = 3;
 CN.real = 2;
printf("the complex no. is %d+i%d",CN.real,CN.real2);

}
return 0;}