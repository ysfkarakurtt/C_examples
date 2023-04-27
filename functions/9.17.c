#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*TR: Kendisine gönderilen zaman dilimi değerine göre (sabah ise s, öğlen ise o,akşam ise a) bilgisine göre rastgele bir zamanı ekrana yazın.
NOT: Sabah 08.00.00 -10.59.59
     Öğlen 11.00.00 -15.59.59
     Akşam 16.00.00 -22.59.59

ENG: Write a random time on the screen according to the time zone value sent to it (h if it's morning, o if it's noon, a if it's evening).
NOTE: Morning 08.00.00 -10.59.59 
      Noon    11.00:00 -15.59.59
      Evening 16.00.00 -22.59.59
      */
void zamanUret(char x);
int main()
{
    char harf;
    
    printf("istediginiz vakti secin(sabah icin 's' oglen icin 'o' aksam icin 'a'):");
    scanf("%c",&harf);
    zamanUret(harf);

    return 0;
}

void zamanUret(char x)
{ 
  int a,b,c,d,e;

    srand(time(NULL));
    a=8+rand()%3;
    b=11+rand()%5;
    c=16+rand()%7;
    d=rand()%60;
    e=rand()%60;
      if(x=='s')
       {
          printf("%d:%d:%d",a,d,e);
       }
        if(x=='o')
       {
          printf("%d:%d:%d",b,d,e);
       }
        if(x=='a')
       {
          printf("%d:%d:%d",c,d,e);
       }

}