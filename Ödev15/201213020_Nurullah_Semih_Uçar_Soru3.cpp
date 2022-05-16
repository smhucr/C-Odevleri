#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct OGRENCI{
	int id;
	float vize;
	float final;
	float ortalama;
	struct OGRENCI *sonraki;
	struct OGRENCI *onceki;
};

int main(){
	
	struct OGRENCI *ilk=NULL;
	struct OGRENCI *gecici=NULL;
	struct OGRENCI *ptr=NULL;
	char devam;
	int id;
	float vize,final,ortalama;
	
	do{
		printf("\n");
		printf("\n\t\t\t Lutfen Ogrencinin Numarasi Giriniz : ");
		scanf("%d",&id);
		vizekontrol:
		printf("\n\t\t\t Lutfen Ogrencinin Vize Notunu Giriniz : ");
		scanf("%f",&vize);
		if(vize>100 || vize<0){
			printf("\n\tNotlar 100'un Ustunde Olamaz\n\tNotlar 0'in Altindan Olamaz\n\t\tIslemi Tekrarlayin...\n");
			goto vizekontrol;
		}
		finalkontrol:
		printf("\n\t\t\t Lutfen Ogrencinin Final Notunu Giriniz : ");
		scanf("%f",&final);
		if(final>100 || final<0){
			printf("\n\tNotlar 100'un Ustunde Olamaz\n\tNotlar 0'in Altindan Olamaz\n\t\t Islemi Tekrarlayin...\n");
			goto finalkontrol;
		}
		if(ilk==NULL){
			ilk=(struct OGRENCI*) malloc(1*sizeof(struct OGRENCI));
			ilk->onceki=NULL;
			ilk->id=id;
			ilk->vize=vize;
			ilk->final=final;
			ilk->ortalama= 0.6*final + 0.4*vize;
			ilk->sonraki=NULL;
			ptr=ilk;
		}
		else{
			ptr->sonraki=(struct OGRENCI*) malloc(1*sizeof(struct OGRENCI));
			ptr->sonraki->onceki=ptr;
			ptr=ptr->sonraki;
			ptr->id=id;
			ptr->vize=vize;
			ptr->final=final;
			ptr->ortalama= 0.6*final + 0.4*vize;
			ptr->sonraki=NULL;
			
		}
		printf("\n\t\tSayi Eklemeye Son Vermek Icin (e) 'yi Tuslayiniz.\n\t\t(Devam Etmek Isterseniz (e)'den Baska Bir Harf Giriniz) : ");
		devam = getche();
	}while(devam!='e' && devam!='E');
	gecici =ilk;
	
	while(gecici!=NULL){
		printf("\n");
		printf("\n\t\t[[[[ [%d] Ogrencinin Bilgileri ]]]]",gecici->id);
		printf("\n\n\t\t       Ortalama Notu --> %.2f",gecici->ortalama);
		gecici=gecici->sonraki;
	}
	
	
	getch();
	return 0;
}
