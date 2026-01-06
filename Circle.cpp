#include "Circle.h"
#include <ostream>
#include <cmath>

Circle::Circle(){
	set_color("red");
	center.x=0;
	center.y=0;
	radius = 1;
}
Circle::Circle(std::string color, Point2D center, double radius){
	this->color = color;
	this->center=center;
	this->radius = radius;
}
Point2D Circle::get_center()const{
	return center;
}
void Circle::set_center(Point2D p){
	center.x=p.x;
	center.y=p.y;
}
double Circle::get_radius()const{
	return radius;
}
void Circle::set_radius(double r){
	radius = r;
}
std::ostream& operator<<(std::ostream &out, const Circle &c){
	out << "[Circle: color = " << c.color << ";center = " << c.center << "; radius =" << c.radius<< "]" << std::endl;
	return out;
}


double Circle::area()const{
	return 3.14159 * radius * radius;
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
