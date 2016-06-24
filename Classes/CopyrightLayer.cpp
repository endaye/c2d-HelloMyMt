#include "CopyrightLayer.h"

CopyrightLayer::CopyrightLayer(void)
{}

CopyrightLayer::~CopyrightLayer(void)
{}

bool CopyrightLayer::init()
{
	bool bRef = false;
	do
	{
		CC_BREAK_IF(!CCLayer::init());

		CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
		CCSprite* logo = CCSprite::create("ui/logo.png");
		logo->setPosition(ccp(visibleSize.width/2, visibleSize.height/2));
		this->addChild(logo);
		this->schedule(schedule_selector(CopyrightLayer::gotoNextScene), 1.0);
		bRef = true;

	} while (0);
	return true;
}

void CopyrightLayer::gotoNextScene(float dt)
{}