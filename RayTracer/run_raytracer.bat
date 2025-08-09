@echo off
if exist image.ppm del image.ppm
cmake --build build
build\RayTracer.exe > image.ppm