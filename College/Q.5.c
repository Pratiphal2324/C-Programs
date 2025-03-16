// Q.5 WAP to find simple interest if p, t, and r values are given by user.
#include <stdio.h>
int main(){
    float p, t, r, si;
    printf("Enter principal: ");
    scanf("%f",&p);
    printf("Enter rate: ");
    scanf("%f",&r);
    printf("Enter time: ");
    scanf("%f",&t);
    si = (p*t*r)/100;
    printf("Simple Interest = %f\n",si);
    return 0;
}