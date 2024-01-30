#include<stdio.h>
void main()
{
int ch,la[20],j,i,n,k,m,d;
printf("enter the limit:");
scanf("%d",&n);

printf("\nenter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&la[i]);
}
do
{
printf("\n1.insertion\n2.deletion\n3.traversal\n enter your choice:");
scanf("%d",&ch);


switch(ch)
{
case 1:
{
printf("\nenter the position to be insert:");
scanf("%d",&k);
printf("\nenter the new element:");
scanf("%d",&m);
if(n==20)
{
printf("no space");

}
else
{
for(i=n-1;i>=k;i--)
{
la[i+1]=la[i];
}
la[k-1]=m;
n=n+1;
printf("\nelements of array:");
for(i=0;i<n;i++)
{
printf("%d\t",la[i]);
}
}
break;
}
case 2:
{
printf("\nenter the position to be deleted:");
scanf("%d",&d);

for(i=d-1;i<n-1;i++)
{
la[i]=la[i+1];
}
n=n-1;
printf("\narray after deletion:");
for(i=0;i<n;i++)
{
printf("%d\t",la[i]);
}
break;
}
case 3:
{
for(i=0;i<n;i++)
{
printf("\n%d\n",la[i]);
}
break;
}
}
ch++;
}
while(ch<4);
}
