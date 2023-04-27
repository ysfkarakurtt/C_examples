#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*TR:Sorulan soruya bulunduğu mevsim dışında rastgele başka bir mevsim olarak cevap veren C projesini yapınız.

ENG :Do project C that randomly answers the question as a season other than the season it is in.
*/
 void ertelemeMesajiYaz(int ay);
int main()
{
    int ay;

        printf("hangi aydayiz? :");
        scanf("%d",&ay);
        ertelemeMesajiYaz(ay);

    return 0;
}

void ertelemeMesajiYaz(int ay)
{ 
    int rastgele;

    srand(time(NULL));
        if (ay==12 || ay==1 ||ay==2)
        {       
            rastgele=1+rand()%3;
            if(rastgele==1)
            {
                printf("ilkbaharda tatile gidecegiz");
            }   
            if(rastgele==2)
            {
                printf("yazin tatile gidecegiz");
            }
            if(rastgele==3)
            {
                printf("sonbaharda tatile gidecegiz");
            }   

        }
        if (ay==3 || ay==4 ||ay==5)
        { 
            rastgele=1+rand()%3;
            if(rastgele==1)
            {
                printf("kisin tatile gidecegiz");
            }
            if(rastgele==2)
            {
                printf("yazin tatile gidecegiz");
            }
            if(rastgele==3)
            {
                printf("sonbaharda tatile gidecegiz");
            }
        }
        if (ay==6 || ay==7 ||ay==8)
        { 
            rastgele=1+rand()%3;
            if(rastgele==1)
            {
                printf("ilkbaharda tatile gidecegiz");
            }
            if(rastgele==2)
            {
                printf("kisin tatile gidecegiz");
            }
            if(rastgele==3)
            {
                printf("sonbaharda tatile gidecegiz");
            }
        }
        if (ay==9 || ay==10 ||ay==11)
        { 
            rastgele=1+rand()%3;
            if(rastgele==1)
            {
                printf("ilkbaharda tatile gidecegiz");
            }
            if(rastgele==2)
            {
                printf("yazin tatile gidecegiz");
            }
            if(rastgele==3)
            {
                printf("kisin tatile gidecegiz");
            } 
        }
        
}
