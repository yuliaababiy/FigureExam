#include "Triangle.h"
#include "Figure.h"

template <typename T>
Triangle<T> :: Triangle(T area, string type, int perimeter, string color, int sideA, int sideB, int sideC)
	: Figure<T>(area, type, perimeter, color), sideA(sideA), sideB(sideB), sideC(sideC){}

template <typename T>
void Triangle<T> ::displayIntoFile(ostream& out)
{
	out << "Area: " << this-> area << " ype: " << this->type << " Perimetr: " << this->perimeter << " Color: " << this->color 
		<< " SideA: " << sideA << " SideB: " << sideB << " SideC: " << sideC << endl;
}

template <typename T>
void Triangle<T> ::display()
{
	cout << "Area: " << this->area << " Type: " << this->type << " Perimetr: " << this->perimeter << " Color: " << this->color
		<< " SideA: "<<  sideA << " SideB: " << sideB << " SideC: " << sideC << endl;
}

template <typename T>
void Triangle<T> ::saveWithSpaces(ostream& out)
{
	out << "Triangle" << this->area << " " << this->type << " " << this->perimeter << " " << this->color
		<< " "<<  sideA << " " << sideB << " " << sideC << endl;
}

template <typename T>
double Triangle<T> ::areaGerone()
{
	T s = (sideA + sideB + sideC) / 2.0;
	//double gerone = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
	//cout << "Gerone: "gerone;
	return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}

template <typename T>
void Triangle<T> ::changeSide(int newSideA, int newSideB, int newSideC)
{
	sideA += newSideA;
	sideB += newSideB;
	sideC += newSideC;
}
 
template class Triangle<int>;
template class Triangle<double>;
