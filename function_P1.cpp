#include<iostream.h>
#include<conio.h>
class shape
{
public:
inline void area(int i)
{
cout<<"\n\t Area of square : "<<(i* i);
}
void area(double,double);
void area(int,int);
};
void shape :: area(double r,double pi=3.14)
{
cout<<"\n\t Area of circle : "<<(pi*r*r) ;
}
void shape :: area(int l, int b)
{
cout<<"\n\t Area of rectangle : "<<(l*b);
}
void main ( )
{
shape s;
int side,length,breadth;
double radius;
clrscr();
cout<<"\n\tFUNCTION OVERLOADING WITH DEFAULT ARGUMENTS AND INLINE FUNCTION";
cout<<"\n\t---------------------------------------------------------------";
cout<<"\n\nArea of Square";
cout<<"\n-----------------";
cout<<"\nEnter the side :";
cin>>side ;
s.area(side);
cout<<"\n\nArea of Circle";
cout<<"\n---------------";
cout<<"\nEnter the radius : ";
cin>>radius;
s.area(radius);
cout<<"\n\nArea of Rectangle";
cout<<"\n-------------------";
cout<<"\nEnter the length  : ";
cin>>length ;
cout<<"\nEnter the breadth : " ;
cin>>breadth ;
s.area(length,breadth);
getch( );
}
