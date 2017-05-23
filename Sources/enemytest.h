#ifndef __ENEMYTEST_H_
#define __ENEMYTEST_H_

#include "enemy.h"
#include "map.h"
#include "player.h"

namespace Harley {
class EnemyTest : public Enemy
{
    public:
        EnemyTest();
        virtual void draw(sf::RenderWindow&);
        virtual void update(Map&, Player&);
        virtual ~EnemyTest();

    protected:

    private:
        int x, y, width, height;
        sf::Texture texture;
        sf::Sprite sprite;
};

}

#endif // __ENEMYTEST_H_
