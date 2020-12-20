#include <stdio.h>
#include <math.h>

int distance(int a, int b, int c, int d)
{
int x,y, distance;

x= c-a;
y= d-b;
distance=sqrt((x*x)+(y*y));

return distance;
}
int check(int r1, int r2, int dist)
{
int cord;
cord = 0;
int r, difr;
r = r1 + r2;
if(r1 >= r2)
{
difr = r1-r2;
}
else
{
difr = r2-r1;
}
if(dist > r)
{
printf("Okregi sa rozlaczne\n");
}
if(dist==r)
{
printf("Okregi sa styczne\n");
cord = 1;
}
if(dist > difr && dist < r)
{
printf("Okregi przecinaja sie\n");
cord = 2;
}
}

int main()
{
int a,b,c,d,r1,r2,dist,cord;
printf("Podaj wspolrzedne a, b i r okregu pierwszego\n");
scanf(" %d %d %d", &a, &b, &r1);
printf("Podaj wsporzedne c,d i r okregu drugiego\n");
scanf("%d %d %d", &c, &d, &r2);

dist = distance(a,b,c,d);
cord = check(r1,r2,dist);


return 0;
}

