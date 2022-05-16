#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

char sondizi[1000]; // son çýktý
char sadecedizi[100];
int eklesayi=0; // nothing
struct stack{
	char harf;
	struct stack* sonraki;
};
struct stacksayi{
	int sayi;
	struct stacksayi* sonraki;
};
struct stack *Push(struct stack *top,char x){
	
	struct stack *yeni = (struct stack *) malloc(sizeof(struct stack *));
	yeni->harf=x;
	yeni->sonraki=NULL;
	
	if(top==NULL){
		top=yeni;
		return top;
	}
	else{
		yeni->sonraki = top;
		return yeni;
	}
}
struct stacksayi *Push2(struct stacksayi *top,int x){
	struct stacksayi *yeni = (struct stacksayi*) malloc(sizeof(struct stacksayi *));
	yeni->sayi=x;
	yeni->sonraki=NULL;
	eklesayi++;
	if(top==NULL){
		top=yeni;
		return top;
	}
	else{
		yeni->sonraki = top;
		return yeni;
	}

}

/*
struct stack *Pop(struct stack *top,char *c){
	
	if(top==NULL){//boþ
		c=NULL;
		return top;
	}
	else{
		struct stack *temp;
		temp = top;
		
		*c=temp->harf;
		top=top->sonraki;
		free(temp);
		
		return top;
	}
	
	
}

struct stacksayi *Pop2(struct stacksayi *top,int *s){
	if(top==NULL){//boþ
		s=NULL;
		return top;	
	}
	else{
		struct stacksayi *temp2;  
		temp2=top;
		*s=temp2->sayi;
		top=top->sonraki;
		free(temp2);
		
		return top;
	}
}
*/
void tumunulistele(struct stack* rone){
	
	int y=1;
	struct stack* temp=rone;
	while(rone!=NULL){
		printf("\t%d. %c \n",y,rone->harf);
		rone=rone->sonraki;
		y++;
	}
	
}
void tumunulistelesayi(struct stacksayi* rone){
	
	int y=1;
	struct stacksayi* temp=rone;
	printf("\n");
	while(rone!=NULL){
		printf("\t%d. %d \n",y,rone->sayi);
		rone=rone->sonraki;
		y++;
	}
	
}

int main(){
	
	struct stack *root=NULL;
	struct stack *temp7;
	struct stacksayi *root2=NULL;
	int secenek=0;
	int kontrolsol=0,kontrolsag=0;
	int i=0,j=0;
	char dizi[100];
		printf("Yazinizi Girin : ");
		scanf("%[^\n]s",dizi);
		while(dizi[j]!='\0'){
			if(dizi[j]==']' ){
				kontrolsol++;
			}
			if(dizi[j]=='['){
				kontrolsag++;
			}
			j++;
			
		}
			
			if(kontrolsag==0 && kontrolsol==0){
				printf("Parantez Girilmedi");
				return 0;
			}
			if(kontrolsag!=kontrolsol){
				printf("Parantez Hatasi");
				return 0;
			}
			
			
		int l=0;
		int f=0;
		while(dizi[i]!='\0'){
			int p;
		
			/*if((dizi[i]>64 && dizi[i]<93) || (dizi[i]>96 && dizi[i]<123)){
				int z=0;
				int lengt=0;
				while(sadecedizi[z]!='0'){
				z++;
				lengt++;;
			}
				if(dizi[i]=='['){
					root2=Pop2(root2,*c);
					while()
					sondizi[f]=sadecedizi[lengt];
				}
				sadecedizi[l]=dizi[i];
				l++;
			}*/
			int kontrol=0;
			if(dizi[i]>47 && dizi[i]<58){
				p=i;
				int c;
				int sayac=0;
				while(dizi[p]!='['){
					if(sayac>0){
						c= (c*10)+((int)dizi[i] - 48);
						kontrol=1;
					}
					else{
						c = (int)dizi[i] - 48;
						kontrol=1;
					}
					p++;
					sayac++;
					i=p;
					
				}
				root2=Push2(root2,c);
			}
			else{
				root=Push(root,dizi[i]);

			}
			if(kontrol==1){
				root=Push(root,dizi[p]);
			}
			i++;
		}
			/*int m=0;
			int len=0;
			while(dizi[m]!='0'){
				m++;
				len++;;
			}*/
			
			
			tumunulistele(root);
			tumunulistelesayi(root2);
		
	getch();
	return 0;
}
	

