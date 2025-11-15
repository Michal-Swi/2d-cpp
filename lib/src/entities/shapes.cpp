#pragma once

#include <raylib.h>
#include "../../include/shapes.h"

void Circle::draw() {
	DrawCircle(position.x, position.y, radius, color);
}

void Rec::draw() {
	DrawRectangle(position.x, position.y, side_len.x, side_len.y, color);
}

void Line::draw() {
	DrawLine(position.x, position.y, end_position.x, end_position.y, color);
}

void Pixel::draw() {
	DrawPixel(position.x, position.y, color);
}

void Triangle::draw() {
	DrawTriangle(vertex1, vertex2, vertex3, color);
}

