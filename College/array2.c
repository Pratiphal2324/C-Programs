// WAP to enter n elements in an array and copy it in another array by arranging in order.
#include<stdio.h>
int main(){
    int i,j,temp,n,a[100],b[100];
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
    for(i=0;i<n;i++){
        b[i] = a[i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            temp = b[j];
            if(*(ptr+j)>*(ptr+j+1)){
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
    printf("\nThe copied array in arranged order is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",b[i]);
    }
    printf("\n");
    return 0;
}