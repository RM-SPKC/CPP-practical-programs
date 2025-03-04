#include<iostream.h>
#include<conio.h>
class book
{
public:
int bookid;
char bname[30];
float price;
void input( );
};
void book::input( )
{
cout<<"\n Enter the Book ID: ";
cin>>bookid;
cout<<"\n Enter the Book Name: ";
cin.ignore();
cin.getline(bname,30);
cout<<"\n Enter the Price: ";
cin>>price;
}
class purchase:public book
{
public:
int quantity;
void inputquantity( );
};
void purchase::inputquantity( )
{
cout<<"\n Enter the Quantity Purchased:";
cin>>quantity;
}
class detail:public purchase
{
public:
void display( );
};
void detail::display( )
{
cout<<"\n\t\t BOOK DETAILS";
cout<<"\n\t\t ------------";
cout<<"\n\n Book ID        :"<<bookid;
cout<<"\n\n Book Name      :"<<bname;
cout<<"\n\n Unit Price     :"<<price;
cout<<"\n\n Quantity       :"<<quantity;
cout<<"\n\n Total Amount   :"<<(price*quantity);
}
void main( )
{
detail ob;
clrscr( );
cout<<"\n\t\tBOOK DETAILS USING MULTILEVEL INHERITANCE";
cout<<"\n\t\t-----------------------------------------";
ob.input( );
ob.inputquantity( );
ob.display( );
getch( );
}
