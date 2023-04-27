#include <stdio.h>
#include <stdlib.h>
/* TR :(0-15) arasında verilen yetki kodlarına göre dosya izinleri (r w x p)belirlenmektedir.Bu kod 4 haneli ikili sayı sistemine çevrilir.
Bu ikilik sistemdeki değeri sırasıyla( r w x p ) değerlerini belirler bu dosya izinlerini bulan kodu pointer ile yapınız.


ENG :File permissions (r w x p) are determined according to the authorization codes given between (0-15). This code is converted to 4-digit binary number system.
The value in this binary system determines the values ( r w x p ), respectively. Make the code that finds these file permissions with a pointer.
*/
void izinCoz(int value,int *read,int *write,int *operating,int *printf);

int main()
{
    int value;
    int read,write,operating,print;
    
    printf("Yetki kodunuzu giriniz:");
    scanf("%d",&value);
    printf("------------------------------------\n");
    izinCoz(value,&read,&write,&operating,&print);
    printf("r-okuma   =%d\n",read);
    printf("w-yazma   =%d\n",write);
    printf("x-calistirma   =%d\n",operating);
    printf("p-yazdirma   =%d\n",print);

    return 0;
}
void izinCoz(int value,int *a,int *b,int *c,int *d)
{
   *d=value%2;
   value/=2;
   *c=value%2;
   value/=2;
    *b=value%2;
   value/=2;
    *a=value%2;
} 
