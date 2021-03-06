#pragma once
class Player:public IGameObject
{
public:
	Player();
	~Player();

	bool Start();
	void Update();
	int m_timer = 0;
	prefab::CSkinModelRender* skinModelRender;
	CVector3 m_position = CVector3::Zero;//座標
	CQuaternion m_rotation = CQuaternion::Identity;//回転
	CVector3 m_moveSpeed = CVector3::Zero;//速度
	CCharacterController m_charaCon;
};

