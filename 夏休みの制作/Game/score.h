#pragma once

#include "tkEngine/graphics/effect/tkEffect.h"
#include "tkEngine/debug/math/tkVectorRender.h"

class Score :public IGameObject
{
public:
	Score();
	~Score();
	bool Start();
	void Update();
	CVector2 m_position = CVector2::Zero;
	//CVector4 m_color = CVector4::Gray;
	prefab::CFontRender* m_fontRender = nullptr;	//フォントレンダラー。
};

