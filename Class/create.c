#include<stdio.h>
#include<conio.h>
#include<process.h>
void create(int[100],int*);
void insert(int[100],int*);
void delete(int[100],int*);
void update(int[100],int*);
void display(int[100],int*);
void main(){
	int a[100],b[100],m,nel,pos,i;
	int n;
	int choice;
	char ch;
	
	do{
		printf("************************************************************** \n");
		printf("\n Menu Driven program for lists \n");
		printf("\n 1 for Create\n 2 for Insert\n 3 for Delete\n 4 for Update\n 8 for Display\n");
		printf("************************************************************** \n");
		printf("\n Enter your choice \t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the number of elements of first list:\n");
				scanf("%d",&n);
				create(a,&n);
				break;
			case 2:		
				insert(a,&n);
				break;
			case 3:		
				delete(a,&n);
				break;
			case 4:		
				update(a,&n);
				break;
			case 5:		
				display(a,&n);
				break;
				default:
					printf("Enter the correct choice: \n");
				}
			printf("\n Do you want to enter another choice yes or no(y,n):\t");
			scanf("%s",&ch);
	}while(ch=='y');
getch();
}
void create(int a[100],int*n){
int i;
printf("Enter %d elements: \n",*n);
for(i=0;i<*n;i++)
		{
		scanf("%d",&a[i]);
	}
}
void insert(int a[100],int*n)
{
	int pos,nel,i;
	printf("Enter the position at which you want to insert new elements: \t");
	scanf("%d",&pos);
	printf("Enter the new element:\n");
	scanf("%d",&nel);
	for (i=*n-1;i>=pos;i--)
	       {
		a[i+1]=a[i];
	}
	a[pos]=nel;
	*n=*n+1;
}
void display(int a[100],int*n){
	int i;
	printf("The entered elements are: \n");
	for(i=0;i<=*n;i++){
		{
			printf("%d",a[i]);
		}
		printf("\t");
	}
}
void delete(int a[100],int *n){
	int pos ,i;
	printf("Enter the position you want to delete: \t");
	scanf("%d",&pos);
	for(i=pos;i<*n;i++){
		a[i]=a[i+1];
	}
	*n=*n-1;
}
void update(int a[100],int *n){
	int pos,num;
	printf("Enter the position of the number at whch you want to update: \n");
	scanf("%d",&pos);
	printf("Enter the number you want to update: \n");
	scanf("%d",&num);
	a[pos]=num;
	}

