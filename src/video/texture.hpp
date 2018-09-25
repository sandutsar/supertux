//  SuperTux
//  Copyright (C) 2006 Matthias Braun <matze@braunis.de>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef HEADER_SUPERTUX_VIDEO_TEXTURE_HPP
#define HEADER_SUPERTUX_VIDEO_TEXTURE_HPP

#include <string>
#include <tuple>

#include "video/drawing_effect.hpp"

/** This class is a wrapper around a texture handle. It stores the
    texture width and height and provides convenience functions for
    uploading SDL_Surfaces into the texture. */
class Texture
{
public:
  friend class TextureManager;
  using Key = std::tuple<std::string, int, int, int, int>;

private:
  Key m_cache_key;

protected:
  Texture();

public:
  virtual ~Texture();

  virtual int get_texture_width() const = 0;
  virtual int get_texture_height() const = 0;
  virtual int get_image_width() const = 0;
  virtual int get_image_height() const = 0;

private:
  Texture(const Texture&);
  Texture& operator=(const Texture&);
};

#endif

/* EOF */
