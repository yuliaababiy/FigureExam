#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include "Figure.h"
using namespace std;

template <typename T>
class Triangle : public Figure<T>{
protected:
	int sideA;
	int sideB;
	int sideC;
	
public:
	 Triangle(T area, string type, int perimetr, string color, int sideA, int sideB, int sideC);
	 void displayIntoFile(ostream& out) override;
     void display() override;
	 void saveWithSpaces(ostream& out) override;
	 int getSideA();
	 int getSideB();
	 int getSideC();
	 double areaGerone();
	 void changeSide(int newSideA, int newSideB, int newSideC);
};
#endif 
