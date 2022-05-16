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
	char devam;
	int sayi,liste,p=1;
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
	//Listeyi Görüntülemek Ýçin Bu Parçayý Kullanabilirsiniz.
	/*printf("\n\n\tListeyi Goruntulemek Ister Misiniz ?(Isterseniz (1) Sayisini Giriniz) : ");
	scanf("%d",&liste);
	if(liste==1){
		gecici=ilk;
		while(gecici!=NULL){
			printf("\n\n\t[[[[[[  [%d.] Sayi : %d  ---  Adresi : %x  --- Sonraki Adresi : %x  --- Onceki Adresi : %x   ]]]]]]",p,gecici->x,gecici,gecici->next,gecici->prior);
			gecici=gecici->next;
			p++;
		}
	}*/
	
	
	
	
	free(ilk);
	free(ptr);
	
	
	getch();
	return 0;
}
