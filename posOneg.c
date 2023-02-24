//*irectiva de procesamientos*
#include <stdio.h>
int main() 
{
//*variables*  
  int limite,i,acumulador=0;
  printf("Escribe el límite superior:\n");
  scanf("%d",&limite);
  if(limite>0)
  {
    for(i=limite;i>=0;i--)
    {
      if(i%2!=0)
      {
        printf("%d \n",i);
        acumulador=acumulador+i;
      }
    }
    printf("La suma de los números impares es: %d",acumulador);
  }
  else 
     if (limite<0)
  {
        for(i=limite;i<=0;i++){
            if(i%-2!=0)
      {
            printf("%d \n",i);
            acumulador=acumulador+i;
      }
    }
    printf("La suma de los números impares es: %d ",acumulador);
  }
  else
    printf("El 0 no tiene un límite. \n");
  return 0;
}
