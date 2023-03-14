#include <stdio.h>

int main()
{
  char sesso;
  printf("indicare il prorpio sesso: ");
  scanf(" %c", &sesso);
  if(sesso == 'm')
  {
    printf("sei un uomo\n");
  }
  else if(sesso == 'f')
  {
    printf("sei una donna\n");
  }
  else if(sesso == 'n')
  {
    printf("non identificato\n");
  }
  else
  {
    printf("errore\n");
  }
}