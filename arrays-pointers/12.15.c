#include <stdio.h>
#include <stdlib.h>
/*TR : Kaplumbağa yumurtalarında maruz kaldığı sıcaklık (33-34) olması yavruların dişi, (28-31) olması yavruların erkek olacağı anlamına gelir.
Kuluçkadaki yumurtalardan %10 yumurtadan çıkamazlar.Bu bilgilere göre kendisine gönderilen cinsiyete   ve istenen yavru sayısına göre 
yumurta sayısını ve olması gereken sıcaklığın alt üst değerlerini bulan kodu pointer ile yazınız.

ENG :Being exposed to the temperature (33-34) in turtle eggs means that the offspring will be female, and (28-31) will mean that the offspring will be male.
10% of the eggs in the incubation cannot hatch.
Write the code that finds the number of eggs and the upper and lower values of the required temperature with a pointer.
*/
void yumurtaSayisiSicakligiBul( char gender,int baby,int *temp,int *temp2,int *egg);
int main()
{
    char gender;//cinsiyet
    int baby;//yavru
    int temp1;//1.sıcaklık
    int temp2;//2.sıcaklık
    int egg;//kuluçkaya konacak yumurta sayısı
    
            printf("istenen yavrularin cinsiyetini giriniz(D)isi,(E)rkek :");
            scanf(" %c",&gender);
            printf("Cikmasini istediginiz yavru sayisini giriniz=");
            scanf("%d",&baby);
            printf("-----------------------------------\n");
            yumurtaSayisiSicakligiBul( gender,baby,&temp1,&temp2,&egg);
            printf("Kulucka sicakligi(alt ust C):%d oC %d oC\n",temp1,temp2);
            printf("Kuluckaya konulacak yumurta sayisi :%d",egg);
    
    
    return 0;

}

void yumurtaSayisiSicakligiBul( char gender,int baby,int *temp1,int *temp2,int *egg)
{
    if(gender=='D')
    {
        *temp1=33;
        *temp2=34;
        
    }
    else
    {
        *temp1=28;
        *temp2=31;
    }
    *egg=(baby*10)/9;

}

