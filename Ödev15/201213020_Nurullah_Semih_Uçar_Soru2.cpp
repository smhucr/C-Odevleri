#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct tamsayi{
	int x;
	struct tamsayi *next;
	struct tamsayi *prior;
};

int main(){
	
	struct tamsayi *ilk=NULL;
	struct tamsayi *ptr=NULL;
	struct tamsayi *gecici=NULL;
	struct tamsayi *BUL=NULL;
	char devam,stop;
	int liste,p=1;
	int sayi,aranan,z=1,bulundu=0;
	do{
		printf("\n");
		printf("\n\t\t\t Lutfen Listenize Eklemek Istediginiz Sayiyi Giriniz : ");
		scanf("%d",&sayi);
		
		if(ilk==NULL){
			ilk=(struct tamsayi*) malloc(1*sizeof(struct tamsayi));
			ilk->prior=NULL;
			ilk->x=sayi;
			ilk->next=NULL;
			ptr=ilk;
		}
		else{
			ptr->next=(struct tamsayi*) malloc(1*sizeof(struct tamsayi));
			ptr->next->prior=ptr;
			ptr=ptr->next;
			ptr->x=sayi;
			ptr->next=NULL;
		}
		printf("\n\t\tSayi Eklemeye Son Vermek Icin (e) 'yi Tuslayiniz.\n\t\t(Devam Etmek Isterseniz (e)'den Baska Bir Harf Giriniz) : ");
		devam = getche();
	}while(devam!='e' && devam!='E');
	//////////////////////////////////////
		//Listeyi Görüntülemek Ýçin Bu Parçayý Kullanabilirsiniz.
	printf("\n\n\tListeyi Goruntulemek Ister Misiniz ?(Isterseniz (1) Sayisini Giriniz) : ");
	scanf("%d",&liste);
	if(liste==1){ // int liste,p=1; yazmayý unutmayýn en üstte
		gecici=ilk;
		while(gecici!=NULL){
			printf("\n\n\t[[[[[[  [%d.] Sayi : %d  ---  Adresi : %x  --- Sonraki Adresi : %x  --- Onceki Adresi : %x   ]]]]]]",p,gecici->x,gecici,gecici->next,gecici->prior);
			gecici=gecici->next;
			p++;
		}
	}
	//////////////////////////////////////
		gecici=ilk;
		printf("\n\n\t\tAramak Istediginiz Sayiyi Giriniz : ");
		scanf("%d",&aranan);
		
	while(gecici!=NULL){
		if(gecici->x==aranan){
			printf("\n%d. de Bulunmustur. Adresi : %x --- Ve Silinmistir !!!",z,gecici);
			BUL=gecici;
			bulundu=1;
		}
		if(BUL==ilk){
			ilk=ilk->next;
			BUL->next->prior=NULL;
			gecici=gecici->next;
			free(BUL);
			z++;
			bulundu=0;
			continue;
		}
		if(BUL==ptr){
			ptr->prior->next=NULL;
			gecici=gecici->next;
			free(BUL);
			z++;
			bulundu=0;
			continue;

		}
		if(bulundu==1){
			BUL->prior->next=BUL->next;
			BUL->next->prior=BUL->prior;
			free(BUL);
		}
		gecici=gecici->next;
		z++;
	}
	//////////////////////////////////////
		//Listeyi 2. kez Görüntülemek Ýçin Bu Parçayý Kullanabilirsiniz.
	printf("\n\n\tListeyi Goruntulemek Ister Misiniz ?(Isterseniz (1) Sayisini Giriniz) : ");
	scanf("%d",&liste);
	p=1;
	if(liste==1){ // int liste,p=1; yazmayý unutmayýn en üstte
		gecici=ilk;
		while(gecici!=NULL){
			printf("\n\n\t[[[[[[  [%d.] Sayi : %d  ---  Adresi : %x  --- Sonraki Adresi : %x  --- Onceki Adresi : %x   ]]]]]]",p,gecici->x,gecici,gecici->next,gecici->prior);
			gecici=gecici->next;
			p++;
		}
	}
	//////////////////////////////////////
	
	
	free(ilk);
	free(ptr);
	free(BUL);
	free(gecici);
	
	getch();
	return 0;
}
