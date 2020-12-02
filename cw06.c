#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int tablica[10], i, zarodek, g;

zarodek=time(NULL);
srand(zarodek);
for(i=0;i<10;i++)
{

tablica[i]=rand()%100;
printf("Dla indeksu %d wartosc to %d", i, tablica[i]);
}

g=0;

for(i=0;i<10;i++)
{
if(tablica[i]>g)
{g=tablica[i];
}
}

printf("Najwieksza wartosc to %d",g);

return 0;
}



