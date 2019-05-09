#pragma once

#include "le/logic/application.h"
#include "le/gfx/window.h"
#include "le/gfx/sprite_renderer.h"
#include <vector>

class LostMapEditor: public le::Application
{
public:
    LostMapEditor(const std::string& title, int width, int height);
    ~LostMapEditor();
    void init(le::Window* _window);
    void update(le::Window* _window);
    void render(le::Window* _window);
private:
    void onFileDropped(const std::string& path);
private:
    std::vector<le::Sprite*> sprites;
    le::SpriteRenderer* spriteRenderer;
}; 