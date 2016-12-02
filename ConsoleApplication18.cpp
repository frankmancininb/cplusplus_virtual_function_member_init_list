// ConsoleApplication18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class polygon {
protected:
	int length, width;
public:
	polygon(int x, int y) {
		length = x;
		width = y;
	}

	virtual int get_area()
	{
		return(0);
	}
};

class rectangle : public polygon {
public:
	rectangle(int x, int y):polygon( x,  y){
	}
	int get_area() {
		return(length * width);
	}

};

class triangle :public polygon {
public:
	triangle(int x, int y) :polygon(x, y) {}
	int get_area() {
		return((length*width) / 2);
	}
};
int main()
{
	polygon pobj(1, 2);
	polygon *pptr = new polygon(2, 3);

	std::cout << pobj.get_area() << std::endl;
	cout << pptr->get_area() << endl;
	rectangle robj(1, 2);

	cout << robj.get_area() << endl;

	triangle tobj(3, 4);
	cout << tobj.get_area() << endl;

	polygon *pppptr = &tobj;

	cout << pppptr->get_area() << endl;
	
	delete pptr;
    return 0;
}

