#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<conio.h>
int main()
{
	setlocale(LC_ALL, "Turkish"); // Turkce Karakter Icin //
	int deger_1=1, deger_2=1, deger_3, i, s; 
	printf("Lutfen Istediginiz Basamak Sayisini Giriniz:"); scanf("%d", &i);
	printf("%d\t%d\t", deger_1, deger_2);
	for(s=3; s<=i; s++)
	{
	deger_3=deger_1+deger_2;
	printf("%d\t", deger_3);
	deger_1=deger_2;
	deger_2=deger_3;
    }
    return 0;
	getch();
}
