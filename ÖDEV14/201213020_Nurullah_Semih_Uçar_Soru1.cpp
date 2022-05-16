#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


struct deger{
	int x;
	struct deger* next;
};
struct deger *Push(struct deger *top,int x){
	struct deger *yeni = (struct deger *) malloc(1*sizeof(struct deger *));
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

/*//(11111) STACK ÝÇÝN SÝLÝP LÝSTELEME (KONTROL)
struct deger *Pop(struct deger *top,int *x){
	if(top==NULL){
	
		x=NULL;
		return top;
	}
	else{
		struct deger *temp;
		temp=top;
		*x=temp->x;
		top=top->next;
		free(temp);
		return top;
	}
}*/

struct deger *Enqueue(struct deger *ilk,int x){
	struct deger *yeni = (struct deger *) malloc(1*sizeof(struct deger *));
	yeni->x=x;
	yeni->next=NULL;
	
	if(ilk==NULL){
		ilk=yeni;
		return ilk;
	}
	else{
		struct deger *temp = ilk;
		while(temp->next != NULL)
			temp=temp->next;
		
		temp->next = yeni;
		return ilk;
	}	
}
//(22222) QUEUE ÝÇÝN SÝLÝP LÝSTELEME (KONTROL)
struct deger *Dequeue(struct deger *ilk, int *x){
	if(ilk==NULL){
		x=NULL;
		return ilk;
	}
	else{
		struct deger *temp;
		temp=ilk;
		
		*x=temp->x;
		ilk=ilk->next;
		free(temp);
		return ilk;
	}
}
int main(){
	int x;
	int sayac=0;
	int p;
	int k;
	int sayac2=0;
	int secenek;
	int sansver;
	char devammi;
	struct deger *top=NULL;
	struct deger *ilk=NULL;
	check:
	printf("-------------------------------\n");
	printf("-------------------------------\n");
	printf("-------------------------------\n");
	printf("\nLutfen Yapmak Istediginiz Secenegi Seciniz.");
	printf("\n1. Secenek -> Stack(Yigin) Listesi");
	printf("\n2. Secenek -> Queue(Kuyruk)Listesi");
	printf("\nLutfen Secenek Numarasini Giriniz : ");
	scanf("%d",&secenek);
	
	//Stack Listesi
	if(secenek==1){
		do{
			printf("\nLutfen Deger Giriniz : ");
			scanf("%d",&x);
		
			top=Push(top,x);
		
			sayac++;
			printf("\nDevam Etmek Icin Herhangi Bir Tusa Basiniz.");
			printf("\nDeger Girmeyi Birakmak Icin  (h) Tuslayiniz : ");
			devammi = getche();
		}while(devammi!='h' && devammi!='H');
	/*	//(11111) STACK ÝÇÝN SÝLÝP LÝSTELEME (KONTROL)
		printf("\n-----Stack(Yigin) Listesi-----");
		for(p=0;p!=sayac;p++){
    		top=Pop(top,&x);
        	printf("\n%d. deger : %d",p+1,x);
		}*/
		
	}
	
	//Queue Listesi
	else if(secenek==2){
		do{
			printf("\nLutfen Deger Giriniz : ");
			scanf("%d",&x);
		
			ilk=Enqueue(ilk,x);
			
			sayac2++;
			printf("\nDevam Etmek Icin Herhangi Bir Tusa Basiniz.");
			printf("\nDeger Girmeyi Birakmak Icin  (h) Tuslayiniz : ");
			devammi = getche();
		}while(devammi!='h' && devammi!='H');

		//(22222) QUEUE ÝÇÝN SÝLÝP LÝSTELEME (KONTROL)
		printf("\n-----Queue(Kuyruk) Listesi-----");
		for(k=0;k<sayac2;k++){
    		ilk=Dequeue(ilk,&x);
        	printf("\n%d. deger : %d",k+1,x);
		}
	}
	
	//Seçenek dýþý sayi
	else{
		printf("Lutfen 1. ya da 2. Seceneklerin Numarasini Giriniz (Ornek: 1) :\n");
		goto check;
	}

	free(ilk);
	free(top);
	
	
	getch();
	return 0;
}
