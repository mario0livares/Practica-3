//*Directiva de procesamientos*
#include <stdio.h>
#include <stdlib.h>
//*Función Principal*
int main() 
{
//*variables*    
int Lanzamiento,lado,i,numero=6,dado,contador=0;

  printf("¿Cuantas veces quieres lanzar el dado?\t");
  scanf("%d",&Lanzamiento);
  printf("¿Qué valor te interesa?\t");
  scanf("%d",&lado);
  if(lado>=1 && lado<=6)
  {
    for(i=0;i<Lanzamiento;i++)
    {
        dado=rand()%numero;
            printf("%d \n",dado);
            
    if(dado==lado)
        contador++;
    }
        printf("El %d cayó %d veces \n",lado,contador);
        return 0;
  }
    else
        printf("Error, ese valor no aparece en el dado. \n");

}
