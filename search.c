#include<stdio.h>

void linearsearch(int array[],int n)
{
int i,search,flag=1;
printf("Enter element for search");
scanf("%d",&search);
for(i=0;i<n;i++)
  {
  if(array[i]==search)
    flag=0;
  }
  if(flag==0)
  printf("Element found at %d\n",n);
  else
  printf("Element not found\n");
     
}
void binarysearch(int arr[],int n)
{
int left=0;
int right=n-1;
int flag=1,search,mid;
printf("Enter element for search");
scanf("%d",&search);
while(left<=right)
{
    mid=(left+right)/2;
    if(arr[mid]==search)
       {
        flag=0;
        break;
       }
    if (arr[mid]<search)
            {
            left=mid+1;
            }
   
    if (arr[mid]>search)      
     {
             right=mid-1;
            }
}

  if(flag==0)
  printf("Element found at %d",n);
  else
  printf("Element not found\n");
}
               
int main()
{
int a[20],limit,i,j,choice,temp;
printf("Enter limit\n");
scanf("%d",&limit);
printf("Enter array elements\n");
for(i=0;i<limit;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n-1;i++)
 for(j=0;j<n-i-1;j++)
    {
    if(array[j]>array[j+1])
      {
      temp=array[j];
      array[j]=array[j+1];
      array[j+1]=temp;
      }
    }

do{
printf("Enter choice for search\n");
printf("1.Linear search\n");
printf("2.Binary search\n");
printf("3.Exit\n");
scanf("%d",&choice);
if(choice==1)
 linearsearch(a,limit);
if(choice==2)
 binarysearch(a,limit);
 }
while(choice!=3);
return 0;
}
