#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*TR: Kendisine gönderilen pozitif tam sayının mutlu olup olmadığını bulan C projesini yazınız.
    NOT:Mutlu sayı:Sayıyı oluşturan rakamların karelerinin toplamından oluşan yeni bir sayı üretilir.
    Bu işlem üretilen sayı tek basamaklı oluncaya kadar tekrar ettirilir.Sonunda 1 e ulaşırsa bu sayı mutlu sayıdır.

ENG: Write a C project that finds whether the positive integer sent to it is happy or not.
     NOTE: Happy number: A new number is generated, consisting of the sum of the squares of the digits that make up the number.
     This process is repeated until the generated number is a single digit. If it finally reaches 1, this number is a happy number.
*/
int isHappyNumber(int);
int main()
{ 
    int sayi;
    
        printf("Bir sayi giriniz:");
        scanf("%d",&sayi);
        isHappyNumber(sayi);
        printf("%d ",isHappyNumber(sayi));
    
 return 0; 
}

int isHappyNumber(int sayi)
{

    while(1)
    { 
        int birler,onlar,toplam,yuzler;

        birler=sayi%10;
        sayi=sayi/10;
        onlar=sayi%10;
        sayi=sayi/10;
        if(sayi!=0)
        {
            yuzler=sayi;
        }
        if(sayi==0)
        {
            yuzler=0;
        }
        toplam=pow(birler,2)+pow(onlar,2)+pow(yuzler,2);

        if(toplam<10)
        {
            if(toplam==1)
            {
                return 1;
            }
            if(toplam !=1)
            {
                return 0;
            }
        }
        sayi=toplam;
    }
}