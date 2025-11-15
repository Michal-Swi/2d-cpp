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
	std::shared_ptr<Texture2D> get_texture(const std::string_view &texture);

	public:
	void add_texture(const std::string_view &texture_name, const Texture2D &texture);

	public:
	~TextureManager();
};

