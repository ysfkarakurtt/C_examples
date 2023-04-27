#include <stdio.h>
#include <stdlib.h>

/*TR: 4 basamaklı sayının rakamlarının toplamının 3. üs kuvvetine eşit olan 2 tane 4 basamaklı sayıları bulunuz.

ENG: Find two 4-digit numbers that are equal to the sum of the digits of the 4-digit number to the 3rd power.
*/
int main()
{
    int i,j,k,l;
    int sayi;
        for(i=1;i<10;i++)
        { 
            for(j=0;j<10;j++)
            {
                for(k=0;k<10;k++)
                {
                    for(l=0;l<10;l++)
                    {   
                        sayi=(i*1000+j*100+k*10+l*1);
                        if(sayi==pow(i+j+k+l,3))
                        {
                            printf("%d%d%d%d\n",i,j,k,l);
                        }
                    }
                }
            }
        }
    return 0;
}