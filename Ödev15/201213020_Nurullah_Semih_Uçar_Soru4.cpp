#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct tamsayi{
	int x;
	struct tamsayi *next;
	struct tamsayi *prior;
};
struct tamsayi *ilk=NULL;
void siralama() { 
    struct tamsayi *simdi = NULL;
	struct tamsayi *isrt = NULL; 
    int temp;  
    if(ilk == NULL) { 
        return; 
    } 
    else { 
        for(simdi = ilk; simdi->next != NULL; simdi = simdi->next){ 
            for(isrt = simdi->next; isrt != NULL; isrt = isrt->next){ 

                if(simdi->x > isrt->x){ 
                    temp = simdi->x; 
                    simdi->x = isrt->x; 
                    isrt->x = temp; 
                   
                    } 
            } 
        } 
    } 
} 
	
int main(){
	

	struct tamsayi *gecici=NULL;
	struct tamsayi *ptr=NULL;
	struct tamsayi *liste=NULL;
	struct tamsayi *temp=NULL;	
	char devam;
	int sayi,p=1;
	do{
		
		printf("\n\n\t\tLutfen Bir Sayi Giriniz : ");
		scanf("%d",&sayi);
	
		if(ilk==NULL){
			ilk =(struct tamsayi*) malloc(1*sizeof(struct tamsayi));
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
			gecici=ilk;
			
				
		}
		printf("\n\t\tSayi Eklemeye Son Vermek Icin (e) 'yi Tuslayiniz.\n\t\t(Devam Etmek Isterseniz (e)'den Baska Bir Harf Giriniz) : ");
		devam = getche();
	}while(devam!='e' && devam!='E');
	
	siralama();
	
	liste=ilk;
		while(liste!=NULL){
			printf("\n\n\t[[[[[[  [%d.] Sayi : %d  ---  Adresi : %x  --- Sonraki Adresi : %x  --- Onceki Adresi : %x   ]]]]]]",p,liste->x,liste,liste->next,liste->prior);
			liste=liste->next;
			p++;
		}
	
	
	
	getch();
	return 0;
}
