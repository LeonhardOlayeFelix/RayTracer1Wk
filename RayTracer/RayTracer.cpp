// RayTracer.cpp : Defines the entry point for the application.
//

#include "common.h"

#include "camera.h"

#include "hittable.h"
#include "hittable_list.h"
#include "sphere.h"




/// <summary>
/// Returns the value of the paramter t at which the given ray, P(t), hits the given sphere.
/// </summary>
/// <param name="center">Sphere center</param>
/// <param name="radius">Sphere radius</param>
/// <param name="r">Ray</param>
/// <returns></returns>




int main() {
    hittable_list world;

    auto R = std::cos(pi / 4);

    auto material_left = make_shared<lambertian>(color(0, 0, 1));
    auto material_right = make_shared<lambertian>(color(1, 0, 0));

    world.add(make_shared<sphere>(point3(-R, 0, -1), R, material_left));
    world.add(make_shared<sphere>(point3(R, 0, -1), R, material_right));


    camera cam;
    cam.max_depth = 10;
    cam.aspect_ratio = 16.0 / 9.0;
    cam.image_width = 400;
    cam.samples_per_pixel = 50;

    cam.vfov = 90;

    cam.render(world);
}