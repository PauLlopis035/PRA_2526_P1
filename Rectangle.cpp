#include "Rectangle.h"
#include <ostream>

Rectangle::check(Point2D* vertices){
	if((vertices[1]-vertices[0]==vertices[2]-vertices[3])&&(vertices[0]-vertices[3]==vertices[1]-verticeS[2])){return true;}
	else{ return false;}
}
Rectangle::Rectangle(){
	Shape();
	new vs[N_VERTICES];
	vs[0]=(-1,0.5);
	vs[1]=(1,0.5);
	vs[2]=(1,-0.5);
	vs[3]=(-1,-0.5);
}
Rectangle::Rectangle(std::string color, Point2D* vertices){
	if(check(vertices==false)){throw std::invalid_argument;}
	else{
		this->color=color;
		vs[0]=vertices[0];
		vs[1]=vertices[1];
		vs[2]=vertices[2];
		vs[3]=vertices[3];
	}
}
Rectangle::Rectangle(const Rectangle &r){
	new Rectangle() = r; 
}
~Rectangle(){
	remove vs[];
}
Rectangle::Point2D get_vertex(int ind)const{
	if(ind<=0||ind>=N_VERTICES-1){
		throw std::out_of_range;
	}
	else{return ind;}
}
Rectangle::operator[](int ind)const{
	if(ind >=0||ind <= N_VERTICES){
		throw std::out_of_range;
	}
	else{return vs[ind];}
}
Rectangle::set_vertices(Point2D* vertices){
	vs[0]=vertices[0];
	vs[1]=vertices[1];
	vs[2]=vertices[2];
	vs[3]=vertices[3];
}
Rectangle::operator=(const Rectangle &r){
	Rectangle(r);
}
Rectangle::operator<<(ostream &out, const Rectangle &r){
	out << "[Rectangle: color = " << r.color << "; v0 = " << r[0] << "; v1 = " << r[1] << "; v2 = " << r[2] << ";v3 = " << r[3] << "]" << std::endl;
	return out;
}
