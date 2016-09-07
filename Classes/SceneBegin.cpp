#include "SceneBegin.h"
#include "cocostudio/ActionTimeline/CSLoader.h"

using namespace cocos2d::ui;

Scene * SceneBegin::createScene()
{
	Scene *pScene = Scene::create();

	Layer *pLayer = SceneBegin::create();
	if (pLayer)
	{
		pScene->addChild(pLayer);
	}

	return pScene;
}

SceneBegin * SceneBegin::create()
{
	SceneBegin *pLayer = new SceneBegin;
	if (pLayer && pLayer->init())
	{
		pLayer->autorelease();
	}
	else
	{
		CC_SAFE_DELETE(pLayer);
	}

	return pLayer;
}

bool SceneBegin::init()
{
	if (!Layer::init())
	{
		return false;
	}

	Node *pSceneNode = CSLoader::createNode("Resources/csb/SceneBegin.csb");
	if (!pSceneNode)
	{
		return true;
	}
	addChild(pSceneNode);

	Button *pBtnBegin = dynamic_cast<Button *>(pSceneNode->getChildByName("Button_1"));
	if (pBtnBegin)
	{
		pBtnBegin->addTouchEventListener(this, toucheventselector(SceneBegin::beginGame));
	}

	return true;
}

void SceneBegin::beginGame(Ref *pRef, TouchEventType eEventType)
{
	if (eEventType == TOUCH_EVENT_ENDED)
	{
		CCLOG("begin game");
	}
}
