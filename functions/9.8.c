#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>
/*TR :Her çağrıldığında içerisinde üretilen rastgele satır(1-5) ve sütun (1-10) değerlerine göre
 ekrana * karakteri ile dolu dikdörtgen çizen kodu yazınız.
 
 ENG:According to the random row(1-5) and column (1-10) values generated every time it is called
  Write the code that draws a rectangle filled with * character to the screen.
 */
void dikdortgenciz(int a,int b);

int main()
{
    int shortEdge;//kısa kenar
    int tallEdge;//uzun kenar

    srand(time(NULL));
    shortEdge=1+rand()%5;
    tallEdge=1+rand()%10;

    dikdortgenciz(shortEdge,tallEdge);

    return 0;
}
void dikdortgenciz(int a,int b)
{   
    int i,j;

        for(i=0;i<a;i++)
        {
             for(j=0;j<b;j++)
            {
                printf("*");
            }
             printf("\n");
         }

}