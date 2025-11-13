#pragma once

#include <memory>
#include <raylib.h>
#include <utility>
#include <variant>
#include <vector>
#include "shapes_vector.h"

struct EntityProperties {
	std::shared_ptr<Texture2D> texture;
	bool visible;
	int type_id;
	int instance_id;
	ShapesVector shapes;
};

class Entity {
	public:
	EntityProperties properties;

	public:
	virtual void draw() = 0;

	public:
	virtual void update(const float &delta_time) = 0;

	public:
	virtual void on_click() = 0;

	public:
	virtual void on_collision(int type_id, int instance_id) = 0;

	public:
	virtual void on_key_pressed() = 0;

	public:
	virtual ~Entity() = default;
};

