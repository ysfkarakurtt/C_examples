#include<stdio.h>
#include<stdlib.h>
/*TR : */
int main()
{     
    int array[5];
    int i,j,tmp,minindex;
    
    printf(" kucukten buyuge  siralamak istediginiz 5 elemanli dizinin elemanlarini giriniz:\n");
    
    for(i=0;i<5;i++)
    {
        printf(" dizinin  %d. elemanini giriniz:",i+1);
        scanf("%d",&array[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("%d\t",array[i]);
    }
    
    for(i=0;i<5;i++)
    { 
        minindex=i;
        for(j=i+1;j<5;j++)
        {
            if(array[minindex]>array[j])
            {
                minindex=j;
            }
        }

        tmp=array[i];
        array[i]=array[minindex];
        array[minindex]=tmp; 
    }

    printf("\n");
    
    for(i=0;i<5;i++)
    {
        printf("%d\t",array[i]);
    }

 return 0; 
}
