#include<stdio.h>
#include<stdlib.h>
/*TR :Klavyeden girilen sayıya göre ekrana * karakteri ile  baklava şekili çizen kodu yazınız.

ENG :It contains the code that draws the diamond shape with the indicator * characteristic according to the number entered from the keyboard.
NOTE: 
Baklava :turkish dessert ,you can look in internet.
*/
int main()
{ 
    int i,j,k;
    int sayi;
    int bosluk;
    int yildiz;

            printf("Giris:");
            scanf("%d",&sayi);
            bosluk=sayi-1;
            yildiz=1;
            for(i=0;i<sayi;i++)
            {
                for(j=0;j<bosluk;j++)
                {
                    printf(" ");
                }

                for(j=0;j<yildiz;j++)
                {
                    printf("*");
                }

                bosluk=bosluk-1;
                yildiz=yildiz+2;
                printf("\n");
            }
            yildiz=yildiz-4;
            bosluk=1;

            for(i=0;i<sayi;i++)
            {
                for(j=0;j<bosluk;j++)
                {   
                    printf(" ");
                }

                for(j=0;j<yildiz;j++)
                {
                    printf("*");
                }

                bosluk=bosluk+1;
                yildiz=yildiz-2;
                printf("\n");
            }

    return 0;
}
