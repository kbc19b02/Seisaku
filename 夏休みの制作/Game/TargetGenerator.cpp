#include "stdafx.h"
#include"Title.h"
#include "TargetGenerator.h"
#include"Target.h"
#include"Bullet.h"
#include"Game.h"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{
	DeleteGO(m_spriteRender);
	DeleteGO("Game");

}

void TargetGenerator::Update()
{
	//当たった的をカウントする
	 if (isClear ==false) {
	 if (m_targetCount == 12) {
			m_spriteRender = NewGO<prefab::CSpriteRender>(0);
			m_spriteRender->Init(L"sprite/GAMECLEAR.dds", 1280.0f, 720.0f);
			isClear = true;

		}
	}
	else {
		m_timer++;
		if (m_timer == 60) {
			NewGO<Title>(0);
			DeleteGO(this);
		}
	}
	//的をランダムに
	//int num;
	//m_timer++;
	//if (m_timer == 60) {
	//	m_timer = 0;
	//	Target* tar = NewGO<Target>(0);
	//	tar->m_position.y = 110.0f;
	//	tar->m_position.z = 260.0f;
	//	float t = Random().GetRandDouble();
	//	tar->m_position.x = CMath::Lerp(t, -90.0f, 90.0f);
	//}
	
}

bool TargetGenerator::Start()
{
	//上の段。
	Target* tar1 = NewGO<Target>(0,"tar1");
	tar1->m_position.x = -60.0f;
	tar1->m_position.y = 110.0f;
	tar1->m_position.z = 260.0f;
	
	Target* tar2 = NewGO<Target>(0,"tar2");
	tar2->m_position.x = -30.0f;
	tar2->m_position.y = 110.0f;
	tar2->m_position.z = 260.0f;

    Target* tar3 = NewGO<Target>(0,"tar3");
	tar3->m_position.x = 0.0f;
	tar3->m_position.y = 110.0f;
	tar3->m_position.z = 260.0f;

	Target* tar4 = NewGO<Target>(0,"tar4");
	tar4->m_position.x=30.0f;
	tar4->m_position.y=110.0f;
	tar4->m_position.z=260.0f;

	Target* tar5 = NewGO<Target>(0,"tar5");
	tar5->m_position.x = 60.0f;
	tar5->m_position.y = 110.0f;
	tar5->m_position.z = 260.0f;

	Target* tar6 = NewGO<Target>(0,"tar6");
	tar6->m_position.x = 90.0f;
	tar6->m_position.y = 110.0f;
	tar6->m_position.z = 260.0f;

	//下の段。
	Target* tar7 = NewGO<Target>(0,"tar7");
	tar7->m_position.x = -60.0f;
	tar7->m_position.y = 60.0f;
	tar7->m_position.z = 260.0f;

	Target* tar8 = NewGO<Target>(0,"tar8");
	tar8->m_position.x = -30.0f;
	tar8->m_position.y = 60.0f;
	tar8->m_position.z = 260.0f;

	Target* tar9 = NewGO<Target>(0,"tar9");
	tar9->m_position.x = 0.0f;
	tar9->m_position.y = 60.0f;
	tar9->m_position.z = 260.0f;

	Target* tar10 = NewGO<Target>(0,"tar10");
	tar10->m_position.x = 30.0f;
	tar10->m_position.y = 60.0f;
	tar10->m_position.z = 260.0f;
	
	Target* tar11 = NewGO<Target>(0,"tar11");
	tar11->m_position.x = 60.0f;
	tar11->m_position.y = 60.0f;
	tar11->m_position.z = 260.0f;

	Target* tar12 = NewGO<Target>(0,"tar12");
	tar12->m_position.x = 90.0f;
	tar12->m_position.y = 60.0f;
	tar12->m_position.z = 260.0f;
		
	return true;
}