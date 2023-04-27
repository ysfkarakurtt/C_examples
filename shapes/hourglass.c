#include <stdio.h>
#include <stdlib.h>
/*TR :Kendisine gönderilen pozitif tam sayıya göre * karakteri ile kum saati şeklini çizen kodu yazınız.

ENG :Write the code that draws the hourglass shape with the * character according to the positive integer sent to it.
*/
int main()
{
    int sayi;
    int i,j,k;
    int bosluk;
    int yildiz;

        printf("pozitif bir sayi giriniz:");
        scanf("%d",&sayi);
        bosluk=0;
        yildiz=sayi*2+1;
        for(i=0;i<sayi;i++)
        { 
            for(j=0;j<bosluk;j++)
            { 
                printf(" ");
            }

            for(k=0;k<yildiz;k++)
            {
                printf("*");
            }

            printf("\n");
            yildiz=yildiz-2;
            bosluk=bosluk+1;
        }

        bosluk=sayi;
    
        for(i=0;i<sayi+1;i++)
        {  
            for(j=0;j<bosluk;j++)
            { 
                printf(" ");
            }

            for(k=0;k<yildiz;k++)
            {
                printf("*");
            }

            printf("\n");
            yildiz=yildiz+2;
            bosluk=bosluk-1;
        }

    return 0;
}