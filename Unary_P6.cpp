#include<iostream.h>
#include<conio.h>
class sign
{
    int x,y,z;
    public:
	void get();
	void display();
	void operator-();
};
void sign::get()
{
   cout<<"\n\nEnter the X value :";
   cin>>x;
   cout<<"\nEnter the Y value :";
   cin>>y;
   cout<<"\nEnter the Z value :";
   cin>>z;
}
void sign::display()
{
   cout<<"\nX= "<<x;
   cout<<"\nY= "<<y;
   cout<<"\nZ= "<<z;
}
void sign::operator-()
{
   x=-x;
   y=-y;
   z=-z;
}
void main()
{
   int a,b,c;
   clrscr();
   cout<<"\t\tUNARY OPERATOR OVERLOADING";
   cout<<"\n\t\t-------------------------";
   sign s;
   s.get();
   cout<<"\n\nBefore Negation:";
   cout<<"\n------------------";
   s.display();
   -s;
   cout<<"\n\nAfter Negation:";
   cout<<"\n------------------";
   s.display();
   getch();
}