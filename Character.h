#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Character
{
    // ��� private ���������� ����� ���� �������� ������ ������ �������
private:

    // ������� ����
    Vector2f m_Position;

    // ��������� ������ Sprite
    Sprite m_Sprite;

    // ��������� ��������
    Texture m_Texture;

    // ���������� ���������� ��� ������������ ����������� ��������
    bool m_LeftPressed;
    bool m_RightPressed;
    bool m_DownPressed;
    bool m_UpPressed;

    // �������� ���� � �������� � �������
    float m_Speed;

    // �������� ������
public:

    // ����������� ���� � ������������
    Character();

    // ��� �������� ������� � ������� �������
    Sprite getSprite();

    // ��� �������� ����
    void moveLeft();

    void moveRight();

    // ����������� ��������
    void stopLeft();

    void stopRight();

    // ��� �������� ����
    void moveUp();

    void moveDown();

    // ����������� ��������
    void stopUp();

    void stopDown();

    // ��� ������� ����� ���������� �� ������ ����
    void update(float elapsedTime);

};