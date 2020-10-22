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
	CVector3 m_position = CVector3::Zero;//���W
	CQuaternion m_rotation = CQuaternion::Identity;//��]
	CVector3 m_moveSpeed = CVector3::Zero;//���x
	CCharacterController m_charaCon;
};

