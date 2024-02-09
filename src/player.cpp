#include "player.h"
#include <iostream>

Player::Player(int x, int y) : position(x, y), health(100), score(0), meleeAttacks(10), rangedAttacks(5) {}

void Player::move(int dx, int dy) {
    position.x += dx;
    position.y += dy;
}

void Player::meleeAttack() {
    std::cout << "Player performs a melee attack!" << std::endl;
    meleeAttacks--;
}

void Player::rangedAttack() {
    std::cout << "Player performs a ranged attack!" << std::endl;
    rangedAttacks--;
}

void Player::pickItem() {
    std::cout << "Player picks up an item!" << std::endl;
}

void Player::takeDamage(int damage) {
    health -= damage;
    std::cout << "Player takes " << damage << " damage!" << std::endl;
}

void Player::addScore(int points) {
    score += points;
    std::cout << "Player gains " << points << " score!" << std::endl;
}