#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node
{
    int sayi;
    struct Node* sonraki;
};
int main(void)
{
    struct Node *ilk=NULL;
    struct Node *ptr=NULL;
    int okunan;
    printf ("Bitirmek Icin 0 'a basiniz.\n");
    do
    {
        printf ("Lutfen sayi giriniz:");
        scanf("%d",&okunan);
        if (ilk==NULL) 
        {
            ilk = (struct Node*)malloc(1*sizeof(struct Node));
            ilk ->sayi = okunan;
            ilk -> sonraki = NULL;
            ptr=ilk;
        }
        else
        {
            ptr ->sonraki =(struct Node*)malloc(1*sizeof(struct Node));
            ptr = ptr ->sonraki;
            ptr -> sayi= okunan;
            ptr ->sonraki =NULL;
        }
    }while(okunan!=0);
    getch();
    return 0;
}
