#include<iostream.h>
#include<conio.h>
class cube
{
 public:
    int side;
 void get()
 {
  cout<<"\n\nEnter the side:";
  cin>>side;
 }
};
class area:public cube
{
  public:
    void showarea()
    { 
      get();
      cout<<"\n\n\t\tSurface Area of cube : "<<(6*side*side);
    }
};
class volume:public cube
{
  public:
    void showvolume()
    {
      get();
      cout<<"\n\n\t\tVolume of cube : "<<(side*side*side);
    }
};
void main()
{
clrscr();
cout<<"\n\t\tHierarchical Inheritance";
cout<<"\n\t\t-------------------------";
cout<<"\nTo Find the surface area of cube:";
cout<<"\n---------------------------------";
area a;
a.showarea();
cout<<"\n\nTo Find the volume of cube:";
cout<<"\n---------------------------";
volume v;
v.showvolume();
getch();
}


