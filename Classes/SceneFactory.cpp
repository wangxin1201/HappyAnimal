#include "SceneFactory.h"
#include "SceneBegin.h"

Scene * SceneFactory::createScene(std::string sceneName)
{
	if (sceneName == "SceneBegin")
	{
		return SceneBegin::createScene();
	}

	return SceneBegin::createScene();
}
