#pragma once
#include <SFML/Graphics.hpp>
#include "Character.h";

using namespace sf;

class Engine
{
private:

    RenderWindow m_Window;

    // ��������� ������ � �������� ��� ����
    Sprite m_BackgroundSprite;
    Texture m_BackgroundTexture;

    // ��������� ����
    Character m_Character;

    void input();
    void update(float dtAsSeconds);
    void draw();

public:
    // ����������� ������
    Engine();

    // ������� ����� ������� ��� ��������� �������
    void start();

};