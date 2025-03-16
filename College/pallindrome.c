#include<stdio.h>
int main(){
    int n, temp, r, rev = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp = n;
    while(n!=0){
        r = n%10;
        rev = rev*10 + r;
        n = n/10;
    }
    if(rev == temp){
        printf("Pallindrome Number\n");
    }
    else{
        printf("Not Pallindrome Number\n");
    }
    return 0;
}