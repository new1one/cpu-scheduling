#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display();
struct node
{
 int arr;
 int cpu;
 char name;
 struct node *next;
};
struct node *head=NULL;
void main()
{
 struct node *newnode;
 struct node *temp;
 char n;
 int a,c,q,i;
 clrscr();
 printf("\nenter number of process=");
 scanf("%d",&q);
 for(i=0;i<q;i++){
 newnode=((struct node*)malloc(sizeof(struct node)));
 newnode->next=NULL;
 printf("\nenter name of process");
 scanf("%s",&n);
 newnode->name=n;
 printf("\nenter arrival time=");
 scanf("%d",&a);
 newnode->arr=a;
 printf("\nenter cpu birst time=");
 scanf("%d",&c);
 newnode->cpu=c;
 if(head==NULL)
 { head=newnode;}
  else
  {
   temp=head;
   while(temp->next!=NULL)
   {
    temp=temp->next;
   }
   temp->next=newnode;
  }
 }
 display();

 getch();
}
void display()
{
 float sum=0;
 int a[20],j,i;
 struct node *temp;
 struct node *pretemp;
 temp=head;
 while(temp!=NULL)
 {
  printf("\n name of process-%c",temp->name);
  printf("\n arrival time=%d",temp->arr);
  printf("\n cpu birst time=%d",temp->cpu);
  temp=temp->next;
 }
 printf("\nfinish time for each process");
 temp=head;
 pretemp=NULL;
 while(temp!=NULL)
 {
  sum=(temp->cpu)+sum;
 printf("\n finish time for process %c is %d",temp->name,sum);
 printf("\n turnaround time = %d",(sum-(temp->arr)));
 a[i]=(sum-(temp->arr));
 i++;
 pretemp=temp;
 temp=temp->next;
 }
 sum=0;
 for(j=0;j<i;j++)
 {
  sum=sum+a[i];
 }
 printf("turnaround time = %d",sum);

}
