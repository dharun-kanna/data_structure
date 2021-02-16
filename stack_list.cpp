#include<iostream>
using namespace std;

void push();
void pop();
void top_element();
void display();

//defining class stack for nodes in list
class stack
{
 public:
 int num;
 stack *next;
}*head=NULL,*top=NULL;

//inserting element to stack
void push()
{
  if(head == NULL)
  {
   stack *node = new stack();
   head = node;
   top = node;
   node->next = NULL;
   cout<<"Enter element to insert : ";
   cin>>node->num;
   cout<<node->num<<" is pushed into stack ";
  }
  else
  {
   stack *node = new stack();
   stack *ptr = head;
   cout<<"Enter element to insert : ";
   cin>>node->num;
   cout<<node->num<<" is pushed into stack \n";
   while(ptr->next!=NULL)
   {
    ptr = ptr->next;
   }
   ptr->next = node;
   top = node;
   node->next = NULL;
  }

}


void top_element()
{
 cout<<"The top element in the stack is "<<top->num<<endl;
 return ;
}


void display()
{
 stack *ptr = head;
 cout<<"The elements in the stack : ";
 while(ptr->next != NULL)
 {
  cout<<ptr->num<<" ";
  ptr = ptr->next;
 }
 cout<<ptr->num<<endl;
 return;
}


void pop()
{
 stack *ptr = head;
 stack *temp;
 while(ptr->next!=NULL)
 {
   temp = ptr;
   ptr=ptr->next;
 }
 cout<<endl<<ptr->num<<" is popped ";
 temp->next = NULL;
 free(ptr);
 return;

}




int main()
{
 int ch;
 cout<<"1.Push\n2.Pop\n3.Top\n4.Display\n5.Exit\n";
 while(1)
 {
  cout<<"\nYour choice : ";
  cin>>ch;
  switch(ch)
  {
   case 1:
     push(); break;
   case 2:
    pop(); break;
   case 3:
     top_element(); break;
   case 4:
    display(); break;
   case 5:
     exit(1); break;
   default :
    cout<<"Enter a valid option !!\n"; break;
  }
 }
 return 0;
}
