#include<iostream.h>
#include<conio.h>
class personal
{
public:
int regno;
char name[50];
void stud()
{
cout<<"\n Enter the student ID   : ";
cin>>regno;
cout<<"\n Enter the student name : ";
cin>>name;
}
};
class mark:public personal
{
public:
int m1,m2,m3;
void test()
{
cout<<"\n Enter C++ Mark       : ";
cin>>m1;
cout<<"\n Enter PHP Mark       : ";
cin>>m2;
cout<<"\n Enter HTML Mark      : ";
cin>>m3;
}
};
class sports
{
public:
float m;
void extra()
{
cout<<"\n Enter the mark for extra curricular activity  : ";
cin>>m;
}
};
class detail:public mark,public sports
{
public:
void display()
{
cout<<"\n\t Student Mark Details";
cout<<"\n\t --------------------\n";
cout<<"\n Student ID               : "<<regno<<"\n";
cout<<"\n Student Name             : "<<name<<"\n";
cout<<"\n C++  mark                : "<<m1<<"\n";
cout<<"\n PHP  mark                : "<<m2<<"\n";
cout<<"\n HTML mark                : "<<m3<<"\n";
cout<<"\n Extra curricular Activity: "<<m<<"\n";
cout<<"\n Total                    : "<<(m1+m2+m3+m)<<"\n";
}
};
void main()
{
detail obj;
clrscr();
cout<<"\n\t\t\t HYBRID INHERITANCE\n";
cout<<"\t\t\t--------------------\n";
obj.stud();
obj.test();
obj.extra();
obj.display();
getch();
}




