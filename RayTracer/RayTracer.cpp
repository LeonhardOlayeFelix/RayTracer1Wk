// RayTracer.cpp : Defines the entry point for the application.
//

#include "common.h"
#include "hittable.h"
#include "hittable_list.h"
#include "sphere.h"
#include "camera.h"



/// <summary>
/// Returns the value of the paramter t at which the given ray, P(t), hits the given sphere.
/// </summary>
/// <param name="center">Sphere center</param>
/// <param name="radius">Sphere radius</param>
/// <param name="r">Ray</param>
/// <returns></returns>




int main() {
    hittable_list world;

    world.add(make_shared<sphere>(point3(0, 0, -1), 0.5));
    world.add(make_shared<sphere>(point3(0, -100.5, -1), 100));

    camera cam;
    cam.max_depth = 50;
    cam.aspect_ratio = 16.0 / 9.0;
    cam.image_width = 400;
    cam.samples_per_pixel = 50;
    cam.render(world);
}