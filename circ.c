#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int front=-1;
int rear=-1;
int q[MAX];
int ele;
void enqueue(int ele);
int dequeue();
void display();
void enqueue(int ele)
{
rear=(rear+1)%MAX;
if(rear==front)
{
printf("Q full\n");
exit(0);
}
q[rear]=ele;
if(front==-1)
front=0;
}
int dequeue()
{
int ele;
if(front==-1)
{
printf("Q empty\n");
exit(0);
}
ele=q[front];
if(front==rear)
front=rear=-1;
else
front=(front+1)%MAX;
}
void display()
{
int i;
if(front==-1)
{
printf("Q empty\n");
exit(0);
}
if(front<=rear)
{
for(i=front;i<=rear;i++)
printf("%d",q[i]);
}
else
{
for(i=front;i<MAX;i++)
printf("%d",q[i]);
for(i=0;i<=rear;i++)
printf("%d",q[i]);
}
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
enqueue(ele);
break;
case 2:dequeue();
break;
case 3:display();
break;
}
printf("do u want cntnu(0/1):");
scanf("%d",&op);
}
}



