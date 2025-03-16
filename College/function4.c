#include<stdio.h>
int power(int,int);
int main(){
    int x,n;
    printf("Enter x and n: ");
    scanf("%d%d",&x,&n);
    printf("%d^%d = %d",x,n,power(x,n));
    return 0;
} 
int power(int x, int n){
if(n==0){
    return 1;
}
else{
    return x*power(x,n-1);
}
}