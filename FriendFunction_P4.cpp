#include<iostream.h>
#include<conio.h>
class second;
class first
{
int x;
public:
void get()
{
cout<<"\nEnter the first object value: ";
cin>>x;
}
friend void large (first,second);
};
class second
{
int y;
public:
void get()
{
cout<<"\nEnter the second object value :";
cin>>y;
}
friend void large (first,second);
};
void large(first  m,second  n)
{
int x,y;
if(m.x<n.y)
{
cout<<"\n\nMinimum number is     :"<<m.x;
}
else
{
cout<<"\n\nMinimum number is     :"<<n.y;
}
};
void main()
{
first f;
second s;
clrscr();
cout<<"\n\t**FRIEND FUNCTION**";
cout<<"\n\t ------------------";
cout<<"\n\n *Minimum of  two objects*";
cout<<"\n----------------------------";
f.get();
s.get();
large(f,s);
getch();
}
