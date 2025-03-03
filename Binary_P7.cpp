#include<iostream.h>
#include<conio.h>
class binary
{
public:
int r, i; 
void get( );
binary operator +(binary);
void display( );
};
void binary::get( )
{
cout<<"\n Enter the Real Part: ";
cin>>r;
cout<<"\n Enter the Imaginary Part: ";
cin>>i;
}
binary binary::operator +(binary d)
{
binary c;
c.r=r+d.r;
c.i=i+d.i;
return c;
}
void binary::display( )
{
cout<<"\t"<<r<<"+"<<i<<"i";
}
void main( )
{
binary b1, b2, b3;
clrscr( );
cout<<"\n\t\t BINARY OPERATOR OVERLOADING";
cout<<"\n\t\t ***************************";
cout<<"\n\nEnter the first complex number ";
cout<<"\n-------------------------------";
b1.get( );
cout<<"\n\nEnter the second complex number ";
cout<<"\n--------------------------------";
b2.get( );
cout<<"\n\nSum of two complex numbers ";
cout<<"\n--------------------------------";
b3=b1+b2;
cout<<"\n\n First complex number   : ";
b1.display( );
cout<<"\n Second complex number  : ";
b2.display( );
cout<<"\n\t\t\t----------------";
cout<<"\n Sum                    : ";
b3.display( );
cout<<"\n\t\t\t----------------";
getch( );
}