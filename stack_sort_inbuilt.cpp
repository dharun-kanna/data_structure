#include<iostream>
#include<stack>
using namespace std;


stack<int> stk;
//function declaration
void insert(std::stack<int> , int );
void sort(std::stack<int> );


void sort(std::stack<int> s)
{
 if (!s.empty())
 {
    int x = s.top();s.pop();
    sort(s);
    insert(s, x);
 }
}

void insert(std::stack<int> s, int x)
{
 if (!s.empty())
 {
    int y = s.top();
    if (x < y)
  {
    s.pop();
    insert(s, x);
    s.push(y);
  }
 else
 {
    s.push(x);
 }
}
 else
  {
   s.push(x);
  }
 }


int main()
{
 int n;
 cout<<"Enter stack elements : ";
 for(int i =0 ;i<5;i++)
 {
  cin>>n;
  stk.push(n);
 }
 sort(stk);
 cout<<"The sorted stack : ";
 while(!stk.empty())
 {
  cout<<stk.top()<<" ";
  stk.pop();
 }
 return 0;
}
