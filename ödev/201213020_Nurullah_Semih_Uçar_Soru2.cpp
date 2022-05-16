#include<stdio.h>
#include<conio.h>

int main (){
	
	float sayi1;
	float sayi2;
	
	printf("Merhabalar Bu Programimiz Girdiginiz 2 Sayidan Buyugunu Gosterir.\n ");
	printf("\nLutfen 1. Sayiyi Giriniz = ");
	scanf("%f",&sayi1);
	printf("\nLutfen 2. Sayiyi Giriniz = ");
	scanf("%f",&sayi2);
	
	if(sayi1==sayi2)
	{
	printf("\nGirmis Oldugunuz Iki Sayi da Birbirine Esittir.");
	}
	else if(sayi1>sayi2)
	{
	printf("\n1. Sayi Olarak Girdiginiz %f Daha Buyuktur.",sayi1);
	}
	else
	{
	printf("\n2. Sayi Olarak Girdiginiz %f Daha Buyuktur.",sayi2);
	}
	
	
	
	getch();
//	return 0;
	
}
