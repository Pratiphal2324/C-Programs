//WAP to enter n elements in an array and find maximum and minimum elements dynamically.
#include<stdio.h>
#include<alloc.h>
int main(){
    int n,i,max,min,*ptr;
    printf("Enter how many elements? ");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    printf("Enter %d array elements: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("The entered array is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
    }
    max = *ptr;
    min = *ptr;
    for(i=0;i<n;i++){
        if(max<*(ptr+i)){
            max = *(ptr+i);
        }
        if(min>*(ptr+i)){
            min = *(ptr+i);
        }
    }
    printf("Maximum element is %d\nMinimum element is %d\n",max,min);
    free(ptr);
    return 0;
}


/*
    int a[20];
    max=a[0];
    min=a[0];
*/