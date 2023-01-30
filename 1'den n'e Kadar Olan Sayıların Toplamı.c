#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<conio.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int toplam=0, s=1, sayi;
	printf("Lütfen Bir Sayý Giriniz "); scanf("%d", &sayi);
	while(s<=sayi)
	{
	toplam += s;
	s++;	
	}
	printf("Sayýlarýn Toplamý:%d \n", toplam);
	return 0;
	getch();
}
