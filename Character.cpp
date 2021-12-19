#include "Character.h"

Character::Character()
{
    // Вписываем в переменную скорость Боба
    m_Speed = 400;

    // Связываем текстуру и спрайт
    m_Texture.loadFromFile("character.png");
    m_Sprite.setTexture(m_Texture);

    // Устанавливаем начальную позицию Боба в пикселях
    m_Position.x = 300;
    m_Position.y = 300;

}

// Делаем приватный спрайт доступным для функции draw()
Sprite Character::getSprite()
{
    return m_Sprite;
}

void Character::moveLeft()
{
    m_LeftPressed = true;
}

void Character::moveRight()
{
    m_RightPressed = true;
}

void Character::stopLeft()
{
    m_LeftPressed = false;
}

void Character::stopRight()
{
    m_RightPressed = false;
}

void Character::moveUp()
{
    m_UpPressed = true;
}

void Character::moveDown()
{
    m_DownPressed = true;
}

void Character::stopUp()
{
    m_UpPressed = false;
}

void Character::stopDown()
{
    m_DownPressed = false;
}
// Двигаем Боба на основании пользовательского ввода в этом кадре,
// прошедшего времени и скорости
void Character::update(float elapsedTime)
{
    if (m_RightPressed)
    {
        m_Position.x += m_Speed * elapsedTime;
    }

    if (m_LeftPressed)
    {
        m_Position.x -= m_Speed * elapsedTime;
    }
    if (m_UpPressed)
    {
        m_Position.y -= m_Speed * elapsedTime;
    }

    if (m_DownPressed)
    {
        m_Position.y += m_Speed * elapsedTime;
    }
    // Теперь сдвигаем спрайт на новую позицию
    m_Sprite.setPosition(m_Position);

}