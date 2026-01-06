#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <ostream>
#include <stdexcept>
#include "Rectangle.h"

class Square : public Rectangle{
	private:
		static bool check(point2D* vertices);
	public:
		Square();
		Square(std::string color, point2D* vertices);
		void set_vertices(Point2D* vertices);
		friend ostream& operator<<(ostream &out, const Square &square);
}

#endif
