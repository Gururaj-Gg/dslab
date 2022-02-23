#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
int stack[MAXSIZE],top=-1;
void push(int ele)
{
int n;
if(top==MAXSIZE-1)
{
printf("stack is full");
exit(0);
stack[++top]=ele;
}
exit(0);
}
int pop()
{
int ele;
if(top==-1)
{
printf("stack is empty");
exit(0);
}
else
{
ele=stack[top--];
return ele;
}
void display()
{
int i;
if(stack[top]==-1)
{
printf("stack is empty");
exit(0);
}
else
{
for(i=top;i>=0;i--)
printf("%d",stack[i]);
}
void main()
{
int ch;
stack[top]=-1;
int ele;
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
printf("enter your choice:");
scanf("%d",&ch);
while(1)
{
switch(ch)
{
case 1:printf("enter element to be insert");
scanf("%d",&ele);
push(ele);
break;
case 2:printf("enter element to be deleted");
pop();
break;
case 3:display();
break;
case 4:exit(0);
default:printf("invalid ");
exit(0);
}
}
}


