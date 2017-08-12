#include <stdio.h>

int main(int argc, char** argv)
{
  printf("Como o programa foi chamado: %s\n", argv[0]);
  if (argc > 1)
    for (int i=1; i<argc; i++)
      printf("Olá %s!\n", argv[i]);
  else
   {
     printf("Olá mundo!\n");
     printf("Por gentileza, informe algum argumento via linha de comando.\n");
   }
  
  return 0;
}
