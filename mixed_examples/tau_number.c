#include<stdio.h>
#include<stdlib.h>
/*TR : Klavyeden girilen sayıya kadar tüm tau sayılarını bulan programı yazınız.
Tau sayısı: bir sayı tam bölenlerinin sayı adedine de tam bölünüyorsa o sayı Tau sayısıdır.

ENG :Write a program that finds all tau numbers up to the number entered from the keyboard.
Tau number: If a number is divisible by the number of its divisors, that number is the Tau number.
*/
int main()
{     int i,j;
    int toplam=0;
    int sayi;

    printf("Kaca kadar olan Tau sayilari bulunucak\n");
    scanf("%d",&sayi);
    for(i=1;i<=sayi;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                toplam=toplam+1;
            }  
        }

         if(i%toplam==0)
        {
            printf("%d tau sayisidir.\n",i);
        }
        toplam=0;
    }
    
 return 0; 
}
