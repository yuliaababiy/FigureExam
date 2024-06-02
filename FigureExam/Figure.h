#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>
using namespace std;

template <typename T>
class Figure
{
protected:
	T area;
	string type;
	int perimeter;
	string color;
public:
	Figure(T area, string type, int perimeter, string color);
	virtual void displayIntoFile(ostream& out);
	virtual void display();
	virtual void saveWithSpaces(ostream& out);
	int getArea();
	string getType();
	int getPerimeter();
	string getColor();
	double densityFigure();
	void addArea(int newArea);
};
#endif // !FIGURE_H

