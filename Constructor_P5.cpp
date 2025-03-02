#include<iostream.h>
#include<conio.h>
#include<string.h>
class cons
{
public:
    int base,height;
    cons(int x,int y)
    {
    cout<<"\n\n\nCreate and Initialize an Object";
    cout<<"\n-------------------------------";
    base=x;
    height=y;
    }
    void print()
    {
     cout<<"\n\nBase   : "<<base;
     cout<<"\n\nHeight : "<<height;
	cout << "\n\n\t\tArea of triangle : "<<(0.5*base*height);
    }
    ~cons()
    {
	cout << "\n\n\n*** Object destroyed successfully ***";
    }
};
void main()
{
    clrscr();
    int b,h;
    cout << "\n\t\t\t**Constructor and Destructor**";
    cout << "\n\t\t\t------------------------------";
    cout << "\n\nArea of triangle";
    cout << "\n\-----------------";
    cout <<"\n\n Enter the Base:";
    cin >> b;
    cout <<"\n Enter the height :";
    cin >> h;
    cons obj(b,h);
    obj.print();
    getch();
}