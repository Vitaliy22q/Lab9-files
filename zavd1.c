#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 FILE *file;
	 char s[100];
	 int n = 1;
	
	file = fopen("test\\test.txt", "r");	
	if(!file==NULL) {
		printf("\nError\n");
		exit(0);
	}
	
	while(!feof(file)) {
		fgets(s, 100, file);
		printf("line %d, poz %d: %s\n", n, ftell(file), s);
		n++;
	}	
	
	fclose(file);
	
	return 0;
}
	
	



