#pragma once

#include <memory>
#include <vector>

#include <raylib.h>
#include "entity.h"

class Game {
	private:
	using entities_vec = std::vector<std::unique_ptr<Entity>>;
	entities_vec entities;

	public:
	void update(const float &delta_time) {
		for (auto &entity : entities) {
			entity->update(delta_time);
		}
	}

	public:
	void draw() {
		BeginDrawing();

		for (auto &entity : entities) {
			entity->draw();
		}

		EndDrawing();
	}
};

