#include<stdio.h>
#include<stdlib.h>
/*TR :Klavyeden girilen pozitif bir rakamın 2 katına göre * karakteri ile
 ekrana kelebek çizen  kodu yazınız.(goto yapısı kullanılmalıdır.)
 
 ENG :With the * character based on 2 times a positive number entered from the keyboard
  Write the code that draws a butterfly on the screen.(The goto construct should be used.)
 */
int main()
{
    int sayi,i,j;
    int bosluk;

    printf("pozitif bir sayi giriniz:");
    scanf("%d",&sayi);
    kelebek:
    
        if(sayi>0)
        {   
            bosluk=sayi*2-2;
            for(i=0;i<sayi;i++)
            {
                for(j=0;j<=i;j++)
                {
                    printf("*");
                }

                for(j=0;j<bosluk;j++)
                {
                    printf(" ");
                }

                for(j=0;j<=i;j++)
                {
                    printf("*");
                }

                bosluk=bosluk-2;
                printf("\n");
            }

             bosluk=0;
            for(i=0;i<sayi;i++)
            {
                for(j=sayi;i<j;j--)
                {
                    printf("*");
                }

                for(j=0;j<bosluk;j++)
                {
                    printf(" ");
                }

                for(j=sayi;i<j;j--)
                {
                    printf("*");
                }

                bosluk=bosluk+2;
                printf("\n");
            }
        }

        else 
        {
            printf("pozitif bir sayi giriniz");
            scanf("%d",&sayi);
            goto kelebek;
        }   

 return 0; 
}