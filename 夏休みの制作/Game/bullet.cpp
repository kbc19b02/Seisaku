#include "stdafx.h"
#include "bullet.h"
#include"Player.h"
#include <Game.h>

Bullet::Bullet()
{

}

Bullet::~Bullet()
{
	DeleteGO(m_skinModelRender);
}

bool Bullet::Start()
{
	m_skinModelRender = NewGO<prefab::CSkinModelRender>(0);
	m_skinModelRender->Init(L"modelData/maru.cmo");
	
	CVector3 Scale;
	Scale.x = 8.0f;
	Scale.y = 8.0f;
	Scale.z = 8.0f;
	m_skinModelRender->SetScale(Scale);

m_moveSpeed.x = 0.0f;
m_moveSpeed.y = 0.0f;
m_moveSpeed.z = 10.0f;

//ポジション。
 m_position.y += 40.0f;
	
		return true;
}

void Bullet::Update()
{

//速度。
//float fSpeed = 100.0f;
	
m_skinModelRender->SetPosition(m_position);
m_position += m_moveSpeed;



//弾丸の寿命。
timer++;
if (timer == 60) {
	DeleteGO(this);
}
}
