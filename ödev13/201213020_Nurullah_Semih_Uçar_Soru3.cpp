#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
struct OGRENCI{
    int id;
    float vizenot;
    float finalnot;
    float ortalama;
    struct OGRENCI* sonraki;
};
int main(void){
    struct OGRENCI *ilk=NULL;
    struct OGRENCI *ptr=NULL;
    int numara;
    float vizenotu;
    float finalnotu;
    float ortalamanot;
    int sayi;
    do
    {
        printf ("Lutfen ogrencinin numarasini giriniz: ");
        scanf("%d",&numara);
        printf ("Lutfen ogrencinin vize notunu giriniz: ");
        scanf("%fl",&vizenotu);
        printf ("Lutfen ogrencinin final notunu giriniz: ");
        scanf("%fl",&finalnotu);
        ortalamanot=((40*vizenotu)/100)+((60*finalnotu)/100);
        if(ilk==NULL){
            ilk=(struct OGRENCI*)malloc(1*sizeof(struct OGRENCI));
            ilk ->id =numara;
            ilk ->vizenot =vizenotu;
            ilk ->finalnot =finalnotu;
            ilk ->ortalama =ortalamanot;
            ilk -> sonraki= NULL;
            ptr= ilk;
        }
        else{
            ptr->sonraki=(struct OGRENCI*)malloc(1*sizeof(struct OGRENCI));
            ptr=ptr->sonraki;
            ptr->id=numara;
            ptr->vizenot=vizenotu;
            ptr->finalnot=finalnotu;
            ptr->ortalama=ortalamanot;
            ptr->sonraki= NULL;
        }
        printf ("Bitirmek Icin 0 'a basiniz ya da devam etmek icin herhangi bir sayi giriniz(0 haric).");
        scanf("%d",&sayi);
    }while(sayi!=0);
    ptr=ilk;
    while(ptr!=NULL){
        printf ("%d numarali ogrencinin ortalamasi:%f\n",ptr->id,ptr->ortalama);
        ptr = ptr -> sonraki;
    }
    
    return 0;
}
