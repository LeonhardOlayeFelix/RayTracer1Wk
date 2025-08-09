#pragma once

#include "hittable.h"
#include "vec3.h"

class sphere : public hittable {
public:
	sphere(const point3& center, double radius) : center(center), radius(std::fmax(0, radius)) {}


private:
	point3 center;
	double radius;
};