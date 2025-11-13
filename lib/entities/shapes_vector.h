#pragma once

#include "shapes.h"
#include <vector>

enum class Shapes {
	Triangle,
	Rec,
	Circle,
	Line,
	Pixel,
};

class ShapesVector {
	private:
	std::vector<Triangle> triangles;
	std::vector<Rec> recs;
	std::vector<Line> lines;
	std::vector<Circle> circles;
	std::vector<Pixel> pixels;

	private:
	// For drawing order
	std::vector<std::pair<Shapes, int>> order;

	public:
	void push_back_triangle(const Triangle &triangle) {
		triangles.push_back(triangle);
		order.push_back(std::make_pair(Shapes::Triangle, triangles.size() - 1));
	}

	public:
	void push_back_rec(const Rec &rec) {
		recs.push_back(rec);
		order.push_back(std::make_pair(Shapes::Rec, recs.size() - 1));
	}

	public:
	void push_back_line(const Line &line) {
		lines.push_back(line);
		order.push_back(std::make_pair(Shapes::Line, lines.size() - 1));
	}

	public:
	void push_back_circle(const Circle &circle) {
		circles.push_back(circle);
		order.push_back(std::make_pair(Shapes::Circle, circles.size() - 1));
	}

	public:
	void push_back_pixel(const Pixel &pixel) {
		pixels.push_back(pixel);
		order.push_back(std::make_pair(Shapes::Pixel, pixels.size() - 1));
	}

	public:
	Triangle get_triangle(int index) {
		return triangles.at(index);
	}

	public:
	void set_triangle(int index, const Triangle &triangle) {
		triangles.at(index) = triangle;
	}

	public:
	Triangle& change_triangle(int index) {
		return triangles.at(index);
	}

	public:
	Rec get_rec(int index) {
		return recs.at(index);
	}

	public:
	void set_rec(int index, const Rec &rec) {
		recs.at(index) = rec;
	}

	public:
	Rec& change_rec(int index) {
		return recs.at(index);
	}

	public:
	Line get_line(int index) {
		return lines.at(index);
	}

	public:
	void set_line(int index, const Line &line) {
		lines.at(index) = line;
	}

	public:
	Line& change_line(int index) {
		return lines.at(index);
	}

	public:
	Circle get_circle(int index) {
		return circles.at(index);
	}

	public:
	void set_circle(int index, const Circle &circle) {
		circles.at(index) = circle;
	}

	public:
	Circle& change_circle(int index) {
		return circles.at(index);
	}

	public:
	Pixel get_pixel(int index) {
		return pixels.at(index);
	}

	public:
	Pixel& change_pixel(int index) {
		return pixels.at(index);
	}

	public:
	void set_pixel(int index, const Pixel &pixel) {
		pixels.at(index) = pixel;
	}

	public:
	void draw() {
		for (auto [shape, index] : order) {
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
};

