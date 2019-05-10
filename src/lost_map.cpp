#include "lost_map.h"

#include "le/tools/log.h"
#include "le/tools/timer.h"
#include "le/tools/loader.h"
#include "le/tools/event_manager.h"
#include "le/tools/input.h"
#include <functional>

using namespace le;

LostMapEditor::LostMapEditor(const std::string& title, int width, int height): Application(title, width, height){}

void LostMapEditor::init(le::Window* _window)
{
    auto shader = le::Loader::shader("res/shaders/light_sprite");
    EventManager::onFileDropped.Bind<LostMapEditor, &LostMapEditor::onFileDropped>(this);

    // Configure shaders
    LOG_CORRECT(width, ", ", height);
    glm::mat4 projection = glm::ortho(0.0f, static_cast<GLfloat>(width), static_cast<GLfloat>(height), 0.0f, -1.0f, 1.0f);
    
	shader->Use();
	shader->SetInt("image", 0);
    shader->SetMat4("projection", projection);
    shader->SetVec2("light_pos", glm::vec2(0, 0));
    spriteRenderer = new SpriteRenderer(*shader);
}

void LostMapEditor::update(le::Window* _window)
{
}

void LostMapEditor::render(le::Window* _window)
{
    spriteRenderer->Render(sprites);
}

void LostMapEditor::onFileDropped(const std::string& path)
{
    LOG_INFO("Dropped file: ", path);
    auto texture = le::Loader::LoadTexture(path, true);
    sprites.push_back(new le::Sprite(Input::MousePosX, Input::MousePosY, texture));
}

LostMapEditor::~LostMapEditor()
{
    for(Sprite* s : sprites)
    {
        delete s;
    }

    delete spriteRenderer;
}