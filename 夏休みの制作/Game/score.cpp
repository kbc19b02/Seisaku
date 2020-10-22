#include "stdafx.h"
#include "score.h"
#include "Game.h"

Score::Score()
{

}
Score::~Score()
{
	DeleteGO(m_fontRender);
}

bool Score::Start()
{   
	CVector2 m_position{ -620.0f,240.0f };
	CVector2 scale{ 150.0f,150.0f,};

	m_fontRender = NewGO<prefab::CFontRender>(0);
	m_fontRender->SetPosition(m_position);
	m_fontRender->SetText(L"Score:0");
	return true;
}

void Score::Update()
{   
	//m_fontRender->SetColor(m_color);
}