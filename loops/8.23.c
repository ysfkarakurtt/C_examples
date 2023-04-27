#include<stdio.h>
#include<stdlib.h>
/*TR : Kullanıcıdan istenen  adet değerine göre sayılardan 13 veya 8 tam olarak bölünebilenlerin kaç tane olduklarını ve toplamlarını veren
 aynı zamanda sayı adetin 0 yada negatif girilmesini engelleyen programı yazınız.
 
 ENG :It gives the number of numbers that are divisible by 13 or 8 and their totals according to the number of pieces requested from the user.
  Also write a program that prevents numbers from being entered as 0 or negative.
 */
int main()
{
    int i;
    int sayi;
    int sayi2;
    int toplam=0;
    int kontrol=0;

        printf("kac adet sayi girecekseniz:");
        scanf("%d",&sayi);
        if(sayi<=0)
        {
	        printf("Hata!!!");
        }
        else
        {
            printf("%d adet sayi giriniz",sayi);
            for(i=1;i<=sayi;i++)
            {
                scanf("%d",&sayi2);
                if(sayi2%8==0 ||sayi2%13==0)
                {
                    toplam=toplam+sayi2;
                    kontrol=kontrol+1;
                }
            }
            printf("----------------\n");
            printf("kurala uyan toplamda %d adet sayi girdiniz.",kontrol);
            printf("toplamlari %d",toplam);
        }
        
	return 0;
}