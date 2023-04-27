#include<stdio.h>
#include<stdlib.h>
/*TR : Klavyeden girilen satır ve sütun sayısına göre 1 ve 0  rakamlarını kullanarak satranç tahtası örüntüsünü çizdiren programı yazınız.

ENG :Add the program that draws the game board pattern using the numbers 1 and 0 according to the row and column view entered from the keyboard.
*/
int main()
{     
    int i,j,satir,sutun;
   
        printf("Satir sayisi giriniz:");
        scanf("%d",&satir);
        printf("Sutun sayisi giriniz:");
        scanf("%d",&sutun);
        for(i=1;i<=satir;i++)
        {
            for(j=1;j<=sutun;j++)
            {
                if((i+j)%2==0)
                {
                    printf("1");
                }   
                else
                {
                    printf("0");
                }

            }
            printf("\n");
        }
        
 return 0; 
}
