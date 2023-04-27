#include<stdio.h>
#include<stdlib.h>
/*TR : 4 basamaklı abcd sayısının  (ab*cd=ba*dc) koşulunu sağlayıp sağlamadığını bulunuz.

ENG :Find whether the 4-digit number abcd satisfies the condition (abcd=badc).
*/
int main()
{ 
    int value;
    int tmp,tmp2,tmp3,tmp4;
    //abcd = value
    //tersyuz= (ab*cd=ba*dc)
   
        printf("please enter digit four value :");
        scanf("%d",&value);
        tmp=value%100;
        tmp2=value/100;
        tmp3=(tmp%10)*10+tmp/10;
        tmp4=(tmp2%10)*10+tmp2/10;
        
        if(tmp*tmp2==tmp3*tmp4)
        {
            printf("the value entered is a TERSYUZ number");
        }
        else
        {
            printf("the value entered is a  not TERSYUZ number");
        }

 return 0; 
}