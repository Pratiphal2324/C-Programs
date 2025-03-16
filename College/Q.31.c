// Q.31 WAP to input selling price and cost price of an item and find whether there is profit or loss.
#include<stdio.h>
int main(){
    float sp, cp;
    printf("Enter selling price: ");
    scanf("%f",&sp);
    printf("Enter cost price: ");
    scanf("%f",&cp);
    if(sp-cp>0){
        printf("Profit!\n");
    }
    else if(sp-cp<0){
        printf("Loss!\n");
    }
    else{
        printf("Neither profit nor loss!\n");
    }
    return 0;
}