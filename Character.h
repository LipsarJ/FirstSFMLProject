#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Character
{
    // Все private переменные могут быть доступны только внутри объекта
private:

    // Позиция Боба
    Vector2f m_Position;

    // Объявляем объект Sprite
    Sprite m_Sprite;

    // Добавляем текстуру
    Texture m_Texture;

    // Логические переменные для отслеживания направления движения
    bool m_LeftPressed;
    bool m_RightPressed;
    bool m_DownPressed;
    bool m_UpPressed;

    // Скорость Боба в пикселях в секунду
    float m_Speed;

    // Открытые методы
public:

    // Настраиваем Боба в конструкторе
    Character();

    // Для отправки спрайта в главную функцию
    Sprite getSprite();

    // Для движения Боба
    void moveLeft();

    void moveRight();

    // Прекращение движения
    void stopLeft();

    void stopRight();

    // Для движения Боба
    void moveUp();

    void moveDown();

    // Прекращение движения
    void stopUp();

    void stopDown();

    // Эта функция будет вызываться на каждый кадр
    void update(float elapsedTime);

};