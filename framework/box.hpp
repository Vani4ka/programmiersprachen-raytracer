#ifndef BOX_HPP
#define BOX_HPP

#include "shape.hpp"
#include <glm/vec3.hpp>

class Box : public Shape
{
public:
	Box():
	Shape(),
	min_{0.0},
	max_{0.0}
	{}

	Box(glm::vec3 const& mi, glm::vec3 const& ma):
	Shape(),
	min_{mi},
	max_{ma}
	{}

	Box(glm::vec3 const& mi, glm::vec3 const& ma, Color const& col, std::string n):
	Shape(col, n),
	min_{mi},
	max_{ma}
	{}

	glm::vec3 getMin() const {
		return min_;
	}

	void getMax() const {
		return max_;
	}

	double length() const {
		return max_.x - min_.x;
	}

	double width() const {
		return max_.y - min_.y;
	}

	double height() const {
		return max_.z - min_.z;
	}

	double area() const override {
		return 2*(width()*height()+width()*length()+length()*height());
	}

	double volume() const override {
		return width()*height()*length();
	}
private:
	glm::vec3 min_;
	glm::vec3 max_;
	
};


#endif