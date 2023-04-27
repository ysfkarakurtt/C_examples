#include<stdio.h>
#include<stdlib.h>
/* TR :İlginç sayı:Basamaklarındaki rakamların faktöriyellerinin toplamı yine kendisine eşittir.
Bu özelliğe sahip 3 basamaklı sayıyı bulup ekrana yazdıran kodu yazınız.


ENG :Interesting number: The sum of the factorials of the digits is still equal to itself.
Write the code that finds the 3-digit number with this feature and prints it on the screen.
*/
int fakt(int value);
int main()
{ 
  int a,b,c,d;
  int x1,x2,x3;
      for(a=1;a<10;a++) 
      {
          for(b=0;b<10;b++)
          {
              for(c=0;c<10;c++)
            {
                x1= fakt(c);
                x2= fakt(b);
                x3=fakt(a);
                if((x1+x2+x3)==(a*100+b*10+c))
                {
                  printf("Aradiginiz sayi =%d%d%d",a,b,c);
                  break;
                }

        }
    }
}

 return 0; 
}

int fakt(int value)
{
  int i;
  int fakt=1;
      for(i=2;i<=value;i++)
        {
          fakt=fakt*i;
        }

  return fakt;
}