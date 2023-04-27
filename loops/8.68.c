#include<stdio.h>
#include<stdlib.h>
/*TR :iki basamaklı tüm sayıların çarpım direncini hesaplayıp ekrana yazan C programını yazınız.
Çarpım direncinin hesaplanması:İki basamaklı bir sayıyı oluşturan rakamların birbiri ile çarpımından çıkan sonuç
 tek basamaklı oluncaya kadar yapılan çarpma işlemi miktarına sayının "çarpım direnci"denir.

 ENG :Write a C program that calculates the product resistance of all two-digit numbers and displays it.
Calculation of multiplication resistance: The result of multiplying the digits that make up a two-digit number
The amount of multiplication done until it is a single digit is called the "multiplication resistance" of the number.
*/
int main()
{
    int product;//carpım
    int digit,digit2;//basamak1,basamak2
    int i,resistance;//direnc
    int counter=0;//sayac
    for(i=10;i<100;i++)
    {
        digit=i%10;
        digit2=i/10;
        product=digit*digit2;
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
            counter++;
            printf("%d sayisinin carpim direnci=%d\n",i,counter);
            counter=0;

    }
 return 0; 
}