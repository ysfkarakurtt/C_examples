#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*TR : Kendisine gönderilen bir noktanın koordinatları,düşey ve yatay kaydırma miktarına göre ,
noktanın gönderilen koordinatları değiştiren ve eski konum ile yenisi arasındaki uzaklığı bulan kodu pointer ile yazınız.

ENG: The coordinates of a point sent to it, according to the amount of vertical and horizontal scrolling,
Write the code with pointer that changes the sent coordinates of the point and finds the distance between the old location and the new one.
*/
float noktakaydir(float *xp,float *yp,int yatay,int dusey);
int main()
{
    float x, y, msf;
    int yatay, dusey;
    
     printf("x = ");
     scanf("%f",&x);
     printf("y = ");
     scanf("%f",&y);
     printf(" yatayda  kaydirmak istediginiz degeri girin:");
     scanf("%d",&yatay);
     printf(" duseyde  kaydirmak istediginiz degeri girin:");
     scanf("%d",&dusey);
     msf=noktakaydir(&x,&y,yatay,dusey);
     printf("%.2f,%.2f,%.2f",x,y,msf);
    
     return 0;   
}

float noktakaydir(float *xp,float *yp,int yatay,int dusey)
{    
     float msf;
     float x2,y2;
          x2=(*xp)+yatay;
          y2=(*yp)+dusey;
          msf=sqrt(pow(fabs((*xp)-x2),2)+pow(fabs((*yp)-y2),2));
          *xp=x2;
          *yp=y2;
     return msf;
}
