#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
     char input[100];
     FILE* fp;
     int i;
     
     fp=fopen("sample.txt", "w");
     
     for(i=0; i<3; i++)
     {
     
     printf("input a word:");
     scanf("%s", input);
     fprintf(fp,"%s\n", input);
     }
     fclose(fp);

  system("PAUSE");	
  return 0;
}
