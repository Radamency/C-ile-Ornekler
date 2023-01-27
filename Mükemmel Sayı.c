#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<conio.h>
int main()
{
	setlocale(LC_ALL, "Turkish"); // Turkce Karakter Icin //
	int sayi, s, toplam=0;
	printf("Lutfen Sayiyi Giriniz:"); scanf("%d", &sayi);
	for(s=1; s<sayi; s++)
	{
	if(sayi%s==0)
	{
	toplam=toplam+s;
	}	
	}
	if(toplam==sayi)
	{
	printf("%d Sayisi Mukemmel Sayidir \n ", sayi);	
	}
	else
	{
	printf("%d Sayisi Mukemmel Sayi Degildir ", sayi);	
	}
	return 0;
	getch();
}
