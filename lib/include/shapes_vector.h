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
	std::vector<std::pair<Shapes, int>> draw_order;

	public:
	void push_back_triangle(const Triangle &triangle);

	public:
	void push_back_rec(const Rec &rec);

	public:
	void push_back_line(const Line &line);

	public:
	void push_back_circle(const Circle &circle);

	public:
	void push_back_pixel(const Pixel &pixel);

	public:
	Triangle get_triangle(int index);

	public:
	void set_triangle(int index, const Triangle &triangle);

	public:
	Triangle& change_triangle(int index);

	public:
	Rec get_rec(int index);

	public:
	void set_rec(int index, const Rec &rec);

	public:
	Rec& change_rec(int index);

	public:
	Line get_line(int index);

	public:
	void set_line(int index, const Line &line);

	public:
	Line& change_line(int index);

	public:
	Circle get_circle(int index);

	public:
	void set_circle(int index, const Circle &circle);

	public:
	Circle& change_circle(int index);

	public:
	Pixel get_pixel(int index);

	public:
	Pixel& change_pixel(int index);

	public:
	void set_pixel(int index, const Pixel &pixel);

	public:
	void draw();
};

