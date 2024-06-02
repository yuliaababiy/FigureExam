#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include <vector>
#include <fstream>
#include <algorithm>
#include <set>

template <typename T>
void displayFigure(vector<Figure<T>*>& figures)
{
	for (auto figure : figures)
	{
		figure->display;
	}
}
 
template<typename T>
void saveToFile(vector<Figure<T>*>& figures, string filename)
{
	ofstream file(filename);
		for (auto figure : figures)
		{
			figure->displayIntoFile(file);
		}
}

template<typename T>
void loadFromFile(vector<Figure<T>*>& figures, string filename)
{
	ifstream file(filename);
	int area, perimeter;
	string type, color, sideA, sideB, sideC;
	string type;
	while (file >> type >> area >> type >> perimeter >> color)
	{
		if (type == "Figure")
		{
			figures.push_back(new Figure<T>(area, type, perimeter, color));
		}
		else if (type == "Triangle")
		{
			figures.push_back(new Triangle<T>(sideA, sideB, sideC));
		}
	}
}

int main()
{
	vector<Figure<int>*> figures;
	ofstream file("input.txt", ios::app);
	int choice;
	while (true)
	{
		cout << "Enter action: " << endl;
		cout << "1 - load from file and print: " << endl;
		cout << "2 - add object to file: " << endl;
		cout << "3 - print object into file: " << endl;
		cout << "4 - output without duplications" << endl;
		cout << "5 - find the biggest perimeter: " << endl;
		cout << "6 - find average perimeter all figures: " << endl;
		cout << "7 - exit " << endl;
		cin >> choice;
		if (choice == 1)
		{
			loadFromFile(figures, "input.txt");
			displayFigure(figures);
		}
		if (choice == 2)
		{
			string type;
			int area, perimeter;
			string type, color, sideA, sideB, sideC;
			cout << "Enter type: ";
			cin >> type;
			if (type == "Figure")
			{
				cout << "Enter area: ";
				cin >> area;
				cout << "Enter type: ";
				cin >> type;
				cout << "Enter perimeter: ";
				cin >> perimeter;
				cout << "Enter color: ";
				cin >> color;
				Figure<int>* f = new Figure<int>(area, type, perimeter, color);
				f->saveWithSpaces(file);
			}
			else if (type == "Triangle")
			{
				cout << "Enter area: ";
				cin >> area;
				cout << "Enter type: ";
				cin >> type;
				cout << "Enter perimeter: ";
				cin >> perimeter;
				cout << "Enter color: ";
				cin >> color;
				cout << "Enter sideA: ";
				cin >> sideA;
				cout << "Enter sideB: ";
				cin >> sideB;
				cout << "Enter sideC: ";
				cin >> sideC;

				Triangle<int>* f = new Triangle<int>(area, type, perimeter, color, sideA, sideB, sideC);
				f->saveWithSpaces(file);
			}
			else
			{
				cout << "Error! " << endl;
				break;
			}
		}
		else if (choice == 4)
		{
			loadFromFile(figures, "input.txt");
			set<string> unique;
			for (auto f : figures) {
				unique.insert(f->getType());
			}
			for (auto u : unique)
			{
				cout << u << " ";
			}
			cout << endl;
		}
		else if (choice == 5)// find the biggest perimeter)
		{
			loadFromFile(figures, "input.txt");
			Figure<int>* biggest = figures[0];
			for (auto f : figures)
			{
				if (f->getPerimeter() > biggest->getPerimeter())
				{
					biggest = f;
				}
				cout << "The biggest perimeter: ";
				biggest->display();
				cout << endl;
			}
		}
		//else if (choice == 6) // find average perimeter all figures: " <
		else if (choice == 7)
		{
			break;
		}
		else
		{
			cout << "Error! " << endl;
		}
	}
	    
}
