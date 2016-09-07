#ifndef __SceneFactory_H__
#define __SceneFactory_H__

#include "cocos2d.h"
USING_NS_CC;

class SceneFactory
{
public:
	static Scene *createScene(std::string sceneName);
};

#endif

