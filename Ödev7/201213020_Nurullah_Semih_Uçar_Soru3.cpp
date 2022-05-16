#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

struct sonuc{
	int enbuyuk;
	int enkucuk;
	float ortalama;
	float stsapma;
};
struct sonuc islem(struct sonuc islemsel,int *tamsayi);
int main(){
	struct sonuc islemsel;
	int tamsayi[100];
	int *arr=tamsayi;
	srand(time(NULL));
	for(int i=0;i<100;i++){
		printf("%d. : ",i+1);
		scanf("%d",&tamsayi[i]); // tamsayi[i]=rand()%100; //rastgele
//	printf("\n%d",tamsayi[i]); //Kontrol için eðer rastgele ise
	}
	
	
	
	
	
	
	islemsel=islem(islemsel,tamsayi);
	printf("######################################");
	printf("\nEn Buyuk = %d",islemsel.enbuyuk);
	printf("\nEn Kucuk = %d",islemsel.enkucuk);
	printf("\nOrtalama = %.4f",islemsel.ortalama);
	printf("\nStandart Sapma = %.4f",islemsel.stsapma);
	printf("\n######################################");
	getch();
	return 0;
}

struct sonuc islem(struct sonuc islemsel,int *tamsayi){

	float temp=0;
	int buyuk=tamsayi[0];
	int kucuk=tamsayi[0];
	float standartsapma=0.0;
	
	for(int j=0;j<100;j++){
		temp+=tamsayi[j];
	}
	islemsel.ortalama=temp/100.0;
	for(int m=0;m<100;m++){
		if(tamsayi[m]>buyuk){
			buyuk=tamsayi[m];
		}
		if(tamsayi[m]<kucuk){
			kucuk=tamsayi[m];
		}
	}
	islemsel.enbuyuk=buyuk;
	islemsel.enkucuk=kucuk;
	
	for(int k=0;k<100;k++){
		standartsapma+=pow(tamsayi[k]-islemsel.ortalama,2);
	}
	standartsapma=sqrt(standartsapma/10.0);
	islemsel.stsapma=standartsapma;
	return islemsel;
}

