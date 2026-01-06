#include "Circle.h"
#include <ostream>

Circle::Circle(){
	Shape();
	center.x=0;
	center.y=0;
	radius = 1;
}
Circle::Circle(std::string color, Point2D center, double radius){
	this->color = color;
	this->center=center;
	this->radius = radius;
}
Circle::Point2D get_center()const{
	return center;
}
Circle::set_radius(double r){
	radius = r;
}
std::ostream& operator<<(std::ostream &out, const Circle &c){
	out << "[Circle: color = " << c.color << ";center = " << c.center << "; radius =" << c.radius<< "]" << std::endl;
}


double Circle::area(){
	return 3.14159 * radius * radius;
}
double Circle::perimeter(){
	return 2 * 3.14159 * radius;
}
void Circle::translate(double incX, double incY){
	x=incX;
	y=incY;
}
void Circle::print(){
	<<(out,Circle);
}
