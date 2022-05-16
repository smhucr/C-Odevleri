#include<stdio.h>
#include<conio.h>


int topla(int x){
	int rakamlar,toplam = 0;
	if(x<0){
		x*=-1;
	}
	while(x!=0){
		
		rakamlar= x % 10;
		toplam += rakamlar;
		x = x/10;
	}
	return toplam;
}

int main(){
	
	int sayi,sonuc;
	printf("Merhaba Bu Programimiz Girdiginiz Sayinin Rakamlarini Toplayip Gosteriyor.\n");
	printf("\nLutfen Sayinizi Giriniz : ");
	scanf("%d",&sayi);
	
	sonuc=topla(sayi);
	printf("\nSayinizdaki Rakamlarin Toplami %d'dir.",sonuc);
	
	getch();
	return 0;
}
