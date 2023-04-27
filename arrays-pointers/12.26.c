#include <stdio.h>
#include <stdlib.h>
/*TR : Klavyeden girilen Pay ve payda değerlerini olabilecek en sade hale getiren kodu pointer ile yazınız.

ENG: Write the code that makes the numerator and denominator values entered from the keyboard as simple as possible, with a pointer.
*/
int main()
{ 
    int share; //pay
    int denominator;//payda
    int print;//yazdır

        printf("Pay ve payda giriniz:");
        scanf("%d %d",&share,&denominator);
        printf("------------------------------\n");
        printf("Onceki degeri :%d /%d\n",share,denominator);
        sadelestir(&share,&denominator);
        print=sadelestir(&share,&denominator);
    
        if(print)
        {
            printf("Sadelestirilmis degeri :%d /%d",share,denominator);
        }
        else
        {
            printf("Girmis oldugunuz ifade en sade halindedir");
        }

    return 0;

}

int sadelestir(int *share,int *denominator)
{
    int i,j;
    int counter=0;

        for(i=2;i<*share;i++)
        {
            while(*share%i==0 && *denominator%i==0)
            {
                *share /=i;
                *denominator /=i;
                counter++;
            }

        }

        if(counter>0)
        {
            return 1;
        }
        
}


