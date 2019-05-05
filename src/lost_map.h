#pragma once

#include "logic/application.h"
#include "gfx/window.h"

class LostMapEditor: public le::Application
{
public:
    LostMapEditor(const std::string& title, int width, int height);
    void init(le::Window* _window);
    void update(float _delta, le::Window* _window);
    void render(le::Window* _window);
}; 