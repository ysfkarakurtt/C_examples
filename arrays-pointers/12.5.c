#include <stdio.h>
#include <stdlib.h>
/*TR: 4 adet tam sayıyı  saat yönünde ya da saat yönünün tersinde yerlerini istenildiği kadar değiştiren kodu pointer ile yazınız.

ENG: Write the code that changes the places of 4 integers clockwise or counterclockwise as much as desired with a pointer.
*/
void cevir(int *n1,int *n2,int *n3,int *n4,char direction,int turn);
int main()
{
    int number1,number2,number3,number4;
    char direction;//yön
    int turn;//cevirmek

          printf("4 adet tamsayi giriniz:");
          scanf("%d %d %d %d",&number1,&number2,&number3,&number4);

          printf("Cevirme yonu(saat yonu icin D,tersi icin T) :");
          scanf(" %c",&direction);

          printf("Girilen yonde kac kere cevrilecek :");
          scanf("%d",&turn);

          printf("---------------------------------------------------------\n");
          printf("Sayilarin cevrilmeden onceki halleri :\na\tb\tc\td\t\n%d\t%d\t%d\t%d\n",number1,number2,number3,number4);
          cevir(&number1,&number2,&number3,&number4,direction,turn);
          printf("Sayilarin cevrilmeden sonraki halleri :\na\tb\tc\td\t\n%d\t%d\t%d\t%d",number1,number2,number3,number4);

    return 0;
}
void cevir(int *n1,int *n2,int *n3,int *n4,char direction,int turn)
{
    int tmp;
    int tmp2;
    
        switch (turn)
        {
            case 1:
                if(direction=='D')
                {
                    tmp=*n4;
                    *n4=*n3;
                    *n3=*n2;
                    *n2=*n1;
                    *n1=tmp;
                }
                else
                {
                    tmp=*n1;
                    *n1=*n2;
                    *n2=*n3;
                    *n3=*n4;
                    *n4=tmp;
                }

            break;
            case 2:
                tmp=*n3;
                *n3=*n1;
                *n1=tmp;
                tmp2=*n2;
                *n2=*n4;
                *n4=tmp2;

            break;

            case 3:
                if(direction=='D')
                {
                    tmp=*n1;
                    *n1=*n2;
                    *n2=*n3;
                    *n3=*n4;
                    *n4=tmp;
                }
                else
                {   
                    tmp=*n4;
                    *n4=*n3;
                    *n3=*n2;
                    *n2=*n1;
                    *n1=tmp;
                } 

            break;
      
            default:
            break;
        }

}
