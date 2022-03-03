#include<stdio.h>
void main()
{
int a[20],i,temp,j,n;
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[i]>a[j+1])
{
temp=a[i];
a[i]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted elements\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
