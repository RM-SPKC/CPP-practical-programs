#include<iostream.h>
#include<conio.h>
class factorial
{
 public:
   int n,f;
   void in();
   void calculate();
   void out();
};
void factorial::in()
{
 cout<<"\n\nEnter a number :";
 cin>>n;
}
void factorial::calculate()
{
f=1;
for(int i=1;i<=n;i++)
 f=f*i;
}
void factorial::out()
{
 cout<<"\n\n\t\tFactorial of given number : "<<f;  
}
void main()
{
  factorial x;
  clrscr();
  cout<<"\n\t\t\tClass and Object";
  cout<<"\n\t\t\t----------------";
  cout<<"\n\nFactorial of a number";
  cout<<"\n-----------------------";
  x.in();
  x.calculate();
  x.out();
  getch();
}
