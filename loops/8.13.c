#include<stdio.h>
#include<stdlib.h>
/* TR: 1 ile 20 arasında klavyeden girilen kenar uzunluğuna göre 
ekrana * karakteri ile içi dolu bir ters ikizkenar dik üçgen basan C programını kodlayınız.

ENG :According to the edge length entered from the keyboard between 1 and 20
code a C program that prints a filled inverted isosceles right triangle with the * character to the screen.
 */
int main()
{
    int sayi;
    int i;
    int j;
    int tmp;

        printf("Bir kenar uzunlugunu giriniz:");
        scanf("%d",&sayi);
        tmp=sayi;
        for(i=0;i<tmp;i++)
        {
            for(j=sayi;j>0;j--)
            {
                printf("*");
            }
            sayi--;
            printf("\n");
        }

 return 0; 
}