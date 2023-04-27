#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//  abcd =a^a +b^b +c^c +d^d    abcd=? 
int main()
{
	int a,b,c,d;
	    for(a=1;a<10;a++)
        {
		    for(b=1;b<10;b++)
            {
		        for(c=1;c<10;c++)
                {
		            for(d=1;d<10;d++)
                    {
		                if(d*1+c*10+b*100+a*1000==pow(a,a)+pow(b,b)+pow(c,c)+pow(d,d))
                        {	
		                    printf("%d%d%d%d",a,b,c,d);
	                    }

	                }
	            }
	        }	
	    }
		
	return 0;
}