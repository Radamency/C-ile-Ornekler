#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<conio.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1, sayi2;
	float ortalama;
	
	printf("Lutfen Birinci Sayiyi Giriniz:");
	scanf("%d", &sayi1);
	
	printf("Lutfen Ikinci Sayiyi Giriniz:");
	scanf("%d", &sayi2);
	
	ortalama = (float)(sayi1 + sayi2)/2;
	printf("%f", ortalama);
	
	return 0;
    getch();
}

