#include "stdafx.h"
#include "Gamecamera.h"
#include"Player.h"
#include"Title.h"
#include"Game.h"
Gamecamera::Gamecamera()
{

}
Gamecamera::~Gamecamera()
{
	DeleteGO(spriteRender);
}

bool Gamecamera::Start()
{
	//照準のスプライト表示
spriteRender = NewGO<prefab::CSpriteRender>(0);
	spriteRender->Init(L"sprite/dummy.dds",10.0f,10.0f,0.0f);
	
    m_position.y = 10.0f;


	CVector3 scale;
    scale.x =0.5f;
	scale.y =0.5f;
	//scale.z =1000.0f;

	MainCamera().SetNear(1.0f);
	MainCamera().SetFar(10000.0f);
	//ばねカメラの初期化。
	m_springCamera.Init(
		MainCamera(),		//ばねカメラの処理を行うカメラを指定する。
		1000.0f,			//カメラの移動速度の最大値。
		true,				//カメラと地形とのあたり判定を取るかどうかのフラグ。trueだとあたり判定を行う。
		5.0f				//カメラに設定される球体コリジョンの半径。第３引数がtrueの時に有効になる。
	);
	spriteRender->SetScale(scale);
	return true;
}

void Gamecamera::Update()
{
	Player* pl = FindGO<Player>("pl");
	//注視点を計算。
	CVector3 cameraTarget = pl->m_position;
	cameraTarget.z += 300.0f;
	cameraTarget.y += 90.0f;
	
	//視点を計算する。
	CVector3 toPos = { 0.0f,50.0f,-300.0f };
	CVector3 pos = cameraTarget + toPos;

	//視点の設定。
	//注視点の設定。
	MainCamera().SetPosition(pos);
	MainCamera().SetTarget(cameraTarget);
	//カメラの更新。
	MainCamera().Update();

}