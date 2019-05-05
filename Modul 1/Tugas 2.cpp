#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

class Time
{
	public 	: 	Time();
				void setTime (int, int, int);
				void printUniversal();
				void printStandard();
	private :	int hour;
				int minute;
				int second;
};

Time::Time()
{
	hour = minute = second = 0;
}

void Time::setTime(int h, int m, int s)
{
	hour = (h >= 0 && h < 24) ? h : 0;
	minute =(m >= 0 && m < 60) ? m : 0;
	second =(s >= 0 && s < 60) ? s : 0;
}

void Time::printUniversal()
{
	cout<< setfill( '0' ) << setw( 2 ) << hour << ":" <<setw( 2 ) << minute 
	<< ":" <<setw( 2 ) << second;
}
void Time::printStandard()
{ 
	cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 ) << ":" 
	<< setfill( '0' ) << setw( 2 ) << minute << ":" <<setw( 2 ) << second 
	<< ( hour< 12 ? " AM" : " PM" );
}

int main() // Badan Program
{
	Time t;
	
	cout << "The initial universal time is "; t.printUniversal();
	cout << "\nThe initial standard time is "; t.printStandard();
	
	t.setTime (99, 27, 6);
	
	cout<< "\n\nUniversal time after setTime is "; t.printUniversal();
	cout<< "\nStandard time after setTime is "; t.printStandard();

	t.setTime( 99, 99, 99 );
	
	cout<< "\n\nAfter attempting invalid settings: " << "\nUniversal time: "; 
		
	t.printUniversal();
	cout<< "\nStandard time: ";
	
	t.printStandard();
	cout<< endl;
	
	getch();
	return 0;
}
