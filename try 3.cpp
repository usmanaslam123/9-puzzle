#include<iostream>
#include<stdio.h>
using namespace std;
int final[3][3] = {-1,1,2,3,4,5,6,7,8};
void swap(int arr[][3]);
int check(int arr[][3])
{
	int c=0;
	for(int i=0; i<3; i++) 
	{
      for(int j=0;j<3;j++) 
	  {
      	if(arr[i][j]==final[i][j])
      	{
      		c++;
      	}
   		}
   	}
   if(c==9)
   {
   	return 1;
   }
   else
   {
   	return 0;
   }
}
void display(int arr[][3])
{
	cout<<"Two Dimensional Array Elements:\n";
    for(int i=0; i<3; i++) {
    	cout<<"\n";
      for(int j=0;j<3;j++) {
         cout<<arr[i][j]<<"  ";
         }
      }
}

void input(int arr[][3])
{
   for(int i=0; i<3; i++) {
      for(int j=0;j<3;j++) {
         printf("Enter value for arr[%d][%d]:", i, j);
         scanf("%d", &arr[i][j]);
      }
   }
   cout<<"\n";
   display(arr);
   swap(arr);
}
void swap(int arr[][3])
{
	int row,column;
	int i,j;
	//finds -1 element
	for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
        if (arr[i][j]==-1)
        {
        	row=i;
        	column=j;
        }
   }
}
int arr2[3][3];
	for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
      	arr2[i][j]=arr[i][j];
   }
}

if (check(arr2)==0)
{
    swap(arr2);
    display(arr2);
}
else
{
	cout<<"\nThe Final Array is: \n";
	display(arr2);
}

//swap#1
if (row+1<3)
{	
int temp=arr[row+1][column];
arr2[row+1][column]=arr[row][column];
arr2[row][column]=temp;
if (check(arr2)==0)
{
    swap(arr2);
    display(arr2);
}
else
{
	cout<<"The Final Array is: \n";
	display(arr2);
}
	for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
      	arr2[i][j]=arr[i][j];
   }
}

}

// swap#2
if (row-1>0)
{
int temp=arr[row-1][column];
arr2[row-1][column]=arr[row][column];
arr2[row][column]=temp;
if (check(arr2)==0)
{
    swap(arr2);
    display(arr2);
}
else
{
	cout<<"The Final Array is: \n";
	display(arr2);
}
	for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
      	arr2[i][j]=arr[i][j];
   }
}
}

//swap#3
if(column+1<3)
{
int temp=arr[row][column+1];
arr2[row][column+1]=arr[row][column];
arr2[row][column]=temp;
if (check(arr2)==0)
{
    swap(arr2);
    display(arr2);
}
else
{
	cout<<"The Final Array is: \n";
	display(arr2);
}
	for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
      	arr2[i][j]=arr[i][j];
   }
}
}

//swap#4
if(column-1>0)
{
int temp=arr[row][column-1];
arr2[row][column-1]=arr[row][column];
arr2[row][column]=temp;
if (check(arr2)==0)
{
    swap(arr2);
    display(arr2);
}
else
{
	cout<<"The Final Array is: \n";
	display(arr2);
}
}

}
int main()
{
    //display function
	display(final);
    cout<<"\n\nThis is the final state that the game must be in.\n";
    cout<<"Please input an initial state for the computer to solve (-1 represents the blank index)\n";
    int user[3][3];
    input(user);    
}
