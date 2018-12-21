#include "stdafx.h"
#include "GameScene.h"



GameScene::GameScene()
{
	ZeroCameraMgr->SetCameraOn();
	ZeroCameraMgr->SetSpeed(0);
	ZeroCameraMgr->SetPos(0, 0);
	Player = new ZeroSprite("Resouces/Image/Alpha.png");
	Background = new ZeroSprite("Resouces/Background/Background.png");
	IsRender = true;
}


GameScene::~GameScene()
{
}

void GameScene::Update(float eTime){
	ZeroIScene::Update(eTime);
	if (ZeroInputMgr->GetKey(VK_RIGHT) == INPUTMGR_KEYON){
		ZeroCameraMgr->SetPos(ZeroCameraMgr->Pos().x + 200 * eTime, ZeroCameraMgr->Pos().y);
	}

	if (ZeroInputMgr->GetKey(VK_LEFT) == INPUTMGR_KEYON){
		ZeroCameraMgr->SetPos(ZeroCameraMgr->Pos().x + -200 * eTime, ZeroCameraMgr->Pos().y);
	}

	if (ZeroInputMgr->GetKey(VK_UP) == INPUTMGR_KEYON){
		ZeroCameraMgr->SetPos(ZeroCameraMgr->Pos().x, ZeroCameraMgr->Pos().y + 200 * eTime);
	}

	if (ZeroInputMgr->GetKey(VK_DOWN) == INPUTMGR_KEYON){
		ZeroCameraMgr->SetPos(ZeroCameraMgr->Pos().x + 200 * eTime, ZeroCameraMgr->Pos().y + -200 * eTime);
	}
	if (ZeroInputMgr->GetKey('A') == INPUTMGR_KEYDOWN){
		IsRender = !IsRender;
	}
}

void GameScene::Render(){
	ZeroIScene::Render();
	Background->Render();
	if (IsRender){
		Player->Render();
	}
}