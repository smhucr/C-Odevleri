#include<stdio.h>
#include<conio.h>

int main(){
	
	float sayi1;
	float sayi2;
	
	printf("Merhabalar Bu Programimiz Girdiginiz 2 Sayinin Toplamini, Cikarimini, Carpimini ve Bolumunu Gosterir.\n");
	printf("\nLutfen 1. Sayiyi Giriniz = ");
	scanf("%f",&sayi1);
	printf("\nLutfen 2. Sayiyi Giriniz = ");
	scanf("%f",&sayi2);
	
	
	if(sayi2==0)
	{
		printf("\n1. ve 2. Girdiginiz Sayi 0 ise Sonuc Belirsizdir.");
		printf("\nSadece 2. Girdiginiz Sayi 0 ise Sonuc Tanimsizdir.");
		printf("\nLutfen 2. Sayiyi 0'dan Farkli Bir Sayi Secerek Tekrar Giriniz = ");
		scanf("\n%f",&sayi2);
	}
	
	
	printf("\nToplami  = %f",sayi1+sayi2);
	printf("\nCikarimi = %f",sayi1-sayi2);
	printf("\nCarpimi  = %f",sayi1*sayi2);
	printf("\nBolumu   = %f",sayi1/sayi2);
		
	
	
	getch();
	return 0;
	


}
