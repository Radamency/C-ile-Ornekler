#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<conio.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi, us, n=1, sonuc=1;
	printf("L�tfen Bir Sayi Giriniz "); scanf("%d", &sayi);
	printf("L�tfen Uss� Giriniz "); scanf("%d", &us);
	while(n <= us)
	{
		sonuc *= sayi;
   	 n++;
	}  
	printf("Sonu� %d \n", sonuc);
	return 0;
	getch();
}
