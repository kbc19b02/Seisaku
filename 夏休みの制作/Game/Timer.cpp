#include "stdafx.h"
#include "Timer.h"
#include "Game.h"

Timer::Timer()
{

}

Timer::~Timer()
{
	DeleteGO(fontRender);
}

bool Timer::Start()
{
	CVector2 m_position{ -620.0f,280.0f };
	CVector2 scale{ 150.0f,150.0f, };

	fontRender = NewGO<prefab::CFontRender>(0);
	fontRender->SetText(L"Time:0");
	fontRender->SetPosition(m_position);
		
	return true;
}

void Timer::Update()
{

}