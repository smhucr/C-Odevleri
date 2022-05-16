#include<stdio.h>
#include<conio.h>
#include<string.h>

struct isci{
	char adi[30];
	char soyadi[30];
	int yas;
	double aylikucret;
};
struct isci bilgilerial();
void bilgileriver (struct isci);
int main(){	
	struct isci bilgi;
	bilgi = bilgilerial();
	bilgileriver(bilgi);
	getch();
	return 0;
}
struct isci bilgilerial(){
	struct isci kisi;
	printf("Isim : ");
	gets(kisi.adi);
	printf("Soyisim : ");
	gets(kisi.soyadi);
	printf("Yas : ");
	scanf("%d",&kisi.yas);
	printf("Aylik Ucret : ");
	scanf("%lf",&kisi.aylikucret);
	return kisi;
};
void bilgileriver (struct isci kisi){
	printf("\nIsmi : %s ",kisi.adi);
	printf("%s\n",kisi.soyadi);
	printf("Yasi : %d\n",kisi.yas);
	printf("Aylik Ucreti : %5.2lf\n",kisi.aylikucret); 	
}
