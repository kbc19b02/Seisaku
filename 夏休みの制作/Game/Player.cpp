#include "stdafx.h"
#include"Game.h"
#include "Player.h"
#include"Title.h"
#include"bullet.h"

Player::Player()
{

}

Player::~Player()
{

}

bool Player::Start()
{
	skinModelRender = NewGO<prefab::CSkinModelRender>(0);
	skinModelRender->Init(L"modelData/unityChan.cmo");
	return true;
}

void Player::Update()
{
	CQuaternion qAddRot;
	//âÒì]ÇÃèâä˙âª?
	CQuaternion qRot = CQuaternion::Identity;

	CVector3 scale = { 1.0f,1.0f,1.0f };
	skinModelRender->SetScale(scale);
	//unityChanÇÃà⁄ìÆë¨ìxÅB
float fSpeed = 5.0f;
	m_moveSpeed.x = 0.0f;
	m_moveSpeed.z = 0.0f;
	m_moveSpeed.y = 0.0f;

	//if (Pad(0).IsPress(enButtonRight)) {
	//	m_position.x += fSpeed;
	//}
	//if (Pad(0).IsPress(enButtonLeft)) {
	//	m_position.x -= fSpeed;
	//}
	//if (Pad(0).IsPress(enButtonUp)) {
	//	m_position.y += fSpeed;
	//}
	//if (Pad(0).IsPress(enButtonDown)) {
	//	m_position.y -= fSpeed;
	//}

	if(GetAsyncKeyState ('W')) {
		m_moveSpeed.y += fSpeed;
		qRot.SetRotationDeg(CVector3::AxisX, 0.0f);
	}

	if (GetAsyncKeyState('S')) {
		m_moveSpeed.y -= fSpeed;
		qRot.SetRotationDeg(CVector3::AxisY, -180.0f);
	}

	if (GetAsyncKeyState('D')) {
		m_moveSpeed.x += fSpeed;
		qRot.SetRotationDeg(CVector3::AxisY, 90.0f);
	}
	if (GetAsyncKeyState('A')) {
		m_moveSpeed.x -= fSpeed;
		qRot.SetRotationDeg(CVector3::AxisY, -90.0f);
	}
	
m_position += m_moveSpeed;

//î≠éÀÅB
	if (Pad(0).IsTrigger(enButtonB)) {
		
		Bullet* m_bullet = NewGO<Bullet>(0,"Bullet");
		m_bullet->m_position = m_position;
		m_bullet->m_position.y += 40.0f;
		m_bullet->m_moveSpeed;
		
	//èeê∫
		prefab::CSoundSource* ss= NewGO<prefab::CSoundSource>(0);
		ss->Init(L"sound/gun.wav");
		ss->Play(false);
		
	}

	skinModelRender->SetPosition(m_position);
	skinModelRender->SetRotation(qRot);
	
}
