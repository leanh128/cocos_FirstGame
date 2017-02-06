#ifndef __SMILEFACE_SCENE_H__
#define __SMILEFACE_SCENE_H__

#include "cocos2d.h"

class SmileFace : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // implement the "static create()" method manually
	CREATE_FUNC(SmileFace);
};

#endif // __SMILEFACE_SCENE_H__