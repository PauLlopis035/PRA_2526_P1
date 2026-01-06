#include "Square.h"
#include <ostream>

Square::check(Point2D* vertices){
	if((vertices[1]-vertices[0]==vertices[2]-vertices[3])&&(vertices[0]-vertices[3]==vertices[1]-vertices[2])&&(vertices[0]-vertices[2]==vertices[1]-vertices[3])){return true;}
	else{return false;}
}
Square::Square(){
	Shape();
	new vs[N_VERTICES];
	vs[0]=(-1,1);
	vs[1]=(1,1);
	vs[2]=(1,-1);
	vs[3]=(-1,-1);
}
Square::Square(std::string color, Point2D* vertices){
	if(check(vertices==false){throw std::invalid_argument;}	
	else{
	this->color=color;
	vs[0]=vertices[0];
	vs[1]=vertices[1];
	vs[2]=vertices[2];
	vs[3]=vertices[3];
	}
}
Square::set_vertices(Point2D* vertices){
	vs[0]=vertices[0];
	vs[1]=vertices[1];
	vs[2]=vertices[2];
	vs[3]=vertices[3];
}
Square::operator<<(ostream &out, const Square &square){
	out << "[Square: color = "<<square.color << "; v0 = "<< square[0]  << "; v1 = " << square[1] << "v2 = " << square[2] << "; v3 = " << square[3] << "]" << std::endl;
	return out;
}
