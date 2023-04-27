#include<stdio.h>
#include<stdlib.h>
/*TR : Klavyeden girilen iki sayı arasındaki tüm asalları gösteren programı yazınız.

ENG :Write a program that displays all primes between two numbers entered from the keyboard.
*/
int main()
{
    int sayi;
    int sayi2;
    int i,j;
    int toplam=0;
    
        printf("ilk sayi giriniz:");
        scanf("%d",&sayi);
        printf("ikinci sayi giriniz:");
        scanf("%d",&sayi2);
        printf("%d ile %d arasindaki  Asal sayilar:\n ",sayi,sayi2);
        for(i=sayi;i<=sayi2;i++)
        {    
            toplam=0;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    if(i==2)
                    {
                        toplam=0;
                    }
                    if(i!=2)
                    {
                        toplam=toplam+1;
                    }
                }     
            }
            if(i!=1)
            {
                if(toplam==0)
                { 
                    printf("%d, ",i);
                }
            }
        }
    
 return 0; 
}