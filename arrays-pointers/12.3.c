#include <stdio.h>
#include <stdlib.h>
/*TR:kendisine gönderilen en fazla 4 basamaklı bir tam sayıyı basamaklarına ayıran bir fonksiyonu pointer ile yapınız.

ENG:Divide an integer of up to 4 digits into digits and do this with a pointer.
*/
void ayristir(int value,int *ap,int *bp,int *cp,int *dp);

int main()
{
    int value;
    int ap,bp,cp,dp;

    printf("Sayiyi giriniz:");
    scanf("%d",&value);
    ayristir(value,&ap,&bp,&cp,&dp);
    printf("%d sayisinin birler basamagi :%d\n",value,dp);
    printf("%d sayisinin birler basamagi :%d\n",value,cp);
    printf("%d sayisinin birler basamagi :%d\n",value,bp);
    printf("%d sayisinin birler basamagi :%d\n",value,ap);

    return 0;
}

void ayristir(int value,int *ap,int *bp,int *cp,int *dp)
{
   
    *ap=value/1000;
    *bp=(value/100)%10;
    *cp=(value/10)%10;
    *dp=value%10;
}