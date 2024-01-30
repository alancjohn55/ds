#include<stdio.h>

void addition(int array[20][20],int arrayb[20][20],int n)
{
int i,j;
int c[20][20];
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
  c[i][j]=array[i][j]+arrayb[i][j];

printf("The sum matrix elements are\n");
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
  printf("%d\t",c[i][j]);
 printf("\n");
}
}
void substraction(int array[20][20],int arrayb[20][20],int n)
{
int i,j;
int c[20][20];
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
  c[i][j]=array[i][j]-arrayb[i][j];

printf("The diffrence matrix elements are\n");
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
  printf("%d\t",c[i][j]);
 printf("\n");
}
}
void multiplication(int array[20][20],int arrayb[20][20],int n)
{
int i,j,k;
int c[20][20];
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 {
  c[i][j]=0;
  for(k=0;k<n;k++)
   c[i][j]=c[i][j]+array[i][k]*arrayb[k][j];
 }
   
   

printf("The Multiplication matrix elements are\n");
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
  printf("%d\t",c[i][j]);
 printf("\n");
}


}
               
int main()
{
int a[20][20],b[20][20],limit,i,j,choice;
printf("Enter row of square matrix\n");
scanf("%d",&limit);
printf("Enter first matrix elements\n");
for(i=0;i<limit;i++)
 for(j=0;j<limit;j++)
  scanf("%d",&a[i][j]);
printf("The first matrix elements are\n");
for(i=0;i<limit;i++)
{
 for(j=0;j<limit;j++)
  printf("%d\t",a[i][j]);
 printf("\n");
}

printf("Enter second matrix elements\n");
for(i=0;i<limit;i++)
 for(j=0;j<limit;j++)
  scanf("%d",&b[i][j]);
printf("The second matrix elements are\n");
for(i=0;i<limit;i++)
{
 for(j=0;j<limit;j++)
  printf("%d\t",b[i][j]);
 printf("\n");
}
do{
printf("Enter choice for operations\n");
printf("1.Addition\n");
printf("2.Substraction\n");
printf("3.Multiplication\n");
printf("4.Exit\n");
scanf("%d",&choice);
if(choice==1)
 addition(a,b,limit);
if(choice==2)
 substraction(a,b,limit);
if(choice==3)
 multiplication(a,b,limit);
 }
while(choice!=4);
return 0;

}
