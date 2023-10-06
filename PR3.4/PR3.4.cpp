#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент	
	double y; // вхідний параметр
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((y*y-2*y*R+R<=-x*x-2*x*R) && y>=-R && -R<=x<=0 ||
		(y*y+2*y*R>=-x*x+2*x*R && y<=R && 0<x<=R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
