#include <iostream>
#include <conio.h>
using namespace std;

class Bicycle //Deklarasi kelas
{
    public :    Bicycle (int, int, int);
                void ChangeRotation (int);
                void ChangeGear (int);
                void Brake ();
                void AppearInfo ();
    private :   int speed;
                int rotation;
                int gear;
};

Bicycle::Bicycle (int s, int r, int g)
{
    speed = s;
    rotation = r;
    gear = g;
}

void Bicycle::ChangeRotation (int r)
{
    rotation = r;
}

void Bicycle::ChangeGear (int g)
{
    gear = g;
}

void Bicycle::Brake()
{
	cout<< "Speed n Rotation reduce.. ";
}

void Bicycle::AppearInfo()
{
	cout<< "Gear : " << gear << endl << "Speed : " << speed << endl << "Rotation : " << rotation << endl;
}

int main() //Body
{
	Bicycle bicycle_1(10,60,3), bicycle_2(4,12,1),bicycle_3(35,80,5);

	cout << "Bicycle 1" << endl;
	bicycle_1.AppearInfo();
	cout << "Bicycle 2" << endl;
	bicycle_2.AppearInfo();
	cout << "Bicycle 3" << endl;
	bicycle_3.AppearInfo();
	
	getch();
	return 0;
}
