#include "Engine.h"

void Engine::input()
{
    // Обрабатываем нажатие Escape
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        m_Window.close();
    }

    // Обрабатываем нажатие клавиш движения
    if (Keyboard::isKeyPressed(Keyboard::A))
    {
        m_Character.moveLeft();
    }
    else
    {
        m_Character.stopLeft();
    }

    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        m_Character.moveRight();
    }
    else
    {
        m_Character.stopRight();
    }

    if (Keyboard::isKeyPressed(Keyboard::S))
    {
        m_Character.moveDown();
    }
    else
    {
        m_Character.stopDown();
    }

    if (Keyboard::isKeyPressed(Keyboard::W))
    {
        m_Character.moveUp();
    }
    else
    {
        m_Character.stopUp();
    }
}