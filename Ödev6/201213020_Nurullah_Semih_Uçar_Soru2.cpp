#include<stdio.h>
#include<conio.h>
#include<string.h>


struct ders{
	
	int ders_kod;
	int vize;
	int final;
	double gecmenotu;
};

struct sahisbilgileri{
	
	char ad[100];
	char soyad[100];
	int no;
	struct ders dersler[5];
};

int main(){
	struct sahisbilgileri sahis[5];
	struct ders dersler[5];
	for(int i=0;i<5;i++){
		printf("\n<<< %d. Ogrencinin Bilgileri >>>\n",i+1);
		printf("Ismi : ");
		scanf("\n%[^\n]",sahis[i].ad);
		printf("Soyadi : ");
		scanf("\n%[^\n]",sahis[i].soyad);
		printf("Numarasi : ");
		scanf("%d",&sahis[i].no);
		
		for(int j=0;j<5;j++){
		printf("\n**********************\n\n");
		printf("Ders Kodu : ");
		scanf("\n%d",&sahis[i].dersler[j].ders_kod);
		printf("Vize Notu : ");
		scanf("\n%d",&sahis[i].dersler[j].vize);
		printf("Final Notu : ");
		scanf("%d",&sahis[i].dersler[j].final);
		sahis[i].dersler[j].gecmenotu=(double)(0.4*sahis[i].dersler[j].vize + 0.6*sahis[i].dersler[j].final);
		}
	}	
	for(int i=0;i<5;i++){
		printf("\n<<< %d. Ogrencinin Bilgileri >>>\n",i+1);
		printf("Ismi : %s\n",sahis[i].ad);
		printf("Soyadi : %s\n",sahis[i].soyad);
		printf("Numarasi : %d\n",sahis[i].no);
		for(int j=0;j<5;j++){
			printf("Ders Kodu : %d\n",sahis[i].dersler[j].ders_kod);
			printf("Gecme Notu : %lf\n",sahis[i].dersler[j].gecmenotu);
		}

	}
	
	getch();
	return 0;
}


