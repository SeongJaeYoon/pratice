#include "stdafx.h"
#include "MainScene.h"
#include <iostream>



MainScene::MainScene()
{
	enemy = new ZeroSprite("Resouces/Image/Beta.png");
	button = new ZeroSprite("Resouces/Image/button.png");
			
	enemy->SetPos(100, 0);
	button->SetPos(500, 500);

}


MainScene::~MainScene()
{
}

void MainScene::Update(float eTime){
	ZeroIScene::Update(eTime);/*
	enemy->AddPos(100 * eTime, 100 * eTime);
	enemy->AddScale(0.001, 0.001);
	enemy->AddRot(10);*/
	if (ZeroInputMgr->GetKey(VK_LBUTTON) == INPUTMGR_KEYDOWN){
		if (button->IsOverlapped(ZeroInputMgr->GetClientPoint())){
			ZeroSceneMgr->ChangeScene(new GameScene());
			return;
		}
	}
}

void MainScene::Render(){
	ZeroIScene::Render();
	enemy->Render();
	button->Render();
}