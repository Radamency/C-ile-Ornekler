#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<conio.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	int s,sayac,k=0;
    for(s=2; s<=100; s++)
    {
	    for(sayac=1; sayac<=s; sayac++)
	    {
	    	if(s%sayac==0)
	    	{
	    		k=k+1;
			}
	    }
	    if(k==2)
	   	{
	    	k=s;
	    	printf("%d Asal Sayidir\n", k);
	    }
	    k=0;
	}
	return 0;
    getch();
}

