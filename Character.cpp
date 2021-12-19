#include "Character.h"

Character::Character()
{
    // ��������� � ���������� �������� ����
    m_Speed = 400;

    // ��������� �������� � ������
    m_Texture.loadFromFile("character.png");
    m_Sprite.setTexture(m_Texture);

    // ������������� ��������� ������� ���� � ��������
    m_Position.x = 300;
    m_Position.y = 300;

}

// ������ ��������� ������ ��������� ��� ������� draw()
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
// ������� ���� �� ��������� ����������������� ����� � ���� �����,
// ���������� ������� � ��������
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
    // ������ �������� ������ �� ����� �������
    m_Sprite.setPosition(m_Position);

}