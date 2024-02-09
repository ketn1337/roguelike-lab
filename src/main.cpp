#include "Player.h"
#include "Enemy.h"

int main() {
    // Создание игрока и врага
    Player player(10, 10);
    Enemy enemy(15, 15, "Melee");

    // Демонстрация работы методов игрока и врага
    player.meleeAttack();
    enemy.takeDamage(20);

    return 0;
}