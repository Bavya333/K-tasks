#include<iostream>
#include<cstring>
using namespace std;
char d[20];
struct node
{
char a;
node *next,*pre;
};
class stack
{
struct node *r;
char R[20];
public:
	stack()
	{
		r=NULL;
		for(int i=0;i<20;i++)
		{
			R[i]='\0';
		}
	}
	int isempty();
	int isfull();
	char push(char c);
	char reverse();
	char ispalin();

};
char stack::push(char c)
{
	if(r==NULL)
	{
		struct node *t=new node;
		t->pre='\0';
		t->a=c;
		t->next='\0';
		r=t;
	}
	else
	{
		struct node *t=new node;
		r->next=t;
		t->pre=r;
		t->a=c;
		r=t;
		r->next=NULL;
	}
}
char stack::reverse()
{	
	int i=0;
	while(r!='\0')
	{
		R[i]=r->a;
		r=r->pre;
		i++;
	}	
			

}
char stack::ispalin()
{
	reverse();
	if(strcmp(R,d))
		cout<<"It is not a palindrome.";
	else
		cout<<"It is a palindrome.";

	
}
int main()
{
	int n;
	stack s;
	char e;
	cout<<"\n"<<"Enter the length:";
	cin>>n;
	cout<<"\n"<<"Enter the string:";
	for(int i=0;i<n;i++)
	{	
		cin>>e;
		d[i]=e;
		s.push(e);
	}
	s.ispalin();
	return 0;
}
