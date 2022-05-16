#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// Stack Ýçin 4 Menü Sorusu

struct kayit{
	int x;
	struct kayit* next;
};

//	struct kayit *top=NULL;
	struct kayit *gecici=NULL;
	
struct kayit *Push(struct kayit *top,int x){
	struct kayit *yeni = (struct kayit *) malloc(1*sizeof(struct kayit *));
	yeni->x=x;
	yeni->next=NULL;
		
	if(top==NULL){
		top=yeni;
		return top;		
	}
	else{
		yeni->next = top;
		return yeni;
	}
}
struct kayit *Pop(struct kayit *top,int *x){
	if(top==NULL){
	
		x=NULL;
		return top;
	}
	else{
		struct kayit *temp;
		temp=top;
		*x=temp->x;
		top=top->next;
		free(temp);
		return top;
	}
}
void bulgoster();
void tumunulistele();
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
			top=Push(top,x);
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
//bul ve sil de silmek istediðimi bulabiliyorum fakat silmeye çalýþýnca hata veriyor o yüzden stack yapasýnda istenilen sayýnýn üstündeki tüm sayýlarý siliyorum.
void bulvesil(){
	int sil;
	int bulundu=0;
	printf("Hangi Sayiyi Silmek Istiyorsunuz : ");
	scanf("%d",&sil);
	
	gecici=top;
	while(gecici!=NULL){
	
		if(top->x==sil){
			bulundu=1;
		}
		top=Pop(top,&gecici->x);
		
		if(bulundu==1){
			break;
		}
	}
}


void bulgoster(){
	int aranan,z=1;
	printf("Hangi Sayiyi Aramak Istiyorsunuz : ");
	scanf("%d",&aranan);
	gecici=top;
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
	gecici=top;
	while(gecici!=NULL){
		printf("%d. Degeri : %d --- Adresi : %x --- Sonraki Adresi : %x\n",y,gecici->x,gecici,gecici->next);
		gecici=gecici->next;
		y++;
	}
	
}
