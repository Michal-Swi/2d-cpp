#pragma once

#include <vector>
#include "../../include/shapes_vector.h"

void ShapesVector::push_back_triangle(const Triangle &triangle) {
	triangles.push_back(triangle);
	draw_order.push_back(std::make_pair(Shapes::Triangle, triangles.size() - 1));
}

void ShapesVector::push_back_rec(const Rec &rec) {
	recs.push_back(rec);
	draw_order.push_back(std::make_pair(Shapes::Rec, recs.size() - 1));
}

void ShapesVector::push_back_line(const Line &line) {
	lines.push_back(line);
	draw_order.push_back(std::make_pair(Shapes::Line, lines.size() - 1));
}

void ShapesVector::push_back_circle(const Circle &circle) {
	circles.push_back(circle);
	draw_order.push_back(std::make_pair(Shapes::Circle, circles.size() - 1));
}

void ShapesVector::push_back_pixel(const Pixel &pixel) {
	pixels.push_back(pixel);
	draw_order.push_back(std::make_pair(Shapes::Pixel, pixels.size() - 1));
}

Triangle ShapesVector::get_triangle(int index) {
	return triangles.at(index);
}

void ShapesVector::set_triangle(int index, const Triangle &triangle) {
	triangles.at(index) = triangle;
}

Triangle& ShapesVector::change_triangle(int index) {
	return triangles.at(index);
}

Rec ShapesVector::get_rec(int index) {
	return recs.at(index);
}

void ShapesVector::set_rec(int index, const Rec &rec) {
	recs.at(index) = rec;
}

Rec& ShapesVector::change_rec(int index) {
	return recs.at(index);
}

Line ShapesVector::get_line(int index) {
	return lines.at(index);
}

void ShapesVector::set_line(int index, const Line &line) {
	lines.at(index) = line;
}

Line& ShapesVector::change_line(int index) {
	return lines.at(index);
}

Circle ShapesVector::get_circle(int index) {
	return circles.at(index);
}

void ShapesVector::set_circle(int index, const Circle &circle) {
	circles.at(index) = circle;
}

Circle& ShapesVector::change_circle(int index) {
	return circles.at(index);
}

Pixel ShapesVector::get_pixel(int index) {
	return pixels.at(index);
}

Pixel& ShapesVector::change_pixel(int index) {
	return pixels.at(index);
}

void ShapesVector::set_pixel(int index, const Pixel &pixel) {
	pixels.at(index) = pixel;
}

void ShapesVector::draw() {
	for (auto [shape, index] : draw_order) {
		switch (shape) {
			case Shapes::Circle:
				circles.at(index).draw();
				break;
			case Shapes::Line:
				lines.at(index).draw();
				break;
			case Shapes::Pixel:
				pixels.at(index).draw();
				break;
			case Shapes::Rec:
				recs.at(index).draw();
				break;
			case Shapes::Triangle:
				triangles.at(index).draw();
				break;
		}
	}
}

