#include<iostream>
using namespace std;

class shape
{
		
	public:
		float a,b;
	
		virtual void getdata()=0;
		virtual void sarea()=0;
};

class triangle: public shape
{
	void getdata()
	{
		
		cout<<"Enter the Height and Base\n";
		cin>>a>>b;
	}
	
	void sarea()
	{
		cout<<"Area of Triangle: "<<0.5*a*b<<"squnit\n";
	}
	
};

class rectangle: public shape
{
	void getdata()
	{
		
		cout<<"Enter the Length and B\n";
		cin>>a>>b;
	}
	
	void sarea()
	{
		cout<<"Area of Rectangle: "<<a*b<<"squnit\n";
	}
	
};

class circle: public shape
{
	void getdata()
	{
		
		cout<<"Enter the Radius:\n";
		cin>>a;
	}
	
	void sarea()
	{
		cout<<"Area of Circle: "<<3.1415*a*a<<"squnit\n";
	}
	
};

int main()
{
	
	triangle tri;
	shape *stri=&tri;
	stri->getdata();
	stri->sarea();
	
	rectangle rec;
	shape *srec=&rec;
	srec->getdata();
	srec->sarea();
	
	circle cir;
	shape *scir=&cir;
	scir->getdata();
	scir->sarea();


	return 0;
}