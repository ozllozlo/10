#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
     char input[100];
     FILE* fp;
    char c;
     
     fp=fopen("sample.txt", "r");
     if(fp==NULL)
     {
                 printf("Failed to open file!\n");
                 return -1;
    
                 }
     
     while((c=fgetc(fp))!=EOF)
     {
                              putchar(c);
                              
     }
     while(fgets(input, 100, fp)>0)
     {
                        printf("%s", input);
                        }
     fclose(fp);

  system("PAUSE");	
  return 0;
}
