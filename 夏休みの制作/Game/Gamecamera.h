#pragma once
#include <tkEngine\camera\tkSpringCamera.h>
class Player;

class Gamecamera:public IGameObject
{
public:
	Gamecamera();
	~Gamecamera();
	bool Start();
	void Update();

	Player* m_player;
	CVector3 m_toCameraPos;
	CSpringCamera m_springCamera; //‚Î‚ËƒJƒƒ‰B
    prefab:: CSpriteRender* spriteRender;
	CVector3 m_position = CVector3::Zero;
};

