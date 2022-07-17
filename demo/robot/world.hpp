#ifndef WORLD_HPP
#define WORLD_HPP

#include <memory>

#include <bullet/btBulletDynamicsCommon.h>

#include "scene/gmsceneobject.h"



namespace Robot {

class World
{
public:
    World();
    ~World();

private:
    std::unique_ptr<btDynamicsWorld> physicsWorld;
    std::shared_ptr<GMlib::SceneObject> graphicsWorld;
};

}



#endif // WORLD_HPP
