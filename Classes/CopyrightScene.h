#pragma once // 防止代码重复编译，与__的方式类似
#include "cocos2d.h"
#include "CopyrightLayer.h"

USING_NS_CC; // 简化版的 using namespace cocos2d

class CopyrightScene:public CCScene
{
public:
	CopyrightScene(void);
	~CopyrightScene(void);

	// 回调函数
	CREATE_FUNC(CopyrightScene);
	
	virtual bool init();

private:
	// 缓存图片文件
	void LoadPicResoureToCache();
	void LoadHeroProperty();

private:
	CopyrightLayer* _copyrightLayer;
};