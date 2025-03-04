#include<iostream.h>
#include<conio.h>
class employee
{
 public:
    int eid;
    char name[30];
    char desig[30];
 void getemp()
 {
  cout<<"\n Enter the employee ID   :";
  cin>>eid;
  cout<<"\n Enter the employee name :";
  cin>>name;
  cout<<"\n Enter the designation   :";
  cin>>desig;
 }
};
class salary
{
 public:
    float bp;
    float pf;
    float np;
 void getsal()
 {
  cout<<"\n Enter the Basic Pay : ";
  cin>>bp;
  pf=bp*0.12;
  np=bp-pf;
  }
};
class detail:public employee,public salary
{
 public:
   void display()
   {
    cout<<"\n\nEmployee ID : "<<eid;
    cout<<"\nEmployee Name : "<<name;
    cout<<"\nDesignation   : "<<desig;
    cout<<"\nBasic Pay     : "<<bp;
    cout<<"\nProvident Fund: "<<pf;
    cout<<"\nNet Pay       : "<<np;
   }
};
void main()
{
 clrscr();
 cout<<"\n\t MULTIPLE INHERITANCE";
 cout<<"\n\t----------------------";
 cout<<"\n\nEmployee Detail:";
 cout<<"\n----------------";
 detail d;
 d.getemp(
 );
 d.getsal();
 d.display();
 getch();
}



