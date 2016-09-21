#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "shape.hpp"
#include <glm/vec3.hpp>
#include <cmath.h>

class Sphere : public Shape
{
public:
	Sphere():
	center_{0.0},
	radius_{0.0}
	{}

	Sphere(glm::vec3 const& c, double r):
	center_{c},
	radius_{r}
	{}

	glm::vec3 getCenter() const {
		return center_; 
	}

	double getRadius() const {
		return radius_;
	}

	double area() const override {
		return 4*M_PI*radius_*radius;
	}
	
	double volume() const override {
		return M_PI*radius_*radius_*radius_*4/3;
	}

private:
	glm::vec3 center_;
	double radius_;

};

#endif