#include "Figure.h"
using namespace std;

template<typename T>
Figure<T>::Figure(T area, string type, int perimetr, string color) 
	: area(area), type(type), perimetr(perimetr), color(color){}

template <typename T>
void Figure<T> ::displayIntoFile(ostream& out)
{
	out << "Area: " << area << "Type: " << "Perimetr: " << perimetr << "Color: " << color << endl;
}

template <typename T>
void Figure<T> ::display()
{
	cout << "Area: " << area << "Type: " << "Perimetr: " << perimetr << "Color: " << color << endl;
}

template <typename T>
void Figure<T> ::display()
{
	out <<"Figure " << area << " " << type << " " << perimetr << " " << color << endl;
}

template <typename T>
void Figure<T> :: densityFigure()
{
	return getArea() / getPerimeter()
}

template <typename T>
void Figure<T> ::addArea(int newArea)
{
	area += newArea;
}
template class Figure<int>;
template class Figure<double>;


