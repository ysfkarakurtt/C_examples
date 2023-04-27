#include<stdio.h>
#include<stdlib.h>
/*TR: Kendisine gönderilen iki pozitif tam sayının OKEK bulan programı yazınız.

ENG :Write a program that finds the OKEK of two positive integers sent to it.
*/
int main()
{ 
    int value,value2;
    int okek,obeb;
    int a,b;
        bas:
        printf("OKEK bulunacak sayilari giriniz=");
        scanf("%d %d",&value,&value2);
        
        if(value>0 &&value2>0)
        {
            if(value>value2)
            {
                a=value-value2;
                b=value2;
                while(a!=b)
            {  
                 if(a>b)
                 {
                    a=a-b;
                 }
                if(b>a)
                {
                    b=b-a;
                }
            }

            if(a==b)
            {
                obeb=a;
            }

            }
        
            else
            {
                a=value2-value;
                b=value;
                while(a!=b)
            {
                if(a>b)
                {
                    a=a-b;
                }
                
                if(b>a)
                {
                    b=b-a;
                }
            }

            if(a==b)
            {
                obeb=a;
            }
            }
            okek=(value*value2)/obeb;
            printf("----------------------------\n");
            printf("OKEK(%d,%d)=%d",value,value2,okek);
            }
            else
            {
                printf("Yanlis!!! lutfen sayilarin her ikisini de pozitif giriniz\n");
                goto bas;
            }
    
 return 0; 
}
