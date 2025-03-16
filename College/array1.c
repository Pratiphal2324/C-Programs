// WAP to enter n elements in an array and copy it in another array in reverse order.
#include<stdio.h>
int main(){
    int i,n,a[100],b[100];
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nThe given array is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nThe copied array in reverse order is:\n");
    for(i=n-1;i>=0;i--){
        b[i]=a[n-1-i];
    }
    for(i=0;i<n;i++){
        printf("%d\t",b[i]);
    }
    printf("\n");
    return 0;
}