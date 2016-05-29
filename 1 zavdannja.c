#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
  FILE *file;
  int i,b;
  int array[10];
  file=fopen("test\\test.test","r");
  if (file == NULL)
   {
   	printf("Error");
   	exit(0);
   }	
   fscanf(file,"%d",&b);
   printf("n = %d\n",b);
   for (i=0;i<b;i++)
     {
     fscanf(file,"%d",&array[i]);
	 printf("%d\n",array[i]);  	
     }
   
   fclose(file);
   
	return 0;
	system ("PAUSE");
} 
