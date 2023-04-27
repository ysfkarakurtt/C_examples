#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*TR : Klavyeden  girilen 3 adet kenar uzunluğuna göre verilen değerlerin üçgen oluşturup oluşturmadığını;
oluşturuyorsa ne çeşit bir üçgen(eşkenar,ikizkenar,çeşitkenar) olduğunu bulan C programını kodlayınız

ENG : Whether the values given according to the 3 side lengths entered from the keyboard form a triangle;
If so, code the C program to find out what kind of triangle (equilateral, isosceles, scalene) it is.
*/
int main()
{ 
  int a,b,c;
  
    printf("a,b,c  enter lengts: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("--------------------------\n");
      if(( b+c> a && a> abs(b-c)) && (a+c>b && b>abs(a-c)) && (b+a>c && c>abs(b-a)))
       {
          printf("this is a triangle  ");// bu bir ucgendir
          printf("this triangle type:\n");
          if(a!=b && b!=c && a!=c)
            {
               printf("sclane triangle");//cesitkenar ucgen
            }
         if(a==b || b==c || a==c)
            {
              printf(" isosceles triangle");//ikizkenar ucgen
            }
        if(a==b==c) 
          {
               printf(" equilateral triangle");//eşkenar ucgen
          }
      }
     else
      {
        printf("this is a not triangle");
      }

 return 0; 
}