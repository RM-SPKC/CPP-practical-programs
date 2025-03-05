#include<iostream.h>
#include<conio.h>
class shape
{
public:
  virtual void getvolume()=0;
};
class cuboid:public shape
{
private:
  float length;
  float width;
  float height;
public:
cuboid(float l,float w,float h)
{
  length=l;
  width=w;
  height=h;
}
void getvolume()
{
  double volume= length*width*height;
  cout<<"\n\n\t\tVolume of cuboid     :"<<volume;
}
};
void main()
{
  float l,w,h;
  clrscr();
  cout<<"\n\t\t\tVIRTUAL FUNCTION\n";
  cout<<"\n\t\t\t----------------\n";
  cout<<"\nEnter the length of cuboid :";
  cin>>l;
  cout<<"\nEnter the width of cuboid  :";
  cin>>w;
  cout<<"\nEnter the height of cuboid :";
  cin>>h;
  cuboid c(l,w,h);
  c.getvolume();
  getch();
}