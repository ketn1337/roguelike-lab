#include "Enemy.h"
#include <iostream>

Enemy::Enemy(int x, int y, std::string _type) : position(x, y), health(50), type(_type) {}

void Enemy::move(int dx, int dy) {
    position.x += dx;
    position.y += dy;
}

void Enemy::attack() {
    std::cout << "Enemy attacks the player!" << std::endl;
}

void Enemy::takeDamage(int damage) {
    health -= damage;
    std::cout << "Enemy takes " << damage << " damage!" << std::endl;
}