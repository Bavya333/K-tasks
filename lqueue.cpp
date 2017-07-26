#include<iostream>
using namespace std;
struct node
{
char a;
node *next,*pre;
};
class queue
{
struct node *f,*r;
public:
	queue()
	{
		f=r=NULL;
	}
	char enqueue();
	char dequeue();
	char display();

};
char queue::enqueue()
{
	if(f=='\0')
	{
		struct node *t=new node;
		t->pre='\0';
		cin>>t->a;
		t->next='\0';
		f=r=t;
		
	}
	else
	{
		struct node *t=new node;
		r->next=t;
		t->pre=r;
		cin>>t->a;
		r=t;
		r->next=NULL;
	}
}
char queue::dequeue()
{
	f=f->next;
	
}
char queue::display()
{
	cout<<"\n"<<"The queue is:"<<"\n";
	struct node *t=new node;
	t=f;
	while(t!=NULL)
	{
		cout<<t->a<<"\n";
		t=t->next;
	}
	
}
int main()
{
	int c;
	queue q;
	cout<<"\n"<<"1.Enqueue 2.Dequeue 3.Display 0.exit";

	cout<<"\n"<<"Enter ur choice";
	cin>>c;
	while(c)
	{
		switch(c)
		{
			case 1:cout<<"\n"<<"Enter a char:";
				q.enqueue();	
				break;
			case 2:q.dequeue();
				break;
			case 3:q.display();
				break;
			default:cout<<"\n"<<"Invalid choice";		
		}
		cout<<"\n"<<"Enter ur choice";
		cin>>c;
	}
	return 0;
}
