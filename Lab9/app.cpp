#include <iostream>

using namespace std;



class Widget
{
	public:
		float state;
		Widget(float st);
		Widget operator+=(Widget a);	
		Widget operator=( Widget a);
		void swap(Widget& rhs);
		
};

Widget::Widget(float st)
{
	state = st;
};

Widget Widget::operator+=(Widget a)
{		
	state+=a.state;
		
	return *this;
};

/*Widget Widget::operator=(Widget a)
{		
	state=a.state;
		
	return *this;
};*/

void Widget::swap(Widget& rhs)
{
	Widget aux(0);
	aux.state = state;
	state=rhs.state;
	rhs.state=aux.state;	
}

Widget Widget::operator=(Widget a)
{
	swap(a);
	return *this;
};

int main()
{
	
	Widget w1(20);
	Widget w2(50);
	Widget w3(0);

	//w1.swap(w2);
	//cout<<"swap w2="  << w2.state<<endl;
	//cout<<"swap w1="  << w1.state<<endl;
    	w1 += w2;
	cout<<"1. +="  << w1.state<<endl;
 	w1 = w2;
	cout<<"2. = " << w1.state<<endl;


return 0;
}