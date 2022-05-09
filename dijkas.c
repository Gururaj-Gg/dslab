#include<stdio.h>
#include<stdlib.h>
int n,path[10],dest[10],cost[10][10];
void dijkstra(int srce)
{
int i,j,u,v,minimum,s[10];
for(i=0;i<n;i++)
{
dest[i]=cost[srce][i];
s[i]=0;
path[i]=srce;
}
s[srce]=1;
for(i=0;i<n;i++)
{ 
minimum=99;
u=-1;
for(j=0;j<n;j++)
{
if(s[j]==0)
{
if(dest[j]<minimum)
{
minimum=dest[j];
u=j;
}
}
}
if(u==-1)
return;
s[u]=1;
for(v=0;v<n;v++)
{
if(s[v]==0)
{
if(dest[u]+cost[u][v]<dest[v])
{
dest[v]=dest[u]+cost[u][v];
path[v]=u;
}
}
}
}
}
void pathm(int srce, int desti)
{
int i;
i=desti;
while(i!=srce){
printf("%d<--",i);
i=path[i];
}
printf("%d = %d",i,dest[desti]);
}
void main()
{
int i,j,srce,desti;
printf("enter the no.f vertices");
scanf("%d",&n);
printf("enter the cost adjacency");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&cost[i][j]);
printf("enter the source vertex:");
scanf("%d",&srce);
dijkstra(srce);
printf("the shortest distance is");
for(j=0;j<n;j++)
if(dest[j]==99)
printf("not reachable from%d-->%d",srce,j);
else
{
pathm(srce,j);
printf("\n");
}
}



