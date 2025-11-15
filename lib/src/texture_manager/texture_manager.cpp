#pragma once

#include "../../include/texture_manager.h"

std::shared_ptr<Texture2D> TextureManager::get_texture(const std::string_view &texture) {
	if (textures.count(texture) == 0) {
		throw;
	}
	
	return textures.at(texture);
}

void TextureManager::add_texture(const std::string_view &texture_name, const Texture2D &texture) {
	std::shared_ptr<Texture2D> shared_texture_ptr;

	try {
		shared_texture_ptr = std::make_shared<Texture2D>(texture);
	} catch (std::bad_alloc &err) {
		throw;
	}
	
	textures.at(texture_name) = shared_texture_ptr; 
}

TextureManager::~TextureManager() {}

