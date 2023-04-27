#include<stdio.h>
#include<stdlib.h>
/* TR: Klavyeden girilen 10 elemanlı bir tam sayı dizisinin elemanlarından en küçük ve en büyük elemanları bulan kodu yazınız.

ENG :Write the code that finds the smallest and largest elements from the elements of a 10-element integer array entered from the keyboard.
*/
int main()
{    
    int value[10];
    int min,max;
    int i,j;

    printf("Dizinin 10 tane elamanini giriniz:");

    for(i=0;i<10;i++)
    {
        scanf("%d",&value[i]);  
    }
    min=max= value[0];

    for(j=1;j<10;j++)
    {
        if(value[j]>max)
        { 
            max=value[j];
        }
        if(value[j]<min )
        {
            min=value[j];
        }

    }

    printf("min :%d  max: %d",min,max);
 
 return 0; 
}
