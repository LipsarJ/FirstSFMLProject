#include "Engine.h"

void Engine::draw()
{
    // ������� ���������� ����
    m_Window.clear(Color::White);

    // ������������ ���
    m_Window.draw(m_BackgroundSprite);
    // � ����
    m_Window.draw(m_Character.getSprite());

    // ���������� ���, ��� ����������
    m_Window.display();
}