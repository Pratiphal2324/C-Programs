#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],c1,r1,c2,r2,i,j,k;
    printf("row and column of first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("row and column of second matrix: ");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2){
        printf("The matrix multiplication is not possible!\n");
    }
    else{
        printf("Enter first array elements:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter second array elements:\n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                scanf("%d",&b[i][j]);
            }
        }
        printf("First Array is:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("Second Array is:\n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        printf("The product matrix is:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                c[i][j]=0;
                for(k=0;k<c1;k++){
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}