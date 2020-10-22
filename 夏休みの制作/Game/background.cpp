#include "stdafx.h"
#include "background.h"

Background::Background()
{

}

Background::~Background()
{

}

bool Background::Start()
{
	m_skinModelRender = NewGO<prefab::CSkinModelRender>(0);

	m_skinModelRender->Init(L"modelData/background.cmo");
	//�ÓI�����I�u�W�F�N�g���쐬�B
	m_phyStaticObject.CreateMesh(CVector3::Zero, CQuaternion::Identity, CVector3::One, m_skinModelRender);
	CVector3 scale = { 2.0f,2.0f,2.0f };
	m_skinModelRender->SetScale(scale);
	return true;
}

void Background::Update()
{
	
}