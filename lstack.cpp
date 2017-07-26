#include<iostream>
using namespace std;
struct node
{
char a;
node *next,*pre;
};
class stack
{
struct node *r;
public:
	stack()
	{
		r=NULL;
	}
	char push();
	char pop();
	char peep();
	char display();

};
/*int stack::isempty()
{
	if(top==NULL)
		return 1;
	else
		return 0;
}
int stack::isfull()
{	
	if(r==NULL)
		return 1;
	else
		return 0;
}*/
char stack::push()
{
	if(r==NULL)
	{
		struct node *t=new node;
		t->pre='\0';
		cin>>t->a;
		t->next='\0';
		r=t;
	}
	else
	{
		struct node *t=new node;
		t->pre=r;
		cin>>t->a;
		r=t;
		r->next=NULL;
	}
}
char stack::pop()
{
	r=r->pre;
	
}
char stack::display()
{
	cout<<"\n"<<"The stack is:";
	struct node *t=new node;
	t=r;
	while(t!=NULL)
	{
		cout<<t->a<<"\n";
		t=t->pre;
	}

	
}
int main()
{
	int c;
	stack s;
	cout<<"\n"<<"1.Push 2.Pop 3.Display 0.exit";
	cout<<"\n"<<"Enter ur choice";
	cin>>c;
	while(c)
	{
		switch(c)
		{
			case 1:cout<<"\n"<<"Enter a char";
				s.push();	
				break;
			case 2:s.pop();
				break;
			case 3:s.display();
				break;
			default:cout<<"\n"<<"Invalid choice";		
		}
		cout<<"\n"<<"Enter ur choice";
		cin>>c;
	}
	return 0;
}
