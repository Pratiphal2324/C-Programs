#include<stdio.h>
#include<conio.h>
int main(){
	long int arr[10],temp;
	for(int i=0;i<10;i++){
		printf("Enter no.%ld : ",i+1);
		scanf("%ld",&arr[i]);
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}	
		}
	}
	printf("The numbers arranged in ascending order are : ");
	for(int i=0;i<10;i++){
		printf("%ld, ",arr[i]);
	}
}

