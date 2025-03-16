#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
float km_mile(int m);
float mile_km(int m);
float inch_foot(int f);
float foot_inch(int f);
float cm_inch(int h);
float inch_cm(int h);
float pound_kg(int u);
float kg_pound(int u);
float inch_metre(int e);
float metre_inch(int e);
int main()
{
    float km, mile, inch, foot, cm, pound, metre, kg;
    int inp, o, kl, klm, klmn, klmno;
    printf("Enter '1' for km - mile conversion,\nEnter '2' for inch- foot conversion,\nEnter '3' for cm - inch conversion,\nEnter '4' for pound - kg conversion,\nEnter '5' for inch - metre conversion : \n");
    scanf("%d", &inp);
    switch(inp)
    {
        case 1:
        printf("Enter '1' for km to mile and '2' for mile to km : \n");
        scanf("%d",&o);
        switch(o)
        {
            case 1:
            printf("Enter the km : \n");
            scanf("%f", &km);
            printf("%f km is %f miles.", km, km_mile(km));
            break;
        case 2:
            printf("Enter the miles : \n");
            scanf("%f", &mile);
            printf("%f miles is %f kilometres.", mile, mile_km(mile));
            break;
        }
        break;  
        case 2:
        printf("Enter '1' for inch to foot and '2' for foot to inch : \n");
        scanf("%d",&kl);
        switch(kl)
        {
            case 1:
            printf("Enter the inch : \n");
            scanf("%f", &inch);
            printf("%f inches is %f feet.", inch, inch_foot(inch));
            break;
        case 2:
            printf("Enter the feet : \n");
            scanf("%f", &foot);
            printf("%f feet is %f inches.", foot, foot_inch(foot));
            break;
        }
        break;
        case 3:
        printf("Enter '1' for cm to inch and '2' for inch to cm : \n");
        scanf("%d", &klm);
        switch(klm)
        {
            case 1:
            printf("Enter the cm : \n");
            scanf("%f", &cm);
            printf("%f cm is %f inches.", cm, cm_inch(cm));
            break;
        case 2:
            printf("Enter the inches : \n");
            scanf("%f", &inch);
            printf("%f inches is %f cm.", inch, inch_cm(inch));
            break;
        }
        break;
        case 4:    
        printf("Enter '1' for pound to kg and '2' for kg to pound : \n");
        scanf("%d", &klmn);
        switch(klmn)
        {
            case 1:
            printf("Enter the pounds : \n");
            scanf("%f", &pound);
            printf("%f pounds is %f kg.", pound, pound_kg(pound));
            break;
        case 2:
            printf("Enter the kg : \n");
            scanf("%f", &kg);
            printf("%f kg is %f pounds.", kg, kg_pound(kg));
            break;
        }
        break;
        
    case 5:
        printf("Enter '1' for inch to metre and '2' for metre to inch : \n");
        scanf("%d", &klmno);
        switch(klmno)
        {
            case 1:
            printf("Enter the inches : \n");
            scanf("%f", &inch);
            printf("%f inches is %f metres.", inch, inch_metre(km));
        break;
        case 2:
            printf("Enter the metres : \n");
            scanf("%f", &mile);
            printf("%f metres is %f inches.", metre, metre_inch(metre));
            break;
        }
        break;
    }
    return 0;
}
float km_mile(int m){
    return 0.62137*m;
}
float mile_km(int m){
    return m/0.62137;
}
float inch_foot(int f){
    return f*0.0833;
}
float foot_inch(int f){
    return f/0.0833;
}
float cm_inch(int h){
    return h/2.54;
}
float inch_cm(int h){
    return h*2.54;
}
float pound_kg(int u){
    return u*0.45359237;
}
float kg_pound(int u){
    return u/0.45359237;
}
float inch_metre(int e){
    return inch_cm(e)/100;
}
float metre_inch(int e){
    return e/0.0254;
}
