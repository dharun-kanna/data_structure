#include<iostream>
using namespace std;

class queue
{
 public:
     int data;
     queue *next;
}*rear=NULL,*front=NULL;

bool isempty()
{
 if(rear==NULL && front==NULL)
 {
  return true;
 }
 else
    return false;
}

void enqueue()
{
 queue *ptr = new queue();
 cout<<"Enter element to enqueue : ";
 cin>>ptr->data;
 ptr->next = NULL;
 if(isempty())
 {
  front = ptr;
  rear = ptr;
 }
 else
 {
  queue *temp = front;
  while(temp->next!=NULL)
  {
   temp = temp->next;
  }
  temp->next = ptr;
  rear = ptr;
 }
}

void dequeue()
{
 queue *temp = front;
 cout<<front->data<<" is dequeued";
 front = front->next;
 delete(temp);
 return;
}


void display()
{
 queue *temp = front;
 cout<<"QUEUE : ";
 while(temp->next!=NULL)
 {
  cout<<temp->data<<" ";
  temp = temp->next;
 }
 cout<<temp->data<<endl;
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
    dequeue();
    break;
   case 3:
    display();
     break;
   default :
    cout<<"Enter a valid option !!\n"; break;
  }
 }
}
