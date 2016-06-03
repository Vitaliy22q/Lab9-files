#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE* file;
	double prices[10000];
	int n = 0;
	
	file = fopen("devcpp\\djia.txt", "r");	
	if(!file==NULL) {
		printf("Error");
		exit(0);
	}
	
	while(!feof(file)) {
		fscanf(file, "%lf\n", &prices[n]);
		printf("p[%d] = %lf\n", n, prices[n]);
		n++;
	}	
	
	fclose(file);
	return 0;
}
