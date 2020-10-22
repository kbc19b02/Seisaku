#include "stdafx.h"
#include "Game.h"
#include "tkEngine/light/tkDirectionLight.h"
#include"Title.h"
#include"Player.h"
#include"background.h"
#include"Gamecamera.h"
#include"Target.h"
#include"TargetGenerator.h"
#include "bullet.h "
#include"score.h"
#include"Timer.h"
Game::Game()
{
	
	NewGO<TargetGenerator>(0, "TargetGenerator");
	/*NewGO<Title>(0, "m_bgmSource");*/
	m_camera = NewGO<Gamecamera>(0, "camera");
	player = NewGO<Player>(0, "pl");
	m_background = NewGO<Background>(0, "background");
	m_score = NewGO<Score>(0, "Score");
	m_timer = NewGO<Timer>(0, "timer");
	
	
}


Game::~Game()
{
	DeleteGO(m_camera);
	DeleteGO(player);
	DeleteGO(m_background);

}
bool Game::Start()
{

	//ÉJÉÅÉâÇê›íËÅB
	/*MainCamera().SetTarget({ 0.0f, 70.0f, 0.0f });
	MainCamera().SetNear(10.0f);
	MainCamera().SetFar(10000.0f);
	MainCamera().SetPosition({ 0.0f, 70.0f, 200.0f });
	MainCamera().Update();
	m_skinModelRender = NewGO<prefab::CSkinModelRender>(0);
	m_skinModelRender->Init(L"modelData/unityChan.cmo");
	*/
	return true;
};

void Game::Update()
{


}