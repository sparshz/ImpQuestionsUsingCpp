#include<iostream> 
using namespace std;
char stack[50];
int top=-1;
void push(char p)
{
   stack[++top]=p;
}
char pop()
{
   if(top==-1)
   return -1;
   else return
stack[top--];
} 
int pr (char p)
{ 
   if(p=='^')
return 3;
if(p=='/' || p=='*')
return 2;
if(p=='+' || p=='-')
return 1;
return -1;
}
int main()
{ 
   char exp[100];
   char *a,p; 
cout<<"Enter the expression:"<<endl; 
cin>>exp;
a=exp;
while(*a!='\0')
{ 
   if(isalnum(*a))
{ 
   cout<<*a; 
}else
if(*a=='(')
{ 
   push(*a);
}else
if(*a==')')
{ 
   while((p=pop()) != '(')
cout<<p;
}
else
{ 
   while(pr(stack[top])>=pr(*a))
cout<<pop();
push(*a);
} 
a++;
} 
while(top!=-1)
{
   cout<<pop();
} 
return 0;
}
