#include<stdio.h>
#include<conio.h>
int main()
{

    int amt=0,unt=0;
    printf("Enter the unit of your electricity bill \n");
    scanf("%d",&unt);
     if(unt<50){
        amt=6.5*unt;
        printf("Your electricity bill is rupees-->%d",amt);

    }
    else if(unt>50&&unt<=100){
        amt=5*unt;
        printf("Your electricity bill is rupees-->%d",amt);

    }
    else if(unt>100&&unt<=500){
       amt=4.5*unt;
        printf("Your electricity bill is rupees-->%d",amt);

    }

    else if(unt>500&&unt<=1000){
        amt=4*unt;
        printf("Your electricity bill is rupees-->%d",&amt);

    }
    else if(unt>1000){
       amt=3.8*unt;
        printf("Your electricity bill is rupees-->%d",&amt);
    }
        else printf("ivalid input");

    return 0;
}
