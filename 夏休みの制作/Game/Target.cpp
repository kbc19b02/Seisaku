#include "stdafx.h"
#include "Target.h"
#include"bullet.h"
#include"Game.h"
#include"Player.h"
#include"TargetGenerator.h"
#include "tkEngine/gameObject/tkGameObjectManager.h"

Target::Target()
{

}
Target::~Target()
{
	DeleteGO(m_skinModelRender);
	DeleteGO(m_soundSourse);

}

bool Target::Start()
{
	
	m_skinModelRender = NewGO<prefab::CSkinModelRender>(0);
	m_skinModelRender->Init(L"modelData/Target.cmo"/*, nullptr, 0*/);
	
	
	/*m_position.x = 0.0f;
	m_position.y = 90.0f;
	m_position.z = 100.0f;*/

	CVector3 scale;
	scale.x = 5.0f;
	scale.y = 5.0f;
	scale.z = 5.0f;
	m_skinModelRender->SetScale(scale);
    m_skinModelRender->SetPosition(m_position);
	return true;
}

void Target::Update()
{
	//Target* m_target = FindGO<Target>("tar1");
	
	//弾と的の距離計算。

	QueryGOs<Bullet>("Bullet", [&](Bullet* bullet) {
		CVector3 diff = m_position - bullet->m_position;
		if (diff.Length() < 15.0f) {
			DeleteGO(this);

			//int i;

			TargetGenerator* targetGenerator = FindGO<TargetGenerator>("TargetGenerator");
			targetGenerator->m_targetCount++;
			DeleteGO(this);

				//if (Pad(0).IsPress(enButtonA)) {
				//	m_hitFlag = 1;
				//}

				//if (m_hitFlag == 0) {
				//	//的を表示する
				//	m_skinModelRender->SetActiveFlag(true);
				//}
				//else if (m_hitFlag == 1) {
				//	m_skinModelRender->SetActiveFlag(false);
				//}
			return true;
		}
	});
}