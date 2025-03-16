#include<stdio.h>
int main(){
    int *ptr1;
    int **ptr2;
    int a=5;
    // int b=6;
    ptr1=&a;
    ptr2=&ptr1;
    // ptr2=&b;
    // printf("ptr1 = %d\n",ptr1);
    printf("%d\n",**ptr2);
    // printf("%d",ptr1-ptr2);
    // printf("%d\n",ptr1 + 2);
    // printf("%d\n",ptr1-2);
    // if(ptr1>ptr2){
    //     printf("Yes\n");
    // }
    // else{
    //     printf("No\n");
    // }
    // printf("%d",++ptr1);
    return 0;
}

//pointer arithmetic 
// ptr1-ptr2 = (ptr1-ptr2)/(memory of datatype)

//    ptr2 -> ptr1 -> a  
//    &ptr1   &a      5
