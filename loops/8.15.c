#include<stdio.h>
#include<stdlib.h>
/*TR : 1-20 arasındaki asal sayıları bulan programı yazınız.

ENG :Write a program that finds prime numbers 1-20.
*/
int main()
{
    int i,j;
    int sayac;

    printf("1 ile 20 arasindaki asal sayilar\n-----------------\n ");

    for( i=2;i<20;i++)
    {
        sayac=0;

        for(j=2;j<i;j++)
            {
            
                if(i%j==0)
                {
                    sayac++;
        
                } 

            }

        if(i==2)
            {
                sayac=0;
            }
        if(sayac==0)
            {
                printf("%d  ",i);
            }
        

    }

	return 0;
}