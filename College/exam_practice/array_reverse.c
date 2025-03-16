#include<stdio.h>
int main(){
    int arr1[100],arr2[100],n,i,c=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Given array is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr1[i]);
    }
    printf("\nThe copied array in reverse order is:\n");
    for(i=n-1;i>=0;i--){
        arr2[c] = arr1[i];
        c++;
    }
    for(i=0;i<n;i++){
        printf("%d\t",arr2[i]);
    }
    return 0;
}