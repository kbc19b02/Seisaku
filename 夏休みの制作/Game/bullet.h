#pragma once
class Bullet:public IGameObject
{
public:
	Bullet();
	~Bullet();
	bool Start();
	void Update();
	CVector3 Scale = CVector3::Zero;
	CVector3 m_position = CVector3::Zero;
	CVector3 m_moveSpeed = CVector3::Zero;
	prefab::CSkinModelRender* m_skinModelRender = nullptr; 
	Bullet* bullet = nullptr;

	int timer = 0;
};

