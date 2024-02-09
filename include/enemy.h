#pragma once
#include "Point.h"
#include <string>

// Класс для врага
class Enemy {
public:
    Point position;
    int health;
    std::string type;

    Enemy(int x, int y, std::string _type);
    void move(int dx, int dy);
    void attack();
    void takeDamage(int damage);
};