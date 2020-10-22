#include "stdafx.h"
#include "Title.h"
#include"Game.h"

Title::Title()
{
	m_spriteRender = NewGO<prefab::CSpriteRender>(0);
	m_spriteRender->Init(L"sprite/title.dds", 1280.0f,720.0f);
}

Title::~Title()
{
	DeleteGO(m_spriteRender);
	//DeleteGO(m_soundSourse);
	
}

bool Title::Start()
{
	return true;
}

void Title::Update()
{
	if (Pad(0).IsPress(enButtonX)) {
		NewGO<Game>(0, "Game");
		prefab::CSoundSource* m_soundSourse = NewGO<prefab::CSoundSource>(0);
		m_soundSourse->Init(L"sound/bgm.wav");
		m_soundSourse->Play(false);
		
		DeleteGO(this);
	}
}