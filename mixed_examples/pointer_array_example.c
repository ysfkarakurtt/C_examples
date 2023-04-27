#include <stdio.h>
#include <stdlib.h>
/* TR :  Bir tam sayı dizisinin eleman sayısı ve elamanlarının Klavyeden girildiği ve tekrardan girdiği elamanın
 dizide bulunup bulunmadığı eğer bulunduysa hangi pozisyonda olduğunu söyleyen kodu yazınız.
 
 ENG :The element number and elements of an integer array are entered from the Keyboard and re-entered.
  Write the code that tells whether it is found in the array or not, and if it is, at what position it is.
 */
int main()
{
    
  int array[100];
  int number,i,searchNumber,index;
    printf("diziniz kac elamanli olsun?");
    scanf("%d",&number);
    printf("Dizinin elamanlarini giriniz:");
    for(i=0;i<number;i++)
    {
    scanf("%d",&array[i]);
    }
    printf("Aranan elamani giriniz:");
    scanf("%d",&searchNumber);
    index= ara(array,number,searchNumber);
    if(index==-1)
    {
        printf("%d elamani dizinizde bulunmuyor",searchNumber);
    }
    else
    {
        printf("%d elemani %d.pozisyonda bulunuyor",searchNumber,index+1);
    }
    return 0;
}
int ara(int *array,int number,int searchNumber)
{
    int i,tmp=-1;
        for(i=0;i<number;i++)
        {
            if(*array==searchNumber)
            {
                tmp=i;
            }
            array++;
        }
    return tmp;

}
