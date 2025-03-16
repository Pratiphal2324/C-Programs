// Q.46. WAP to print all the armstrong numbers from 100 to 999.
#include<stdio.h>
int main(){
    int n, r, rev, i;
    for(i=100; i<1000; i++){
    n = i;
    rev = 0;
    while(n!=0){
        r = n%10;
        rev = rev + r*r*r;
        n = n/10;
    }
    if(rev == i){
        printf("%d\n",rev);
    }
    }
    return 0;
}