//*Directiva de procesamientos*
#include <stdio.h>
//*Función Principal*
int main() 
{
//*variables* 
int i;

    for(i=65;i<=90;i++)
    {
        if(i==65 || i==69 || i==73 || i==79 || i==85)
        printf("%c Es una vocal. \n",i);
    else 
        if(i==77)
            printf("%c Con esta letra empieza mi nombre. \n",i);
    else
        printf("%c Es consonante. \n",i);
    }
  return 0;
}
