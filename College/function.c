#include<stdio.h>
int reverse(int);
int isPallindrome(int);
int isArmstrong(int);
int power(int,int);
int sumOfDigits(int);
int isPrime(int);
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Reverse of number = %d\n",reverse(num));
    isPallindrome(num)?printf("Pallindrome Number\n") : printf("Not Pallindrome Number\n");
    isArmstrong(num)?printf("Armstrong Number\n") : printf("Not Armstrong Number\n");    
    printf("Sum of digits of %d = %d\n",num,sumOfDigits(num));
    printf(isPrime(num)?"Prime Number\n" : "Not Prime Number\n");
    return 0;
}
int reverse(int n){
    int r=0,s=0;
    while(n!=0){
        r=n%10;
        s = s*10+r;
        n=n/10;
    }
    return s;
}
int isPallindrome(int n){
    return (n==reverse(n)?1:0);
}
int power(int x, int n){
    int res=1;
    for(int i=0;i<n;i++){
        res *= x;
    }
    return res;
}
int isArmstrong(int n){
    int temp, r, rev = 0, c = 0;
    temp = n;
    while(n!=0){
        r=r%10;
        c++;
        n=n/10;
    }
    n=temp;
    while(n!=0){
        r = n%10;
        rev+=power(r,c);
        n = n/10;
    }
    return (rev==temp)?1:0;
}
int sumOfDigits(int n){
    int r=0,s=0;
    while(n!=0){
        r=n%10;
        s+=r;
        n=n/10;
    }
    return s;
}
int isPrime(int n){
    int i,c=0;
    for(i=1;i<n;i++){
        c=(n%i==0)?c+1:c;
    }
    return (c==1)?1:0;
}