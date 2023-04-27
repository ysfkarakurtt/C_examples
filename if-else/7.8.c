#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*TR : Bir aracın pert(ağır hasarlı,kullanılmaz) olduğu tespiti,sigorta şirketinin ödeyeceği bedele göre belirlenir.
Aracın hurda bedeli ile sigorta bedeli arasındaki fark,aracın onarım bedelinden daha az ise araç pert olarak değerlendirilir.
Klavyeden girilen sigorta, onarım, ve hurda bedellerine göre aracın  pert olarak ayrılıp ayrılmayacağını ,ayrılırsa sigorta şirketini karını hesaplayan C programını yazınız 

ENG :Determining that a vehicle is pert (heavily damaged, unusable) is determined according to the price to be paid by the insurance company.
If the difference between the scrap cost of the vehicle and the insurance cost is less than the repair cost of the vehicle, the vehicle is considered pert.
According to the insurance, repair and scrap costs entered from the keyboard, write the C program that calculates whether the vehicle will be separated as pert, and if so, the profit of the insurance company.*/
int main()
{
    int insurance;
    int repair;
    int scrap;
    int tmp;
    printf("please enter insurance,repair,scrap  cost of damaged vehicle:");
    scanf("%d %d %d",&insurance,&repair,&scrap);
    printf("------------------------\n");

    if(abs(scrap-insurance)<repair)
    { 
        tmp=repair-abs(scrap-insurance);
         printf("this car you must  to separate scrap ");
         printf("if you can  to separate scrap  you earning %dTL",tmp);

    }
    else
    { 
        printf("You need to go to the service center for fix this car.");

    }
    return 0;
}