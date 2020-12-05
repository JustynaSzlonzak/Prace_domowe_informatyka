
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
      int tab[10][10], i, j, zarodek;
      zarodek=time(NULL);
      srand(zarodek);
      for(j=0;j<10;j++)
      {
         for(i=0;i<10;i++)
         {
            printf("%d\t",rand()%100);
         }
         printf("\n");
      }
      printf("\n");printf("\n");
      for(j=0;j<10;j++)
      {
         for(i=0;i<10;i++)
         {
            if(i==j)
               printf("%d\t",rand()%100);
            else
               printf("\t");
         }
         printf("\n");
      }
      for(j=10;j>0;j--)
      {
         for(i=10;i>0;i--)
         {
           if(i==j)
               printf("%d\t", rand()%100);
           else
               printf("\t");
         }
         printf("\n");
      }
      for(j=10;j>0;j--)
      {
         for(i=0;i<10;i++)
         {
           if(i==j)
              printf("%d\t", rand()%100);
           else
              printf("\t");
         }
         printf("\n");
     }
     for(j=0;j<10;j++)
     {
        for(i=10;i>0;i--)
        {
           if(i==j)
             printf("%d\t", rand()%100);
           else
             printf("\t");
        }
        printf("\n");
}
return 0;
}
