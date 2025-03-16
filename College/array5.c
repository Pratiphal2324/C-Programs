// WAP to input mxn order matrix and print sum of individual rows.
#include<stdio.h>
int main(){
    int i,j,m,n,a[10][10],s;
    printf("Enter order of matrix: ");
    scanf("%d%d",&m,&n);
    printf("\nEnter matrix elements:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe entered array is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        s=0;
        for(j=0;j<n;j++){
            s+=a[i][j];
        }
        printf("The sum of elements in row %d is %d\n",i+1,s);
    }
    return 0;
}