#pragma once

#include "le/logic/application.h"
#include "le/gfx/window.h"

class LostMapEditor: public le::Application
{
public:
    LostMapEditor(const std::string& title, int width, int height);
    void init(le::Window* _window);
    void update(le::Window* _window);
    void render(le::Window* _window);
}; 