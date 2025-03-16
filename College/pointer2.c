#include<stdio.h>
int main(){
    int a[] = {0,1,2,3,4};
    int *ptr,*ptr2;
    ptr = &a[0];
    ptr2 = &a[4];
    while(ptr<=ptr2){
        printf("%d\t",*ptr);
        ptr++;
    }
    return 0;
}