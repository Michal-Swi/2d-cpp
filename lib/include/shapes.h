#pragma once

#include <cstdarg>
#include <raylib.h>

struct Circle {
	Vector2 position;
	double radius;
	Color color;

	void draw();
};

struct Rec {
	Vector2 position;
	Vector2 side_len;
	Color color;

	void draw();
};

struct Line {
	// Start position
	Vector2 position; 

	Vector2 end_position;
	Color color;

	void draw();
};

struct Pixel {
	Vector2 position; 
	Color color;

	void draw();
};

struct Triangle {
	Vector2 vertex1;
	Vector2 vertex2;
	Vector2 vertex3;
	Color color;

	void draw();
};

