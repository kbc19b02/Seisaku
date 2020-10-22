#pragma once
#include <tkEngine\physics\tkPhysicsStaticObject.h>
using namespace tkEngine;
class Background:public IGameObject
{
public:
	Background();
	~Background();

	bool Start();
	void Update();

	//�����蔻��
	CPhysicsStaticObject m_phyStaticObject;
	prefab::CSkinModelRender* m_skinModelRender;

	CLevel m_level;

};

