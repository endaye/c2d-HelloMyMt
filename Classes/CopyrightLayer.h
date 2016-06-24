#pragma once // 防止代码重复编译，与__的方式类似
#include "cocos2d.h"

USING_NS_CC; // 简化版的 using namespace cocos2d

class CopyrightLayer:public CCLayer
{
public:
	CopyrightLayer(void);
	~CopyrightLayer(void);

	CREATE_FUNC(CopyrightLayer);

	virtual bool init();

private:
	void gotoNextScene(float dt);
};