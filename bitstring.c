#include<stdio.h>
#include <stdbool.h>
int a[11], b[11], res[11];
int U[11]={1,2,3,4,5,6,7,8,9,10};
void display(int bs[]){
for(int i=1;i<11;i++){
printf("%d\t",bs[i]);
}
}
void input(int bs[], int n){
int x;
printf("Enter the elements : ");
for(int i=0;i<n;i++){
scanf("%d",&x);
bs[x]=1;
}
}
void set_union(){
for(int i=1;i<11;i++){
res[i]=a[i] | b[i];
}
printf("\nUnion Set : ");
display(res);
}
void set_intersection(){
for(int i=1;i<11;i++){
res[i]=a[i] & b[i];
}
printf("\nIntersection Set : ");
display(res);
}
void set_difference(){
for(int i=1;i<11;i++){
res[i]=a[i] & ~b[i];
}
printf("\nDifference Set : ");
display(res);
}
bool set_equality(){
for(int i=1;i<11;i++){
if(a[i] != b[i]){
return false;
}
}
return true;
}