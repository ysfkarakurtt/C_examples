#include <stdio.h>
#include <stdlib.h>
/*TR: İki basamaklı ikiz asal sayılardan en büyük çiftini bulan programı yazınız.
Not:ikiz asal sayı;aralarındaki fark 2 olan asal sayılar demek.

ENG: Write a program that finds the largest pair of two-digit twin prime numbers.
Note: twin prime numbers mean prime numbers that differ by 2.
*/

int main()
{
    int i,j;
    int sayac=0;
    int asal;
    int sayac2=0;
    int k;
        for(i=99;i>=10;i--)
        { 
            sayac=0;

            for(j=2;j<i;j++)
                {
                    if(i%j==0)
                    {
                        sayac++;
                    }
                }

            if(sayac==0)
                { 
                    asal=i-2;
                    sayac2=0;

                    for(k=2;k<asal;k++)
                    {

                        if(asal%k==0)
                            {
                                sayac2++;
                            }
                    }
                    
                    if(sayac2==0)
                    {
                        printf("%d %d",i,asal);
                        break;
                    }
                }
        }
    return 0;
}