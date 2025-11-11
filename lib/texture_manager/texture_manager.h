#pragma once

#include <memory>
#include <new>
#include <optional>
#include <raylib.h>
#include <string_view>
#include <unordered_map>

class TextureManager {
	private:
	std::unordered_map<std::string_view, std::shared_ptr<Texture2D>> textures;

	public:
	std::optional<std::shared_ptr<Texture2D>> get_texture(const std::string_view &texture) {
		if (textures.count(texture) == 0) {
			throw;
		}
		
		return textures.at(texture);
	}

	public:
	void add_texture(const std::string_view &texture_name, const Texture2D &texture) {
		std::shared_ptr<Texture2D> shared_texture_ptr;

		try {
			shared_texture_ptr = std::make_shared<Texture2D>(texture);
		} catch (std::bad_alloc &err) {
			throw;
		}
		
		textures.at(texture_name) = shared_texture_ptr; 
	}

	public:
	~TextureManager() {}
};

