#pragma once
#include "tkEngine/graphics/effect/tkEffect.h"
#include "tkEngine/debug/math/tkVectorRender.h"

class Timer :public IGameObject
{
public:
	Timer();
	~Timer();
	bool Start();
	void Update();
	CVector2 m_position = CVector2::Zero;
	
	prefab::CFontRender* fontRender = nullptr;
};

