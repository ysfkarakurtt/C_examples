#include<stdio.h>
#include<stdlib.h>
/*TR: İki adet sıfırdan büyük tam sayının çarpımı
 birinci sayının sürekli ikiye bölünmesi diğerinin ise iki ile çarpılması birinci sayının 1 oluncaya kadarki ortaya çıkan birinci sayı adedine de yükseklik denir. yöntemi ile bulunabilir.
 Bu yöntemi ile yükseklik ve sonuç bulunuz.

ENG : Multiplying two integers greater than zero
The first number to be divided by two continuously and the other to be multiplied by two until the first number becomes 1 is called the height. can be found using the method.
Find height and result with this method.*/
int main()
{   int number,number2;
    int towerHeight=0;//kule yüsekliği
    int result;//sonuç
    int sum=0;//toplam
    int counter=0;//sayaç
    first:
   printf("iki adet sifirdan  buyuk tam sayi giriniz:");
   scanf("%d %d",&number,&number2);
   if(number>0 && number2>0)
   {
    while(number!=0)
      {   
         towerHeight++;
        if(number%2!=0)
        { 
          sum+=number2;
          number2*=2;
          number/=2;
        }
        else
        {
          number2*=2;
          number/=2;
        }
      }
      printf("----------------------------------------\n");
      printf("Carpim kulesi ile hesaplanan sonuc=%d\n",sum);
      printf("Kule yuksekligi =%d",towerHeight);
   }
   else
   {
    printf("Hata!! Sayilar sifirdan buyuk olmali.\n");
    goto first;
   }
 return 0; 
}


