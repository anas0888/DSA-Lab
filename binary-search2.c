#include<stdio.h>
void Binsearch(int a[],int l,int h, int key, int mid,int n){
    while(l <= h){
        mid =  (l+h)/2;
        if(key == A(mid)){
        return mid;}
        else if(key < A(mid)){
        h = mid -1;}
    
    else{
        l = mid + 1;

    }
return -1;
}

}

int main() {
    int a[] = {2, 4, 6, 8, 10, 12};
    int n = 6, key = 8;
    binarySearch(a, n, key);
    return 0;
}