#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity {
protected:
    std::string name;
    int health;
    int attack;
    int x, y; 

public:
    Entity(const std::string& name, int health, int attack, int x, int y);
    virtual ~Entity() = default;

    void takeDamage(int damage);
    bool isAlive() const;
    virtual void attackEntity(Entity& target);

    std::string getName() const;
    int getHealth() const;
    int getAttack() const;

    int getX() const;
    int getY() const;
    void setPosition(int x, int y);
};

#endif
