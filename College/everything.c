#include<stdio.h>
#include<alloc.h>
void display(int *ptr1, int, int);
void product(int *ptr1, int *ptr2, int, int);
int i,j,k;
int main(){
    int *ptr1,*ptr2,m,n;
    printf("Enter m and n: ");
    scanf("%d%d",&m,&n);
    ptr1 = (int*)malloc(m*n*sizeof(int));
    ptr1 = (int*)malloc(m*n*sizeof(int));
    printf("Enter first array elements: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",((ptr1+m*i)+j));
        }
    }
    printf("Enter second array elements: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",((ptr2+m*i)+j));
        }
    }
    printf("The first array is:\n");
    display(ptr1,m,n);
    printf("The second array is:\n");
    display(ptr2,m,n);
    printf("The product matrix is:\n");
    product(ptr1,ptr2,m,n);
    return 0;
}
void display(int *ptr, int m, int n){
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",*((ptr+m*i)+j));
        }
    }
}
void product(int *ptr1, int *ptr2, int m, int n){
    int*ptr;
    ptr = (int*)malloc(m*n*sizeof(int));
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            *ptr = 0;
            for(k=0;k<n;k++){
                *((ptr+m*i)+j) += *((ptr1+m*i)+k) + *((ptr2+m*k)+j);
            }
        }
    }
    display(ptr,m,n);
}