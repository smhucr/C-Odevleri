#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	srand(time(NULL));
	
	FILE *fp;
	int *ip, x, y=0;
	
	ip = (int*) malloc(sizeof(int));
	
	if ((fp = fopen ("sayi.txt", "w")) == NULL) {
        printf("Dosya acilamadi!");
        exit(1);
    }
    printf("Kaydedilen Sayilar:\n");
    for(int i=0; i<100; i++){
    	int x = rand()%100;
    	printf("%d: %d\n", i+1, x);
    	fprintf(fp,"%d\n",x); 	
	}    
    fclose(fp);
    if ((fp = fopen ("sayi.txt", "r")) == NULL) {
        printf("Dosya acilamadi!");
        exit(1);
    }
	printf("\n|0|: 5. biti 0 olan sayilar\n|1|: 5. biti 1 olan sayilar\n");
	
    for(int i=0; !feof(fp); i++){
	    fscanf(fp,"%d\n", &x);
	    if(!(x&(1<<5))){
	    	ip = (int*) realloc(ip, (y+1) * sizeof(int));
	    	*(ip+y) = x;
	    	printf("|0|: %d\n", *(ip+y));
	    	y++;
		}else{
			printf("\t\t|1|: %d\n", x);
		}
	}
	ip = (int*) realloc(ip, (y+1) * sizeof(int));
	*(ip+y) = '\0';
	
    fclose(fp);
	return 0;
}
