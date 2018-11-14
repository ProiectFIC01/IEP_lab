#include<iostream>
#include<cstring>

using namespace std;

class Uncopyable
{

	protected:
		Uncopyable(){};
		~Uncopyable(){};

	private:
		Uncopyable(const Uncopyable&);
		Uncopyable& operator=(const Uncopyable&);
};


class Car:private Uncopyable
{
	 
	
	public:
	 	Car(char name[20], int hp); //constructor
		Car(const Car& aux); //copy construtor
		~Car();
		Car& operator=(const Car& aux);
		char theName[20]=" ";
		int power=0;
		Car& tempCar(void);

};
Car::Car(char name[20], int hp)
{
	strcpy(theName,name);
	power = hp;

};
Car* tempCar()
{
	char nume[20]="E46";
	static Car * bmw = new Car(nume,50);
	return bmw;

};

int main()
{
	char nume[20]="LOGAN";
	Car *aux =new Car(nume,67);
	aux=tempCar();
	Car * masina = new Car(nume,150);
	cout<<masina->theName<<endl;
	cout<<aux->theName<<endl;

return 0;
}