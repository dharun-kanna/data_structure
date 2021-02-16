#include<iostream>
#define SIZE 50
using namespace std;

int stack[SIZE];
int top = -1;

void push()
{
 int ele;
 cout<<"Enter element to push : ";
 cin>>ele;
 if(top == SIZE-1)
    cout<<"Stack is full\n";
 else
    stack[++top] = ele;
}

void pop()
{
 if(top == -1)
 {
  cout<<"Stack is empty\n";
  return;
 }
 else
 {
  cout<<stack[top]<<" is popped ";
  top--;
  return;
 }
}

void display()
{
 cout<<"Elements in stack : ";
 for(int i=0;i<=top;i++)
 {
  cout<<stack[i]<<" ";
 }
 return;
}


void show_top()
{
 cout<<"The top element is "<<stack[top]<<endl;
 return;
}

int main()
{
 int choice;
 cout<<"1.Push\n2.Pop\n3.Show top\n4.Display\n5.Exit\n";
 while(1)
 {
  cout<<"your choice :";
  cin>>choice;
  switch(choice)
  {
   case 1:
       push();
       break;
   case 2:
    pop();
    break;
   case 3:
    show_top();
    break;
   case 4:
    display();
    break;
   case 5:
    exit(1); break;
   default:
    cout<<"Enter correct choice"; break;
  }
 }
 return 0;
}
