#include "entity.h"

class Circle : public Entity {
	Vector2 position; 
	double radius; 
	Color color;
};

struct Rec {
	Vector2 position;
	Vector2 side_len;
	Color color;
};

struct Line {
	Vector2 start_position;
	Vector2 end_position;
	Color color;
};

struct Pixel {
	Vector2 position; 
	Color color;
};

struct Triangle {
	Vector2 vertex1;
	Vector2 vertex2;
	Vector2 vertex3;
	Color color;
};

