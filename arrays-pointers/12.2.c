#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*TR: Girilen elemanı dizinin içinde bulan ve nerede olduğunu söyleyen kodu pointer ile yazın.

ENG:Write the code that finds the entered element in the array and tells where it is with a pointer.
*/
int ara(int array[][3],int *line,int *column,int toSearch);
int main()
{
    int array[3][3];
    int i,j;
    int line;
    int column;
    int number;
    int toSearch;
    srand(time(NULL));

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {    
                array[i][j]=rand()%10;
            } 
        }
        printf("Diziniz bu şekildedir:\n");
        for(i=0;i<3;i++)
         {
            for(j=0;j<3;j++)
            {    
                printf("%4d ",array[i][j]);
            }
            printf("\n"); 
        }
        printf("dizi icerisinde aranacak degeri giriniz:");
        scanf("%d",&toSearch);
        number=ara(array,&line,&column,toSearch);
        if(number)
        {
            printf("aradiginiz sayi dizi icerisinde %u satir ve %u sutunda yer almaktadir",line,column);
        }
        else
        {
            printf("Aradiginiz sayi bu dizi içerisinde yer almamaktadir");
        }

    return 0;
}

int ara(int array[][3],int *line,int *column,int toSearch)
{ 
 
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { 
            if(toSearch==array[i][j])
            {
                *line=i+1;
                *column=j+1;
                
               return 1;            
            }
        }
    
    }

}