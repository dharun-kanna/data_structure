#include<iostream>
#define N 50
using namespace std ;
int top = -1;
int stack[N];
//pushing element into the stack
void push()
{
 int n;
 cout<<"Enter element to push into stack : ";
 cin>>n;
 stack[++top] = n;
 cout<<stack[top]<<" is pushed into stack \n";
 return;
}

//deleting top most element in the stack
void pop()
{
 if(top!=-1)
 {
  cout<<stack[top--]<<" is popped \n";
 }
 else
 {
  cout<<"The stack is empty \n";
 }
 return;
}

//showing top element of the stack
void top_element()
{
 if(top!=-1)
 {
  cout<<"The element in the top of stack is "<<stack[top]<<endl;
 }
 else
 {
   cout<<"The stack is empty"<<endl;
 }

}

//displaying stack elements
void display()
{
 int i=0;
 cout<<"The elements in the stack : ";
 for(i=0;i<=top;i++)
 {
  cout<<stack[i]<<" ";
 }
 cout<<endl;
 return;
}


int main()
{
 int n;
 cout<<"1.Push\n2.Pop\n3.Top\n4.Display\n5.Exit\n";
 while(1)
 {
  cout<<"Your choice : ";
  cin>>n;
  switch(n)
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
    cout<<"Enter a valid option !!\n";break;
  }
 }
 return 0;
}
