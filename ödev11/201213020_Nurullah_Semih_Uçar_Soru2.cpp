#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main(){

	srand(time(NULL));
	
    unsigned int sayilar[100];
    FILE *fp, *fp0, *fp1;
    
	if ((fp = fopen ("sayilar.txt", "w")) == NULL || (fp0 = fopen ("sayilar0.txt", "w")) == NULL || (fp1 = fopen ("sayilar1.txt", "w")) == NULL) {
        printf("Dosya acilamadi!");
        getch();
        exit(1);
    }
    
    printf("Olusturulan Sayilar:\n");
    for(int i=0; i<20; i++){
    	
    	sayilar[i]=rand()%100;
    	
    	sayilar[i+20]=rand()%100;
    	
    	sayilar[i+40]=rand()%100;
    	
    	sayilar[i+60]=rand()%100;
    	
    	sayilar[i+80]=rand()%100;
    	
    	printf("%d: %u\t\t%d: %u\t\t%d: %u\t\t%d: %u\t\t%d: %u\n", i+1, sayilar[i], i+21, sayilar[i+20], i+41, sayilar[i+40], i+61, sayilar[i+60], i+81, sayilar[i+80]);
	}
	
	for(int j=0; j<100; j++){
		fprintf(fp,"%d\n", sayilar[j]);
		if(sayilar[j]&(1<<4)){
			printf("\t\t\t|1| %d: %u --> %u\n", j+1, sayilar[j], sayilar[j]&(~(1<<2)));
			fprintf(fp1,"%d\n", sayilar[j]&(~(1<<2)));
		}else{
			printf("|0| %d: %u --> %u\n", j+1, sayilar[j], sayilar[j]|(1<<3));
			fprintf(fp0,"%d\n", sayilar[j]|(1<<3));
		}
	}
	
	fclose(fp);
	fclose(fp0);
	fclose(fp1);

	return 0;
}
