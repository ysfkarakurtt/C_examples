#include<stdio.h>
#include<stdlib.h>
/* TR: 5 elemanlı a ve b dizilerinin elemanlarını klavyeden girilen ve bu iki dizinin elemanlarından oluşan 10 elamanlı bir c dizisini oluşturan C programını yazınız

ENG: Write a C program that enters the elements of 5-element arrays a and b from the keyboard and creates a 10-element array c consisting of the elements of these two arrays.
 */
int main()
{
    int a[5];
    int b[5];
    int c[10];
    int i,j,k,m;

    printf("birinci dizinin elemanlarini giriniz:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]); 
    }
    
    printf("ikinci dizinin elemanlarini giriniz:");

    for(j=0;j<5;j++)
    {
        scanf("%d",&b[j]); 
    }
    for(k=0;k<5;k++)
    {
        c[k]=a[k];
    }
    for(k=5;k<10;k++)
    {
        c[k]=b[k-5];
    }
    for(i=0;i<10;i++)
    {
        printf("%d  ",c[i]); 
    }
    
 return 0; 
}