#pragma once
#include "Point.h"

// Класс для игрока
class Player {
public:
    Point position;
    int health;
    int score;
    int meleeAttacks;
    int rangedAttacks;

    Player(int x, int y);
    void move(int dx, int dy);
    void meleeAttack();
    void rangedAttack();
    void pickItem();
    void takeDamage(int damage);
    void addScore(int points);
};