#include<stdio.h>
#include<stdlib.h>
/*TR: Klavyeden girilen 6 adet sayısal değere göre(1-30 arasında) ekrana * karakteri ile histogramlarını çizdiren programını yazınız.

ENG: Write a program that draws histograms with the * character on the screen according to 6 numerical values (between 1-30) entered from the keyboard.
*/
int main()
{
    int i,j;
    int dizi[6];
    
    printf("sayilari giriniz:");
    for(i=0;i<6;i++)
    {
        scanf("%d",&dizi[i]);
    } 

    for(j=0; j<6;j++)
    {  
        for(i=0;i<dizi[j];i++)
        { 
            if(i==0)
            {
                printf("%d \t",dizi[j]);
            }
            printf("*");
            if(dizi[j]-1==i)
            {
                printf("\n");
            }
        }
    } 

 return 0; 
}