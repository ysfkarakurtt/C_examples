#include <stdio.h>
#include <stdlib.h>
/*TR: Kendisine gönderilen iki ayrı kesirli ifadenin toplamının sonucunu kesirli ifade olarak bulan kodu  pointer ile yazınız.

ENG :Write the code that finds the result of the sum of two separate fractional expressions sent to it as a fractional expression with a pointer.
*/
void fractionOperation(int sh1,int dn,int sh2,int dn2,int *shp,int *dnp);
int main()
{
    int share1,share2;//paylar
    int denominator1,denominator2;//paydalar
    int shareResult,denominatorResult;//sonuçun pay ve paydaları

       printf("Birinci ifadenin payini ve paydasini giriniz: ");
       scanf("%d %d",&share1,&denominator1);
       printf("ikinci ifadenin payini ve paydasini giriniz: ");
       scanf("%d %d",&share2,&denominator2);

       printf("-------------------------------------------------------------\n");
       fractionOperation(share1,denominator1,share2,denominator2,&shareResult,&denominatorResult);//kesir işlemi
       
       printf("%d         %d     %d\n",share1,share2,shareResult);
       printf("----  + ---- = ----\n");
       printf("%d         %d     %d\n",denominator1,denominator2,denominatorResult);
 
    return 0;   

}

void fractionOperation(int sh1,int dn1,int sh2,int dn2,int *shp,int *dnp)
{  
       if(dn1 !=dn2)
        {
            *shp=(sh1*dn2)+(sh2*dn1);
            *dnp=dn2*dn1;
        }
        else
        {
            *shp=sh1+sh2;
            *dnp=dn1;
        }
}


