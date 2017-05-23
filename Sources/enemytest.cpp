#include "EnemyTest.h"
#include "constants.h"

namespace Harley {
EnemyTest::EnemyTest()
{
    x = 6;
    y = 11;
    texture.loadFromFile("Resources/EnemyTEST.png");
    texture.setSmooth(false);
    width = texture.getSize().x;
    height = texture.getSize().y;
    sprite.setTexture(texture);
    sprite.setScale(SCALE, SCALE);
}

EnemyTest::draw(sf::RenderWindow& window){
    sprite.setPosition(x*TILE_SIZE, y*TILE_SIZE);
    window.draw(sprite);
}

EnemyTest::~EnemyTest()
{
    //dtor
}

}
