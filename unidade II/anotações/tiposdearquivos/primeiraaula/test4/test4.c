#include <stdio.h>
#include <stdlib.h>


int main()
{
  FILE* arquivo = fopen("entrada_escrita.txt","wt");

  if(arquivo== NULL)
   {
      printf("Erro ao abrir o aquivo\n");
      exit(1);
   }
  else
   {
       printf("aquivo criado\n");
   }
   fputs("Deu certo",arquivo);
   
   if(!fclose(arquivo))
   {
    printf("aquivo fechado\n");
   }
   fclose(arquivo);
   return 0;
}