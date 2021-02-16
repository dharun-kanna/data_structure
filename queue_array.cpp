#include<iostream>
#define N 50
using namespace std;

int q[N];
int f=0,r=0;


bool isempty()
{
 if(f==0 && r==0)
   return true;
 else
    return false;
}

bool isfull()
{
 if(r==N-1)
    return true;
 else
    return false;
}

void enqueue()
{
 if(isfull())
    {
     cout<<"The queue is full";
     return;
    }
 cout<<"Enter element : ";
 cin>>q[r];
 r++;
 return;
}

void dequeue()
{
 if(isempty())
 {
    cout<<"The queue is empty ";
    return;
 }

 cout<<q[f]<< " is dequeued\n";
 for(int i=0;i<=r;i++)
 {
     q[i]=q[i+1];
 }
 r--;
}

void display()
{
 cout<<"Elements in queue : ";
 for(int i=0 ; i<r ; i++)
 {
   cout<<q[i]<<" ";
 }
 return;
}

int main()
{
 int choice;
 cout<<"1.Enqueue\n2.Dequeue\n3.Display\n";
 while(1)
 {
  cout<<"\nYour choice : ";
  cin>>choice;
  switch(choice)
  {
   case 1:
     enqueue(); break;
   case 2:
    dequeue(); break;
   case 3:
     display(); break;
   default :
    cout<<"Enter a valid option !!\n"; break;
 }
}
 return 0;
}
