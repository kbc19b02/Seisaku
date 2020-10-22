#pragma once

#include "tkEngine/graphics/effect/tkEffect.h"
#include "tkEngine/physics/tkPhysicsGhostObject.h"
#include "tkEngine/character/tkCharacterController.h"
#include "tkEngine/debug/math/tkVectorRender.h"
#include "Player.h"
#include "background.h"
#include "score.h"
#include"Timer.h"

class Player;
class Gamecamera;
class Background;
class Target;
class Gamecrea;
class bullet;
class Score;
class Timer;

class Game : public IGameObject
{
public:
	Game();
	~Game();
	bool Start();
	void Update();
	Player* player = nullptr;
	Background* m_background = nullptr;
	Target* m_target = nullptr;
	Gamecamera*m_camera=nullptr;
    bullet*m_bullet=nullptr;
	Score* m_score = nullptr;
	Timer* m_timer=nullptr;

	prefab::CSoundSource* m_soundSourse = nullptr;
	prefab::CSkinModelRender* m_skinModelRender = nullptr;		//スキンモデルレンダラー。
	prefab::CSpriteRender* m_spriteRender = nullptr;
	
	//float m_timer;
	
};

