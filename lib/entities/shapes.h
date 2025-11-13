#pragma once

#include <cstdarg>
#include <raylib.h>

struct Circle {
	Vector2 position; 
	double radius; 
	Color color;

	void draw() {
		DrawCircle(position.x, position.y, radius, color);
	}
};

struct Rec {
	Vector2 position;
	Vector2 side_len;
	Color color;

	void draw() {
		DrawRectangle(position.x, position.y, side_len.x, side_len.y, color);
	}
};

struct Line {
	// Start position
	Vector2 position; 

	Vector2 end_position;
	Color color;

	void draw() {
		DrawLine(position.x, position.y, end_position.x, end_position.y, color);
	}
};

struct Pixel {
	Vector2 position; 
	Color color;

	void draw() {
		DrawPixel(position.x, position.y, color);
	}
};

struct Triangle {
	Vector2 vertex1;
	Vector2 vertex2;
	Vector2 vertex3;
	Color color;

	void draw() {
		DrawTriangle(vertex1, vertex2, vertex3, color);
	}
};

