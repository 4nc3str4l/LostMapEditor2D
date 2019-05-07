#include "lost_map.h"

#include "le/tools/log.h"
#include "le/tools/timer.h"
#include "le/tools/event_manager.h"
#include <functional>

using namespace le;

LostMapEditor::LostMapEditor(const std::string& title, int width, int height): Application(title, width, height)
{
}


void LostMapEditor::init(le::Window* _window)
{
    le::EventManager::subscribe(le::Event::drop_file, []() { LOG_SPECIAL("Received Drop!"); });
}

void LostMapEditor::update(le::Window* _window)
{
}

void LostMapEditor::render(le::Window* _window)
{
}