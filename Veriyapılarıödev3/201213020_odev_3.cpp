#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct _Ogrenci{
	int ogr_no;
	char ad[20];
	int notu;
} Ogrenci;


typedef struct _Tablo{
	Ogrenci ogrenciler[10];
}Tablo;
Tablo veri_list;
int hash_tablosu[10][2];

int Hash(int no){
	return no % 10;
}

void Initialize_Table()
{
	int i;
	for (i = 0; i < 10; ++i){
		hash_tablosu[i][0] =-1;
		hash_tablosu[i][1] =-1;
	}
}

void HashListele(){
	printf("\n\t------- Hash Tablosu -------");
	for(int i=0 ; i<10 ;++i){
		printf("\n\t\t%d   %d",hash_tablosu[i][0],hash_tablosu[i][1]);
	}
}
void VeriListele(){
	printf("\n\n\t------- Veri Tablosu -------");
	for(int i=0 ; i<10 ;++i){
		printf("\n\t\t%d  %s  %d",veri_list.ogrenciler[i].ogr_no,veri_list.ogrenciler[i].ad,veri_list.ogrenciler[i].notu);
	}
}

bool isHashFull(){
	bool isFull=false;
	for(int i=0 ; i<10;i++){
		
		if(hash_tablosu[i][0]!=-1){
			isFull=true;
		}
		else{
			isFull=false;
		}
	}
	return isFull;
}


void Ekle(int no, char * isim, int puan) {
  int gecicihash;
  gecicihash = Hash(puan);
  if (hash_tablosu[gecicihash][0] == -1) {
    strcpy(veri_list.ogrenciler[gecicihash].ad, isim);
    veri_list.ogrenciler[gecicihash].notu = puan;
    veri_list.ogrenciler[gecicihash].ogr_no = no;
    hash_tablosu[gecicihash][0] = puan;
  } else {
    int i = gecicihash;
    while (hash_tablosu[i][1] != -1) {
      i = hash_tablosu[i][1];
    } 
    for(int j=0; j<10; j++){
    	if (hash_tablosu[j][0] == -1) {
	      strcpy(veri_list.ogrenciler[j].ad, isim);
	      veri_list.ogrenciler[j].notu = puan;
	      veri_list.ogrenciler[j].ogr_no = no;
	      hash_tablosu[j][0] = puan;
	      hash_tablosu[i][1] = j;
	      break;
	    }
	}
  }
}

void Ara(int puan){
	int gecici;
	int adim=1;
	gecici=Hash(puan);
	if(hash_tablosu[gecici][1]==-1 && hash_tablosu[gecici][0]==puan){
		printf("\tAranilan Deger : %d \n",puan);
		printf("\t%d Adimda Bulundu",adim);
	}
	else{
		while(hash_tablosu[gecici][1]!=-1){
			
			if(hash_tablosu[gecici][0]==puan){
				break;
			}
			else{		
				gecici=hash_tablosu[gecici][1];		
			}
			adim++;
		}
		if(hash_tablosu[gecici][0]==puan){
			printf("Aradiginiz Deger : %d ",puan);
			printf("%d Adimda Bulundu",adim);
		}
		else{
			printf("Aradiginiz Deger Bulunamadi");
		}
	}
}
int main(){
	FILE *fp1;
	int secenek,numara,notu,arasayi;
	int dnumara,dnotu;
	char disim[20];
	char isim[20];
	Initialize_Table();
	HashListele();
 	 if ((fp1=fopen("veri.txt", "r+")) == NULL) {
      printf("Dosya acilamadi ! \n");
      getch();
      return 0;
  	}
  	
  	while(!feof(fp1)){ 
  	fscanf(fp1,"%d %s %d",&dnumara,disim,&dnotu);
  	Ekle(dnumara,disim,dnotu);
  		
    }

	bas:
	do{
	
		printf("\n\n\t\t--->1. Ekle<---\n\t\t--->2. Arama<---\n\t\t--->3. Tumunu Listele<---\n\t\t--->4. Uygulamayi Bitir<---\n\n");
		printf("\t Yapmak Istediginiz Islemi Seciniz >>> ");
		scanf("%d",&secenek);
		//Ekle seçeneði
		if(secenek==1){
			if(isHashFull()){
				printf("Daha Fazla Ekleme Yapamazsiniz Tablo Doldu!!!");
				goto bas;
			}
			printf("\nOgrencinin Numarasini Giriniz : ");
			scanf("%d",&numara);
			printf("Ogrencinin Ismini Giriniz : ");
			scanf("\n%[^\n]s",isim);
			printf("Ogrencinin Notunu Giriniz : ");
			scanf("%d",&notu);
			if(notu <0 || notu >100){
				printf("\n\tNotlar 0 ile 100 Arasinda Olabilir !!!");
				goto bas;
			}
			printf("\nnumara : %d isim: %s notu: %d",numara,isim,notu);
			Ekle(numara,isim,notu);
		
			
	
		}
		//Arama Seceneði
		else if(secenek==2){	
			printf("Aramak Istediginiz Sayiyi Giriniz : ");
			scanf("%d",&arasayi);
			Ara(arasayi);
		}
		//Tümünü Listele Seçeneði
		else if(secenek==3){
			HashListele();
			VeriListele();
		}
		//Menü Dýþý Sayý girimi
		else if(secenek==4){	
		}
		else{
			printf("\n\t\tLutfen Menu Sayilarindan Birisini Seciniz!!!\n");
		}
	}while(secenek!=4);
	
	
	
	
	getch();
	return 0;
}
