#include<stdio.h>
#include<math.h>
int main(){
    int n, temp, r, rev = 0, c = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    while(n!=0){
        r=r%10;
        c++;
        n=n/10;
    }
    while(n!=0){
        r = n%10;
        rev = rev + pow(r,c);
        n = n/10;
    }
    if(rev == temp){
        printf("Armstrong Number\n");
    }
    else{
        printf("Not Armstrong Number\n");
    }
    return 0;
}