/*
    // Q.38 An organization is dealing in 2 items (say A and B). Provide the commission on the sale of these items according to the following policies: 
    Commission rate of A = 6% upto the sale of Rs. 2000. if the sale of A is above 2000, the the commission is 7% on the extra sale.
    Commission rate of B = 10% upto the sale of Rs. 4000. If the sale of B is above 4000, the commission rate is 12% on the extra sale.
*/
#include<stdio.h>
int main(){
    float a,b,ar,br;
    printf("Enter your sales in A and B respectively: ");
    scanf("%f%f",&a,&b);
    if(a<=2000){
        ar = 0.06*a;
    }
    else{
        ar = 0.06*2000+(a-2000)*0.07;
    }
    if(b<=4000){
        br = 0.1*b;
    }
    else{
        br = 0.1*4000+0.12*(b-4000);
    }
    printf("Your total commission is %f",ar + br);
    return 0;
}