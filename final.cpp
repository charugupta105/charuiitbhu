#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	char data1[50];
	char data2[2];
	struct node *next;
};
struct node *head, *temp;


int main()
{
	head=0;	
	temp=0;
	int n,m,i=0;
	char x[50];
	int c;
	printf("enter the no. of minutes");
	scanf("%d",&n);
	printf("enter the no. of req operation");
	scanf("%d",&m);
	for(i=0;i<=m;i++)
	{
		printf("enter the choice\n1.add \n2.delete\n3.display");
		scanf("%d",&c);
		if(c==1){
		printf("enter the name of country");
		fgets(x,50,stdin);
		add(x);
		}
		else if(c==2)
		del();
		else if(c==3)
		{
			display();
		}
		
	}
	while(i<k)
	{
		printf(" %s\n",display1[i]);
		i++;
	}
return 0;
}

void add(char s[50])
{
	char country[20], penny[2];
	int i=4,j=0;
	while(s[i]!=' ')
	{
	
		country[j++]=s[i];
	    i++;
	    
	}
	country[j++]=' ';
	country[j++]='\0';
	i++; j=0;
	while(s[i]!='\0')
	{
		penny[j++]=s[i++];
	
	}
	struct node *node1;
	node1=(struct node*)malloc(sizeof(struct node));

	if(head==0){
	temp=node1;
	head=node1;
	}
	else
	{
	temp->next=node1;
	temp=node1;
	}
	strcpy(node1->data1,country);
	strcpy(node1->data2,penny);
	node1->next=0;
	
}
void del()
{
	struct node *temp2=head;
	struct node *new=head->next;	
		while(new!=0)
		{
			if(new->data2[0]=='P' ||new->data2[0]=='p')
			{
			new=new->next;
			if(new==0)
			temp=temp2;
			temp2->next=temp2->next->next;
			}
			else
			{
			new=new->next;
			temp2=temp2->next;
			}	
		}
				  if(head->data2[0]=='P' || head->data2[0]=='p')
				  head=head->next;
				
		
}


void display()
{
	int k=0;
	char display1[100][100];
	struct node *temp1 =head;
			while(temp1!=0)
			{
				strcat(display1[k],temp1->data1);
				temp1=temp1->next;
				k++;
			}
	return k;
			
}
