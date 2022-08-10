/*c program to linear search*/ 

#include<stdio.h>
int main(){
int  array[100],elementCount,counter,num;
printf("Enter the numbers of elements in an array:\n");
scanf("%d",&elementCount);
printf("Enter %d number \n",elementCount);
for(counter=0 ; counter < elementCount ;  counter++)
{
scanf("%d",&array[counter]);
}
printf("Enter a Number to search in array:");
scanf("%d",&num);

for(counter=0;counter<&elementCount ; counter++)
{
	if(array[counter]==num){
printf("Number %d found at index %d\n",num,counter);
break;
}
}
if(counter==&elementCount)
{
printf("Number %d not present in input array\n"num);
}}