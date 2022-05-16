#include<stdio.h>
#include<conio.h>



int kombinasyon(int n,int r){
	int faktor1=1,faktor2=1,faktor3=1;
	int kombi;
	for(int i=1;i<=n;i++){
		faktor1*=i;
	}
	
	for(int j=1;j<=r;j++){
		faktor2*=j;
	}
	
	for(int k=1;k<=(n-r);k++){
		faktor3*=k;
	}
	
	kombi=faktor1/(faktor2*faktor3);
	return kombi;
}

int main(){
	
	int sayi1,sayi2,sonuc;
	
	
	printf("Merhaba Bu Programimiz Girdiginiz C(n,r) Kombinasyonunu Gerceklestiriyor.\n");
	printf("\nLutfen C(n,r)'deki 1. Degerini Giriniz : ");
	scanf("%d",&sayi1);
	printf("\nLutfen C(%d,r)'deki 2. Degerini Giriniz : ",sayi1);
	scanf("%d",&sayi2);
	kontrol:
	if(sayi1<0 && sayi2<0){
		printf("\n!!!!!!!!! Faktoriyeller 0'dan Kucuk Deger Alamaz !!!!!!!!!");
		printf("\n!!!!!!!!! Lutfen n ve r Sayilarini 0 dan Buyuk Giriniz !!!!!!!!!");
		printf("\nLutfen C(n,r)'deki 1. Degerini Giriniz : ");
		scanf("%d",&sayi1);
		printf("\nLutfen C(%d,r)'deki 2. Degerini Giriniz : ",sayi1);
		scanf("%d",&sayi2);
		goto kontrol;
	}
	if(sayi1<0){
		printf("\n!!!!!!!!! Faktoriyeller 0'dan Kucuk Deger Alamaz !!!!!!!!!");
		printf("\n!!!!!!!!! Lutfen n Sayisini 0 dan Buyuk Giriniz !!!!!!!!!");
		printf("\nLutfen C(n,r)'deki 1. Degerini Giriniz : ");
		scanf("%d",&sayi1);
		goto kontrol;
	}
	if(sayi2<0){
		printf("\n!!!!!!!!! Faktoriyeller 0'dan Kucuk Deger Alamaz !!!!!!!!!");
		printf("\n!!!!!!!!! Lutfen r Sayisini 0 dan Buyuk Giriniz !!!!!!!!!");
		printf("\nLutfen C(%d,r)'deki 2. Degerini Giriniz : ",sayi1);
		scanf("%d",&sayi2);
		goto kontrol;
	}
	if(sayi1<sayi2){
		printf("\n!!!!!!!!! n, r'den Kucuk Olamaz !!!!!!!!!");
		printf("\n!!!!!!!!! n ve r Degerlerini Tekrar Giriniz !!!!!!!!!");
		printf("\nLutfen C(n,r)'deki 1. Degerini Giriniz : ");
		scanf("%d",&sayi1);
		printf("\nLutfen C(%d,r)'deki 2. Degerini Giriniz : ",sayi1);
		scanf("%d",&sayi2);
		goto kontrol;
	}
	
	sonuc=kombinasyon(sayi1,sayi2);
	
	printf("\n\t\t***************************");
	printf("\n\t\t\tC(%d,%d) = %d ",sayi1,sayi2,sonuc);
	printf("\n\t\t***************************"); 
	
	getch();
	return 0;
}
