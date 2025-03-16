// WAP to input mxn order matrix and print sum of main diagonal
#include<stdio.h>
int main(){
    int i,j,m,n,a[10][10],s=0;
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
        for(j=0;j<n;j++){
            if(i==j){
                s = s + a[i][j];
            }
        }
    }
    printf("The sum of main diagonal elements is %d\n",s);
    return 0;
}