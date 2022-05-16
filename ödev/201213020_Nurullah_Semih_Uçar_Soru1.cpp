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
	
	
	printf("\nToplami  = %f",sayi1+sayi2);
	printf("\nCikarimi = %f",sayi1-sayi2);
	printf("\nCarpimi  = %f",sayi1*sayi2);

	if(sayi1==0&sayi2==0)
	{
	printf("\nBolumu Belirsizdir.");
	}
	else if(sayi2==0)
	{
	printf("\nBolumu Tanimsizdir");
	}
	else
	{
	printf("\nBolumu   = %f",sayi1/sayi2);
	}
	
	
	getch();
	return 0;
	


}
