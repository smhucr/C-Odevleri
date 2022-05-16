#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	
	int sayi1,sayi2,sayi3,sayi4;
	int teksayi=0;
	int ciftsayi=0;
	float arit=0;
	float geo=1;
	printf("Merhabalar Bu Programimiz Girdiginiz 4 Sayidan Tek Sayilarin Aritmetik , Cift Sayilarin Geometrik Ortalamasini Aliyor\n");
	
	printf("\nLutfen 1. Sayiyi Giriniz : ");
	scanf("%d",&sayi1);
	printf("\nLutfen 2. Sayiyi Giriniz : ");
	scanf("%d",&sayi2);
	printf("\nLutfen 3. Sayiyi Giriniz : ");
	scanf("%d",&sayi3);
	printf("\nLutfen 4. Sayiyi Giriniz : ");
	scanf("%d",&sayi4);
	
	if(sayi1%2==0){
		geo=sayi1*geo;
		ciftsayi++;
	}
	else{
		arit=arit+sayi1;
		teksayi++;
	}
	if(sayi2%2==0){
		geo=sayi2*geo;
		ciftsayi++;
	}
	else{
		arit=arit+sayi2;
		teksayi++;
	}
	if(sayi3%2==0){
		geo=sayi3*geo;
		ciftsayi++;
	}
	else{
		arit=arit+sayi3;
		teksayi++;
	}
	if(sayi4%2==0){
		geo=sayi4*geo;
		ciftsayi++;
	}
	else{
		arit=arit+sayi4;
		teksayi++;
	}
	if(teksayi==0){	
		printf("\nAritmetik Ortalamasi = 0");	
	}
	else{
	printf("\nAritmetik Ortalamasi = %f", arit/teksayi);
	}
	if(ciftsayi==0){
		printf("\nGeometrik Ortalamasi = 0");
	}
	else{
	printf("\nGeometrik Ortalamasi = %f", pow(geo,1.0/ciftsayi));
	}
	
	getch();
	return 0;
}
