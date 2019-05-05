#include "lost_map.h"

#include "le/tools/log.h"
#include "le/tools/timer.h"

using namespace le;

LostMapEditor::LostMapEditor(const std::string& title, int width, int height):
    Application(title, width, height)
{

}

void LostMapEditor::init(le::Window* _window)
{

}

void LostMapEditor::update(le::Window* _window)
{
    LOG_FAIL(le::Timer::deltaTime);
}

void LostMapEditor::render(le::Window* _window)
{

}