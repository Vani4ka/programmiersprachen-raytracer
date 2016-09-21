#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "color.hpp"
#include <string>

class Shape
{
public:
	Shape():
	color_{0.0},
	name_{""}
	{}

	Shape(Color const& c, std::string n):
	color_{c},
	name_{n}
	{}

	virtual double area() const = 0;
	virtual double volume() const = 0;

	Color getColor() const {
		return color_;
	}

	std::string getName() const {
		return name_;
	}

private:
	Color color_;
	std::string name_;
};




#endif