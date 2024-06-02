#include "Figure.h"
using namespace std;

template<typename T>
Figure<T>::Figure(T area, string type, int perimeter, string color)
	: area(area), type(type), perimeter(perimeter), color(color){}

template <typename T>
void Figure<T> ::displayIntoFile(ostream& out)
{
	out << "Area: " << area << " Type: " <<type<< " Perimetr: " << perimeter << " Color: " << color << endl;
}

template <typename T>
void Figure<T> ::display()
{
	cout << "Area: " << area << " Type: " << type<< " Perimetr: " << perimeter << " Color: " << color << endl;
}

template <typename T>
void Figure<T> ::saveWithSpaces(ostream& out)
{
	out <<"Figure " << area << " " << type << " " << perimeter << " " << color << endl;
}

template <typename T>
int Figure<T> ::getArea()
{
	return area;
}

template <typename T>
int Figure<T> ::getPerimeter()
{
	return perimeter;
}

template <typename T>
string Figure<T> ::getType()
{
	return type;
}

template <typename T>
double Figure<T> :: densityFigure()
{
	return area/ perimeter;
}

template <typename T>
void Figure<T> ::addArea(int newArea)
{
	area += newArea;
}

// add та set - void
template class Figure<int>;
template class Figure<double>;