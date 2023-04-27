#include<stdio.h>
#include<stdlib.h>
/*TR: Gönderilen sayı narsist sayı ise 1 değilse 0 çıktısı alan C projesini yapınız.
    NOT: n basamaklı bir sayıyı oluşturan rakamların n.dereceden kuvvetleri toplamı sayının yine kendisine eşit ise bu sayıya narsist sayı denir.
    
ENG:If the predicted number is the narcissistic number, do the C project that outputs 1 if not 0.
     NOTE: If the sum of the nth degree powers of the numbers that make up an n-digit number is equal to the number itself, this number is called a narcissistic number.
    */
int isNarsistNumber(int);
int main()
{ 
    int sayi;

    printf("sayi giriniz:");
    scanf("%d",&sayi);
    isNarsistNumber(sayi);
    printf("%d",isNarsistNumber(sayi));
    
 return 0;
 }
int isNarsistNumber(int sayi)
{  
    int a,b;
    int toplam=0;
    int sayac=0;
    int tmp;

    tmp=sayi;
     while(sayi>0)
    {
        sayi=sayi/10;
        sayac++;
    }
    b=sayac;
    sayi=tmp;
    while(sayi>0)
    {
        a=sayi%10;
        sayi=sayi/10;
        toplam=toplam+pow(a,b);
    }
    sayi=tmp;
    if(tmp=toplam)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}