// WAP to input 2 mxn order matrices and print product of them.
#include<stdio.h>
int main(){
    int i,j,k,m,n,a[10][10],b[10][10],c[10][10],s=0;
    printf("Enter order of matrix: ");
    scanf("%d%d",&m,&n);
    printf("\nEnter 1st matrix elements:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter 2nd matrix elements:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nThe 1st array is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe 2nd array is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j] = 0;
            for(k=0;k<n;k++)
                c[i][j]+=a[i][j]*b[j][i];
        }
    }
    printf("The product is: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}