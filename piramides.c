#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,x,y,limite=5,numero=5;
    
    for(j=1; j <=4; j++)
    {
        for(i=1; i <=10; i++)
    {
        printf("*");
}
        printf("\n");
    }
    printf("---------------\n");
    for(j=1; j <=5; j++)
    {
        for(i=1; i <=j; i++)
    {
            printf("*");
}
             printf("\n");
    }
    printf("---------------\n"); 
    
   for(j = 1; j<=limite; j++ )
   {
      for(i=1; i <=limite-j; i++)
   {
      printf(" ");
}
        for(i =1; i <=j; i++)
     {
         printf("*");
     }
        printf("\n");
   }
   printf("---------------\n"); 
   for(i=1; i<=numero; i++)
   {
       for(j=1;j<=numero-i; j++)
        printf(" ");
         for(j=1;j<=2*i-1;j++)
             printf("*");
             printf("\n");
       
   }
     printf("---------------\n"); 
    for(i=1;i<=5;i++) 
   {
        for(j=1;j<=5-i;j++) 
     {
            printf(" ");
        }
            for(x=1;x<=2*i-1;x++){
            printf("%d",i);
      }
                printf("\n");
   }
    printf("---------------\n"); 
   for(i=1;i<=5;i++) 
   {
     for(j=1;j<=5-i;j++) 
     {
        printf(" ");
        }
            for(x=1;x<=2*i-1;x++)
        {
            y = abs (i - x)+1;
          
            printf("%d",y);
      }
                printf("\n");
    }
  return 0;
}
