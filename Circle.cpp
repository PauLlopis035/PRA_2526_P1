#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle() : Shape("red"), center(0,0), radius(1){}

Circle::Circle(std::string color, Point2D center, double radius) : Shape(color), center(0,0), radius(radius){
	if (radius <=0){
		throw std::invalid_argument("El radio debe ser positivo");
	}
}
Point2D Circle::get_center()const{
	return center;
}
void Circle::set_center(Point2D p){
	center = p;
}
double Circle::get_radius()const{
	return radius;
}
void Circle::set_radius(double r){
	radius = r;
}
std::ostream& operator<<(std::ostream &out, const Circle &c){
	out << "Circle(color=" << c.color << ", center=(" << c.center.x << "," << c.center.y << "), radius=" << c.radius<< ")" << std::endl;
	c.print();
	return out;
}


double Circle::area()const{
	return 3.14159 * std::pow(radius, 2);
}
double Circle::perimeter()const{
	return 2 * 3.14159 * radius;
}
void Circle::translate(double incX, double incY){
	center.x += incX;
	center.y += incY;
}
void Circle::print(){
	std::cout << "Circle(color=" << color << ", center=(" << center.x << ", " << center.y << "), radius=" << radius << ")\n";
}
