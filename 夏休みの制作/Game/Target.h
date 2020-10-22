#pragma once
class Target:public IGameObject
{
public:
	Target();
	~Target();

	bool Start();
    void Update();
	int m_hitFlag = 0;
	int m_timer = 0;
	prefab::CSoundSource* m_soundSourse = nullptr;
	prefab::CSkinModelRender* m_skinModelRender = nullptr;
	CVector3 m_position = CVector3::Zero;
};

