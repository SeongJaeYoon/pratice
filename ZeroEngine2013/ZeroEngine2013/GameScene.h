#pragma once
#include "D:\10615À±½ÂÀç\ZeroEngine2013\ZeroEngine2013\include\ZeroIScene.h"
#include "ZeroSprite.h"
#include "ZeroInputManager.h"
#include "ZeroCameraManager.h"

class GameScene :
	public ZeroIScene
{
public:
	bool IsRender;
	GameScene();
	~GameScene();
	void Update(float eTime);
	void Render();
	ZeroSprite *Player;
	ZeroSprite *Background;
};

