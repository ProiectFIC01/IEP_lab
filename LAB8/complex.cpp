#include <iostream>
 using namespace std;

const int SIZE = 3;

class Complex
{
	
	public:
		float re, im;
		Complex(float real, float img);
		Complex operator+(Complex a);
		Complex operator-(Complex a);
};


Complex::Complex(float real, float img)
{
	re=real;
	im=img;

};

Complex Complex::operator+(Complex a)
{
	Complex aux(0,0);

	aux.re=a.re+re;
	aux.im=a.im+im;
		
	return aux;
};

Complex Complex::operator-(Complex a)
{
	Complex aux(0,0);

	aux.re=a.re-re;
	aux.im=a.im-im;
		
	return aux;
};



class Vector
{
	int array[SIZE];
	
	public:
		Vector(){
			register int i;
			for(i=0;i<SIZE;i++) array[i]=i;
		}
		int operator[](int i);

};

int Vector::operator[](int i)
{
	if(i<0||i>SIZE-1){
		cout<<"\nIndex "<<i<<" out of range"; 
		exit(1);
		}

	return array[i];
}


int main()
{
	Vector v1;
	cout<< v1[2]<<"\n";
	//cout<< v1[5]<<"\n";
	

	Complex c1(2,3); 
	Complex c2(3,6);

	Complex c3(0,0);
		c3 = c1 + c2;

	cout<<c3.re<<" " <<c3.im<<"i";


}