#include<stdio.h>
#include<conio.h>


int main(){
	
	int sayi1;
	int sayi2;
	int sayi3;
	float orta;
	
	printf("Merhabalar Bu Programimiz 3 Tam Sayinin Ortalamasini Aliyor\n");
	printf("\nLutfen 1. Sayiyi Giriniz:");
	scanf("%d", &sayi1);
	printf("\nLutfen 2. Sayiyi Giriniz:");
	scanf("%d", &sayi2);
	printf("\nLutfen 3. Sayiyi Giriniz:");
	scanf("%d", &sayi3);
	
	orta = (sayi1+sayi2+sayi3)/3.0;
	
	printf("\nGirmis Oldugunuz Sayilarin Ortalamasi = %f", orta);
	
	getch();
	return 0;
	
	
}
