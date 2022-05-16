#include<stdio.h>
#include<conio.h>

int asal(int x){
	int kontrol=0;
	for(int i=2;i<x;i++){
		if(x%i==0){
			kontrol=1;
			break;
		}
	}
	return kontrol;
}




int main(){
	int sayi,asalmi;
	
	printf("Merhaba Bu Programimiz Girdiginiz Sayinin Asal Olup Olmadigini Gosteriyor.\n");
	printf("\nLutfen Sayinizi Giriniz : ");
	scanf("%d",&sayi);
	asalmi=asal(sayi);
	if(sayi<=1){
		if(sayi==0){
			printf("\n\t0 Sayisi Kendisine Bolumu Belirsiz Oldugu Icin.");
		}
		else if(sayi==1){
			printf("\n\tAsal Sayilarin 2 Boleni Olunca Asallik Konusulur.");
		}
		else if(sayi<0){
		printf("\n\tNegatif Sayilar Asal Sayi Degildir");
		}
		printf("\n\t%d Asal Sayi Degildir.",sayi);	
		getch();
		return 0;
	}
	if(asalmi==1){
		printf("\n\t%d Asal Sayi Degildir.",sayi);
	}
	else if(asalmi==0){
		printf("\n\t%d Asal Sayidir.",sayi);
	}
	
	getch();
	return 0;
}
