#pragma once
class TargetGenerator:public IGameObject
{
public:
	TargetGenerator();
	~TargetGenerator();
	prefab::CSpriteRender* m_spriteRender = nullptr;
	bool Start();
	void Update();
	
	int m_targetCount = 0;
	int m_timer = 0;
	bool isClear = false;
};

