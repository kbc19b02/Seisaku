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
	CVector3 m_position = CVector3::Zero;//ç¿ïW
	CQuaternion m_rotation = CQuaternion::Identity;//âÒì]
	CVector3 m_moveSpeed = CVector3::Zero;//ë¨ìx
	CCharacterController m_charaCon;
};

