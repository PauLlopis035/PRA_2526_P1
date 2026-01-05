#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include "Point2D.h"

class Shape{

	protected:
		std::string color;
	public:
		Shape(){
			color="red";
		};
		Shape(std::string color){
			this->color=color;
		};
		std::string get_color() const;
		void set_color(std::string c);
		virtual double area()const=0;
		virtual double permiter()const=0;
		virtual void translate(double incX, double incY)=0;
		virtual void print()=0;

};

#endif
