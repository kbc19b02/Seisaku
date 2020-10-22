#pragma once
class Title:public IGameObject
{
public:
	Title();
	~Title();

	bool Start();
	void Update();
	prefab::CSoundSource* m_soundSourse = nullptr;
	prefab::CSpriteRender* m_spriteRender = nullptr;
};

