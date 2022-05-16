#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node{
    int sayi;
    struct Node* sonraki;
};
int main(void){

    struct Node *ilk=NULL;
    struct Node *ptr=NULL;
    struct Node*BUL=NULL;
    int aranan, bulundu;
    int okunan;
    bulundu =0;
    printf ("Bitirmek Icin 0 'a basiniz.\n");
    do
    {
        printf ("Lutfen sayi giriniz:");
        scanf("%d",&okunan);
        if (ilk==NULL){
            ilk = (struct Node*)malloc(1*sizeof(struct Node));
            ilk ->sayi = okunan;
            ilk -> sonraki = NULL;
            ptr=ilk;
        }
        
        else{
            ptr ->sonraki =(struct Node*)malloc(1*sizeof(struct Node));
            ptr = ptr ->sonraki;
            ptr -> sayi= okunan;
            ptr ->sonraki =NULL;
        }
      
    }while(okunan!=0);
    printf ("Lutfen aranan degeri giriniz:");
    scanf ("%d",&aranan);
    ptr = ilk;
    while (ptr != NULL){
       if (ptr -> sayi== aranan){
           bulundu =1;
           BUL = ptr;
           break;
       }
       ptr = ptr -> sonraki;
   }
   if(bulundu >0){
       printf ("Aranan deger %d bulundu ve silindi\n",BUL->sayi);
        if (BUL==ilk){
        ilk = ilk -> sonraki;
        free (BUL);
    }
    else{
        ptr=ilk;
        while (ptr -> sonraki!= BUL)
        ptr = ptr -> sonraki;
        ptr -> sonraki=ptr -> sonraki -> sonraki;
        free (BUL);
    }
  
   }
   else{
        printf ("Aranan deger bulunamadi");
   }
   
	getch();
    return 0;
}
