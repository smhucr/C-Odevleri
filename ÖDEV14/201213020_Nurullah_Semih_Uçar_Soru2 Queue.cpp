#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// Queue Ýçin 4 Menü Sorusu


struct kayit{
	int x;
	struct kayit* next;
};

	struct kayit *ilk=NULL;
	struct kayit *gecici=NULL;
	
struct kayit *Enqueue(struct kayit *ilk,int x){
	struct kayit *yeni = (struct kayit *) malloc(1*sizeof(struct kayit *));
	yeni->x=x;
	yeni->next=NULL;
	
	if(ilk==NULL){
		ilk=yeni;
		return ilk;
	}
	else{
		struct kayit *temp = ilk;
		while(temp->next != NULL) temp=temp->next;
		
		temp->next = yeni;
		return ilk;
	}	
}

struct kayit *Dequeue(struct kayit *ilk, int *x){
	if(ilk==NULL){
		x=NULL;
		return ilk;
	}
	else{
		struct kayit *temp;
		temp=ilk;
		
		*x=temp->x;
		ilk=ilk->next;
		free(temp);
		return ilk;
	}
}


void tumunulistele();
void bulgoster();
void bulvesil();


int main(){
	
	int secenek,x;
	
	do{
	
		printf("\n\n\t\t--->1. Ekle<---\n\t\t--->2. Bul ve Sil<---\n\t\t--->3. Bul ve Goster<---\n\t\t--->4.Tumunu Listele<---\n\t\t--->5.Uygulamayi Bitir<---\n\n");
		printf("\t Yapmak Istediginiz Islemi Seciniz >>> ");
		scanf("%d",&secenek);
		//Ekle seçeneði
		if(secenek==1){
			printf("Lutfen Girceginiz Sayiyi Girin : ");
			scanf("%d",&x);
			ilk=Enqueue(ilk,x);
		}
		//Bul Ve Sil Seçeneði
		else if(secenek==2){
			bulvesil();
		}	
		//Bul Ve Göster Seçeneði
		else if(secenek==3){
			bulgoster();
		}
		//Tümünü Listele Seçeneði
		else if(secenek==4){
			tumunulistele();
		}
		//Menü Dýþý Sayý girimi
		else{
			printf("\n\t\tLutfen Menu Sayilarindan Birisini Seciniz!!!\n");
		}
	}while(secenek!=5);
	
	
	getch();
	return 0;
}

void bulvesil(){
	int sil;
	int bulundu=0;
	printf("Hangi Sayiyi Silmek Istiyorsunuz : ");
	scanf("%d",&sil);
	
	gecici=ilk;
	while(gecici!=NULL){
	
		if(ilk->x==sil){
			bulundu=1;
		}
		ilk=Dequeue(ilk,&ilk->x);
		
		if(bulundu==1){
			break;
		}
	}
}

void bulgoster(){
	int aranan,z=1;
	printf("Hangi Sayiyi Aramak Istiyorsunuz : ");
	scanf("%d",&aranan);
	gecici=ilk;
	while(gecici!=NULL){
		if(gecici->x==aranan){
			printf("%d. Degeri : %d --- Adresi : %x --- Sonraki Adresi : %x *********\n",z,gecici->x,gecici,gecici->next);
			gecici=gecici->next;
			z++;
			continue;
		}
		printf("%d. Degeri : %d --- Adresi : %x --- Sonraki Adresi : %x\n",z,gecici->x,gecici,gecici->next);
		gecici=gecici->next;
		z++;
	}
}


void tumunulistele(){
	
	int y=1;
	gecici=ilk;
	while(gecici!=NULL){
		printf("%d. Degeri : %d --- Adresi : %x --- Sonraki Adresi : %x\n",y,gecici->x,gecici,gecici->next);
		gecici=gecici->next;
		y++;
	}
	
}
