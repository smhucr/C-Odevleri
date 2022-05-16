#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
struct Dugum {
 int derece;
 int katSayi;
 struct Dugum* sonraki;
};


struct Dugum * Sirali(struct Dugum* ilk,int x,int y){
	
	if(ilk==NULL){
		ilk=(struct Dugum*) malloc(sizeof(struct Dugum*));
		ilk->sonraki=NULL;
		ilk->katSayi=x;
		ilk->derece=y;
		return ilk;
	}
	if(ilk->derece < y){ //ilk elemandan küçük durumu
		struct Dugum* temp=(struct Dugum*) malloc(sizeof(struct Dugum*));
		temp->katSayi=x;
		temp->derece=y;
		temp->sonraki=ilk;
		return temp;
	}
	struct Dugum* iter = ilk;
	while(iter->sonraki != NULL && iter->sonraki->derece >y){
		iter = iter->sonraki;
	}
	struct Dugum* temp = (struct Dugum*) malloc(sizeof(struct Dugum*));
	temp->sonraki = iter->sonraki;
	iter->sonraki=temp;
	temp->katSayi=x;
	temp->derece=y;
	return ilk;
}
void tumunulistele(struct Dugum* rone){
	struct Dugum* temp4=rone;
	int y=1;
	if(rone==NULL){
		printf("\n\n\t/---------------------------------------\\");
		printf("\n\t            Dugum Yapisi BOS !!!");
		printf("\n\t\\---------------------------------------/");
		
	}
	printf("\n         Derece    Katsayi\n");
	printf("         ------    -------\n");
	while(rone!=NULL){
		printf("\t%d. %d \t      %d \n",y,rone->derece,rone->katSayi);
		rone=rone->sonraki;
		y++;
		
	}
	printf("\n\t");

	while(temp4!=NULL){
		
		if(temp4->katSayi==0){
			temp4=temp4->sonraki;
			continue;
		}
		if(temp4->sonraki==NULL && temp4->derece==1){
			printf(" %dX",temp4->katSayi);
			temp4=temp4->sonraki;
			continue;
		}
		if(temp4->derece==1){
			printf(" %dX +",temp4->katSayi);
			temp4=temp4->sonraki;
			continue;
		}
		if(temp4->sonraki==NULL){
			if(temp4->derece >0){
				printf(" %dX^%d",temp4->katSayi,temp4->derece);
		}
			if(temp4->derece == 0){
				printf(" %d",temp4->katSayi);
		}
			if(temp4->derece < 0){
				printf(" %dX^(%d)",temp4->katSayi,temp4->derece);
		}
			break;
		}
	
		if(temp4->derece >0){
			printf(" %dX^%d +",temp4->katSayi,temp4->derece);
		}
		if(temp4->derece == 0){
			printf(" %d +",temp4->katSayi);
		}
		if(temp4->derece < 0){
			printf(" %dX^(%d) +",temp4->katSayi,temp4->derece);
		}
		
		
		temp4=temp4->sonraki;
	}
}

struct Dugum* sil(struct Dugum* ilk,int d){
	struct Dugum* temp;
	struct Dugum* iter= ilk;
	if(ilk->derece == d){
		temp =ilk;
		ilk=ilk->sonraki;
		free(temp);
		return ilk;
	}
	while(iter->sonraki != NULL && iter->sonraki->derece !=d){
		iter=iter->sonraki;
	}
	if(iter->sonraki == NULL){
		printf("\n\n\t/---------------------------------------\\");
		printf("\n\t    Istediginiz Derece Bulunamadi !!!!");
		printf("\n\t\\---------------------------------------/");
		return ilk;
	}
	temp=iter->sonraki;
	iter->sonraki=iter->sonraki->sonraki;
	free(temp);	
	return ilk;
}

int hesapla(struct Dugum* ilk,int x){
	int topla=0;
	struct Dugum* temp=ilk;
	while(temp!=NULL){
		
		pow(x,temp->derece);
		topla=topla+(temp->katSayi*pow(x,temp->derece));
		temp=temp->sonraki;
	}
	return topla;
	
}

void texttebitir(struct Dugum* rone){
	FILE *fp;
	int id1,y=1;
	fp = fopen ("dosya1.txt", "w");
    if (fp == NULL) {
    printf("Dosya açma hatasý!");
	getch();
  }
	fprintf(fp,"\n         Derece    Katsayi\n");
    fprintf(fp,"         ------    -------\n");
  	while(rone!=NULL){
  	
		fprintf(fp,"\t%d. %d \t      %d \n",y,rone->derece,rone->katSayi);
		rone=rone->sonraki;
		y++;
	}
  fclose(fp);

}

int main(){
	struct Dugum *root=NULL;
	struct Dugum* temp7;
	bas:
	int secenek,x,y,d1,hesap1;
	
	do{
	
		printf("\n\n\t\t--->1. Ekle<---\n\t\t--->2. Silme<---\n\t\t--->3. Hesaplama<---\n\t\t--->4. Tumunu Listele<---\n\t\t--->5. Uygulamayi Bitir<---\n\n");
		printf("\t Yapmak Istediginiz Islemi Seciniz >>> ");
		scanf("%d",&secenek);
		//Ekle seçeneði
		if(secenek==1){
			printf("Lutfen Katsayi Giriniz : ");
			scanf("%d",&x);
			printf("\nLutfen Derece Giriniz : ");
			scanf("%d",&y);
			temp7=root;
			while(temp7!=NULL){
				if(temp7->derece==y){
					printf("\n\n\t/---------------------------------------\\");
					printf("\n\t    Ayni Derecede Sayilar Girilemez!!!");
					printf("\n\t\\---------------------------------------/");
					goto bas;
				}
			temp7=temp7->sonraki;
			}
			root=Sirali(root,x,y);
	
		}
		//Sil Seçeneði
		else if(secenek==2){
			printf("Silmek Istediginiz Elemanin Derecesini Giriniz : ");
			scanf("%d",&d1);
			root=sil(root,d1);
		}	
		// Hesapla Seçeneði
		else if(secenek==3){
			printf("X degerinizi Giriniz : ");
			scanf("%d",&hesap1);		
			printf("\n\n\t/---------------------------------------\\");
			printf("\n\t          Polinomunuzun Sonucu : %d ",hesapla(root,hesap1));
			printf("\n\t\\---------------------------------------/");
		}
		//Tümünü Listele Seçeneði
		else if(secenek==4){
			tumunulistele(root);
		}
		//Menü Dýþý Sayý girimi
		else if(secenek==5){
			texttebitir(root);
			
		}
		else{
			printf("\n\t\tLutfen Menu Sayilarindan Birisini Seciniz!!!\n");
		}
	}while(secenek!=5);
	
	
	getch();
	return 0;
}
