#ifndef __ENEMY_H_
#define __ENEMY_H_

#include "sfml.h"
#include "map.h"
#include "player.h"

namespace Harley {
class Enemy
{
    public:
        Enemy();
        virtual void draw(sf::RenderWindow&) = 0;
        virtual void update(Map&, Player&);
        virtual ~Enemy();

    protected:

    private:
};

}
#endif // __ENEMY_H_
