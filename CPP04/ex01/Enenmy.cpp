#include "Enemy.hpp"

void							Enemy::takeDamage(const int& damage)
{
	hp -= damage;
	if (hp < 0)
		hp = 0;
}

void							Enemy::setHP(const int& hp)
{
	this->hp = hp;
}

void							Enemy::setType(const std::string& type)
{
	this->type = type;
}

int								Enemy::getHP() const
{
	return (this->hp);
}

const std::string&				Enemy::getType() const
{
	return (this->type);
}

Enemy&							Enemy::operator=(const Enemy& other)
{
	hp = other.hp;
	type = other.type;
	return (*this);
}

Enemy::Enemy(const Enemy& other)
{
	*this = other;
}

Enemy::Enemy(int hp, std::string const& type)
		: hp(hp), type(type)
{

}

Enemy::Enemy()
		: hp(0), type("unknown")
{
}

Enemy::~Enemy()
{
}
