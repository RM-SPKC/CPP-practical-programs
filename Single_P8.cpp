#include<iostream.h>
#include<conio.h>
class first
{
public:
int a;
void get()
{
cout<<"\n\nEnter a value:";
cin>>a;
}
};
class second:public first
{
public:
void check()
{
if(a%2==0)
cout<<"\n\n"<<a<<" is an even number";
else
cout<<"\n\n"<<a<<" is an odd number";
}
};
void main()
{
clrscr();
second obj;
cout<<"\n\t\tSINGLE INHERITANCE";
cout<<"\n\t\t-------------------";
cout<<"\n\nTo check whether the given number is odd or even:";
cout<<"\n-------------------------------------------------";
obj.get();
obj.check();
getch();
}
