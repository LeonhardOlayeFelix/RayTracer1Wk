// RayTracer.cpp : Defines the entry point for the application.
//

#include "RayTracer.h"

void MakeExampleImage() {
    // Image

    int image_width = 512;
    int image_height = 512;

    // Render

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; j++) {
        std::clog << "\r Scanlines remaining: " << (image_height - j) << ' ' << std::flush;
        for (int i = 0; i < image_width; i++) {
            auto r = double(i) / (image_width - 1);
            auto g = double(j) / (image_height - 1);
            auto b = 100;

            int ir = int(255.999 * r);
            int ig = int(255.999 * g);
            int ib = int(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
    std::clog << "\rDone.                   \n";
}

using namespace std;

int main()
{
    MakeExampleImage();
}
