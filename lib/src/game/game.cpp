#pragma once

#include "../../include/game.h"

void Game::update(const float &delta_time) {
	for (auto &entity : entities) {
		entity->update(delta_time);
	}
}

void Game::draw() {
	BeginDrawing();

	for (auto &entity : entities) {
		entity->draw();
	}

	EndDrawing();
}

