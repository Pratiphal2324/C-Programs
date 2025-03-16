/*Q.35 WAP to input marks of 6 subjects in your first semester. Calculate percentage and based on percentage, find out whether it is distinction, first division, second division, third division or fail.
    >=80% = distinction
    >=60% = First division
    >=45% = second division
    <45% = third division
*/
#include<stdio.h>
int main(){
    float ds, dl, pst, dr, cal, cp, cws, per;
    printf("Enter marks in 7 subjects: ");
    scanf("%f%f%f%f%f%f%f",&ds,&dl,&pst,&dr,&cal,&cp,&cws);
    if(ds<32&&dl<32&&pst<32&&dr<32&&cal<32&&cp<32&&cws<32){
        printf("You have failed! Better luck next time!\n");
    }
    else{
        per = (ds+dl+pst+dr+cal+cp+cws)/7.0;
        if(per>=80){
            printf("You got Distinction with percentage of %f\n",per);
        }
        else if(per>=60){
            printf("You got First Division with percentage of %f\n",per);
        }
        else if(per>=45){
            printf("You got Second Division with percentage of %f\n",per);
        }
        else{
            printf("You got Third Division with percentage of %f\n",per);
        }
    }
    return 0;
}