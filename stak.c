#include<stdio.h>
int main()
{
int top=-1,max,s[10],choice,ele,i;
printf("enter the max of stack");
scanf("%d",&max);
while(1)
{
printf("\n1.push\n2.pop\n3.display\n.4.exit\nenter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:if(top<max-1)
{
top
