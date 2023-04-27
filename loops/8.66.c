#include<stdio.h>
#include<stdlib.h>
/*TR : Klavyeden girilen iki basamaklı bir sayının çarpım direncini hesaplayıp ekrana yazan C programını yazınız.
Çarpım direncinin hesaplanması:İki basamaklı bir sayıyı oluşturan rakamların birbiri ile çarpımından çıkan sonuç
 tek basamaklı oluncaya kadar yapılan çarpma işlemi miktarına sayının "çarpım direnci"denir.

 ENG :Write a C program that calculates the product resistance of a two-digit number entered from the keyboard and writes it to the screen.
Calculation of multiplication resistance: The result of multiplying the digits that make up a two-digit number
  The amount of multiplication done until it is a single digit is called the "multiplication resistance" of the number.
*/
int main()
{   
    int product;//carpım
    int digit,digit2;//basamak1,basamak2
    int resistance;//direnc
    int counter=0;//sayac
    int value;//deger
    int  numberDigit=0;//basamak sayisi
    int tmp;//gecici
    first:
    printf("Sayiyi giriniz=");
    scanf("%d",&value);
    tmp=value;
        while(value>0)
        { 
            value=value/10;
            numberDigit++;
        }
        if(numberDigit==2)
        {
            digit=tmp%10;
            digit2=tmp/10;
            product=digit*digit2;
            counter++;
            if(product>10)
            {
                while(product>10)
                {
                    digit=product%10;
                    digit2=product/10;
                    product=digit*digit2;
                    counter++;
                }
            }
           
            printf("%d sayisinin carpim direnci=%d\n",tmp,counter);
        }
        else
        {   
            numberDigit=0;
            printf("Yanlis!! Lutfen 2 basamakli sayi giriniz\n");
            goto first;
            
        }

 return 0; 
}
