#include "Engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
    m_Character.update(dtAsSeconds);
}