#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <stdexcept>
#include <iostream>
#include "Shape.h"
#include "Point2D.h"

class Rectangle.h : public Shape{
	protected:
		Point2D *vs;
	public:
		static int const N_VERTICES = 4;
	private:
		static bool check(Point2D* vertices);
	public:
		Rectangle();
		Rectangle(std::string color, Point2D* vertices);
		Rectangle(const Rectangle &r);
		~Rectangle();
		Point2D get_vertex(int ind)const;
		Point2D operator[](int ind)const;
		virual void set_vertices(Point2D* vertices);
		Rectangle& operator=(const Rectangle &r);
		friend std::ostream& operator<<(ostream &out, const Rectangle &r);
}

#endif
