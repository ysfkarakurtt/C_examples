#include<stdio.h>
#include<stdlib.h>
/*TR: Faktöriyel işlemi kullanılarak oluşturulmuş 
sayi dizisinin ilk elamanı 0! ile başlamakta ve sonrasındaki her terim kendinden önce gelen terimden a kadar fazla olmaktadır.
Klavyeden girilen a ve b değerlerine göre diziyi hesaplayan kodu yazınız.

ENG :Created using the factorial operation
The first element of the number array is 0! It starts with a and every term after it is more than the term before it.
Write the code that calculates the array based on the a and b values entered from the keyboard.
 */
int SeriHesapla(int,int);
int main()
{
  int a,b;

    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("\n Toplam Sonuc:%d",SeriHesapla(a,b));

 return 0;
}
int SeriHesapla(int a,int b)
{
    int c,i,j;
    int fakt;
    int top=1;
    int toplam=0;

        c=a;
        printf("Serinin Terimleri:");
        printf("1 +");
        for(i=1;i<=b-1;i++)
        {
            for(j=1;j<=a;j++)
            {
                top=top*j;
            }
            printf("%d +",top);
            toplam=toplam+top;
            top=1;
            a=a+c;
        }
        toplam=toplam+1;
        return toplam;
}