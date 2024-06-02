#include "Triangle.h"
#include "Figure.h"

template <typename T>
Triangle<T> :: Triangle(T area, string type, int perimetr, string color, int sideA, int sideB, int sideC)
	: Figure<T>(area, type, perimeter, color), sideA(sideA), sideB(sideB), sideC(sideC){}

template <typename T>
void Triangle<T> ::displayIntoFile(ostream& out)
{
	out << "Area: " << this-> area << "Type: " << this->type << "Perimetr: " << this->perimetr << "Color: " << this->color 
		<< "SideA: "  this-> sideA << "SideB: " << this->sideB << "SideC: " << this->sideC << endl;
}

template <typename T>
void Triangle<T> ::display()
{
	cout << "Area: " << this->area << "Type: " << this->type << "Perimetr: " << this->perimetr << "Color: " << this->color
		<< "SideA: "  this->sideA << "SideB: " << this->sideB << "SideC: " << this->sideC << endl;
}

template <typename T>
void Triangle<T> ::saveWithSpaces(ostream& out)
{
	out << "Triangle" << this->area << " " << this->type << " " << this->perimetr << " " << this->color
		<< " "  this->sideA << " " << this->sideB << " " << this->sideC << endl;
}

template <typename T>
void  Triangle<T> ::areaGerone()
{
	T s = (sideA + sideB + sideC) / 2.0;
	return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));

}

template <typename T>
void Triangle<T> ::changeSide(int newSideA, int newSideB, int newSideC)
{
	sideA += newsideA;
	sideB += newsideB;
	sideC += newsideC;
}
 
template class Triangle<int>;
template class Triangle<double>;
