#include <stdio.h>

int main()
{
  int factores,i;
  printf("Escriba un número para encontrar sus factores:\n");
  scanf("%d",&factores);
    if(factores>=1)
    {
        for(i=1;i<=factores;i++)
        {
            if(factores%i==0)
                printf("%d,",i);
    }
    }
    else
        printf("Ingreso un número o un carácter desconocido.\n");
  return 0;
}

