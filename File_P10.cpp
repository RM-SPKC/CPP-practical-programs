#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
ofstream of("chem.txt");
int id,n,qty,price,p,total=0;
char name[10],pname[10];
cout<<"\n\t\tCHEMICAL SHOP";
cout<<"\n\t\t-------------";
cout<<"\nEnter Number of Customer:";
cin>>n;
for(int i=1;i<=n;i++)
{
cout<<"\nCUSTOMER NUMBER"<<i;
cout<<"\nEnter Customer Name:";
cin>>name;
cout<<"\nEnter Product ID:";
cin>>id;
cout<<"\nEnter Chemical Name:";
cin>>pname;
cout<<"\nEnter Unit Price:";
cin>>price;
cout<<"\nEnter Product Quantity:";
cin>>qty;
p=price*qty;
total=total+p;
of<<name<<"\t\t"<<id<<"\t"<<pname<<"\t\t"<<price<<"\t"<<qty<<"\t\t"<<p<<"\n";
}
cout<<"\n------	FILE UPDATED ------";
cout<<"\n";
of.close();
cout<<"\n\t\t\tFERTILIZER BILL";
cout<<"\n-------------------------------------------------------------------------------";
ifstream fi("chem.txt");
cout<<"\n\nName"<<"\t"<<"PID"<<"\t"<<"ProductName"<<"\t"<<"UnitPrice"<<"\t"<<"Quantity"<<"\t"<<"Amount"<<"\n";
cout<<"-------------------------------------------------------------------------------\n";
for(int j=1;j<=n;j++)
{
fi>>name>>id>>pname>>price>>qty>>p;
cout<<name<<"\t"<<id<<"\t"<<pname<<"\t\t"<<price<<"\t"<<qty<<"\t"<<p<<"\n";
}
cout<<"\n-------------------------------------------------------------------------------";
cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal:"<<total;
cout<<"\n-------------------------------------------------------------------------------";
fi.close();
getch();
}
