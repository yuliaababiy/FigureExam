#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
using namespace std;

template <typename>
class Triangle : public Figure<T>
{
protected:
	int sideA;
	int sideB;
	int sideC;
	
public:
	Triangle<T>(T area, string type, int perimetr, string color, int sideA, int sideB, int sideC);
	 void displayIntoFile(ostream& out) override;
     void display() override;
	 void saveWithSpaces(ostream& out) override;
	 int getSideA();
	 int getSideB();
	 int getSideC();
	 void areaGerone();
	 void changeSide(int newSideA, int newSideB, int newSideC);
	
};
#endif 
