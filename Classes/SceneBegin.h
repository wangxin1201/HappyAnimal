#ifndef __SceneBegin_H__
#define __SceneBegin_H__

#include "cocos2d.h"
#include "ui/CocosGUI.h"

USING_NS_CC;
using namespace cocos2d::ui;

class SceneBegin : public Layer
{
public:
	static Scene *createScene();

	static SceneBegin *create();

	virtual bool init();

	// «–ªª”Œœ∑ΩÁ√Ê
	void beginGame(Ref *pRef, TouchEventType eEventType);
};

#endif

