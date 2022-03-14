#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int q[MAX];
int rear=-1;
int front=-1;
void enqu(int ele);
void dequ();
void display();
void enqu(int ele)
{
if(rear==MAX-1)
{
printf("q is full");
exit(0);
}
q[++rear]=ele;
if(front==-1)
front=0;
}
void dequ()
{
int ele;
if(front==-1)
{
printf("q is empty");
exit(0);
}
ele=q[front++];
if(front==rear)
front=rear=-1;
else
front=front+1;
return 0;
}
void display()
{
int i;
if(front==-1)
{
printf("q empty");
}
for(i=front;i<=rear;i++)
printf("%d",q[i]);
}
void main()
{
int ch,op=1,ele;
while(op)
{
printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n");
printf("enter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter the element to be insert:");
scanf("%d",&ele);
enqu(ele);
break;
case 2:dequ();
break;
case 3:display();
break;
}
printf("do u want cntnu(0/1):");
scanf("%d",&op);
}
}
