#include<iostream.h>
#include<conio.h>
class pass
{
public:
int a;
void get()
{
cin>>a;
}
void multi(pass o,pass p)
{
int c=o.a*p.a;
cout<<"\n\n"<<o.a<<" * "<<p.a<<" = "<<c;
}
};

void main()
{
pass f,s,r;
clrscr();
cout<<"\n\t**PASSING  OBJECTS TO FUNCTION**";
cout<<"\n\t---------------------------------";
cout<<"\n\nEnter the first object value: ";
f.get();
cout<<"\nEnter the second object value: ";
s.get();
cout<<"\n\nMultiplication of values in two objects";
cout<<"\n-----------------------------------------";
r.multi(f,s);
getch();
}
