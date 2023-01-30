#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<conio.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi, us, n=1, sonuc=1;
	printf("Lütfen Bir Sayi Giriniz "); scanf("%d", &sayi);
	printf("Lütfen Ussü Giriniz "); scanf("%d", &us);
	while(n <= us)
	{
		sonuc *= sayi;
   	 n++;
	}  
	printf("Sonuç %d \n", sonuc);
	return 0;
	getch();
}
