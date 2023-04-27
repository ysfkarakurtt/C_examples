#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*TR: Kendisine gönderilen  basamak sayısı ve işlem operatörüne göre rastgele soru üreten bir C projesi yapınız.

ENG:Make a C project that generates random questions according to the number of digits sent to it and the operation operator.
*/
void islemYaz(char islem,int basamak);
int main()
{
    int basamak;
    char islem;

      printf("lutfen yapacaginiz islemi seciniz toplama ise '+' cikarma ise '-' yaziniz:\n");
      scanf("%c",&islem);
      printf("lutfen isleminizin kac basamakli olacagini seciniz (maksimum 3 basamaki olabilir):");
      scanf("%d",&basamak);
      islemYaz(islem,basamak);

    return 0;
}

void islemYaz(char islem,int basamak)
{  
    int a,b,c,a2,b2,c2;
    
     srand(time(NULL));
     a=100+rand()%900;
     a2=100+rand()%900;
     b=10+rand()%90;
     b2=10+rand()%90;
     c=rand()%10;
     c2=rand()%10;

      printf("Sorunuz:\n");
         if (islem=='+')
         {
            if (basamak==3)
            {
               printf("%d\n%d\n+_____\n   ?",a,a2);
            }
            if (basamak==2)
            {
               printf("%d\n%d\n+_____\n   ?",b,b2);
            }
            if (basamak==1)
            {
               printf("%d\n%d\n+_____\n   ?",c,c2);
            }
         }
         if (islem=='-')
         {
            if (basamak==3)
            { 
               a:
               if(a>a2)
               {
                  printf("%d\n%d\n-_____\n   ?",a,a2);
               }
               else
               {
                  srand(time(NULL));
                  a=100+rand()%900;
                  a2=100+rand()%900;
                  goto a;
               }
            }   
        
            if (basamak==2)
            { 
                b:
               if (b>b2)
               {
                  printf("%d\n%d\n-_____\n   ?",b,b2);
               }
               else
               {
                  srand(time(NULL));
                  b=10+rand()%90;
                  b2=10+rand()%90;
                  goto b;
               }
            }

        
            if (basamak==1)
            { 
               c:
               if(c>c2)
               {
                  printf("%d\n%d\n-_____\n   ?",c,c2);
               }
               else
               {
                  srand(time(NULL));
                  c=rand()%10;
                  c2=rand()%10;
                  goto c;
               }

            }
         }

}

