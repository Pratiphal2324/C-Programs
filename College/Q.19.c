// Q.19 Find the output of the following program:
//      A = 10, B = 5;
//      printf
//      A = ++A + ++A;
//      B = A-----B;
#include <stdio.h>
int main(){
    int A,B;
    A = 10, B = 5;
    printf("A = %d, B = %d\n",A,B);
    A = ++A + ++A;
    printf("A = %d, B = %d\n",A,B);
    B = A-- - --B;
    printf("A = %d, B = %d\n",A,B);
    return 0;
}