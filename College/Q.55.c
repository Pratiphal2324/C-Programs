// WAP to find sum of all odd and even numbers upto n terms and find total count.
#include<stdio.h>
int main(){
    int n,i, os = 0, es = 0, ec=0, oc=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if(i%2==0){
            es+=i;
            ec++;
        }
        else{
            os+=i;
            oc++;
        }
    }
    printf("Sum of %d even numbers = %d\nSum of %d odd numbers = %d\n",ec,es,oc,os);

    return 0;
}