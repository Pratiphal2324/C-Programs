#include<stdio.h>
int main(){
    int a = 11;
    float b = 2.0;
    void *ptr;
    ptr = &a;
    printf("%d\n",(int*)ptr);
    printf("%d\n",*(int*)ptr));
    ptr = &b;
    printf("%d\n",(float*)ptr);
    printf("%f\n",*(float*)ptr);
    return 0;
}