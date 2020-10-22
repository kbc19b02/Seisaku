#include "stdafx.h"
#include "Gamecamera.h"
#include"Player.h"
#include"Title.h"
#include"Game.h"
Gamecamera::Gamecamera()
{

}
Gamecamera::~Gamecamera()
{
	DeleteGO(spriteRender);
}

bool Gamecamera::Start()
{
	//�Ə��̃X�v���C�g�\��
spriteRender = NewGO<prefab::CSpriteRender>(0);
	spriteRender->Init(L"sprite/dummy.dds",10.0f,10.0f,0.0f);
	
    m_position.y = 10.0f;


	CVector3 scale;
    scale.x =0.5f;
	scale.y =0.5f;
	//scale.z =1000.0f;

	MainCamera().SetNear(1.0f);
	MainCamera().SetFar(10000.0f);
	//�΂˃J�����̏������B
	m_springCamera.Init(
		MainCamera(),		//�΂˃J�����̏������s���J�������w�肷��B
		1000.0f,			//�J�����̈ړ����x�̍ő�l�B
		true,				//�J�����ƒn�`�Ƃ̂����蔻�����邩�ǂ����̃t���O�Btrue���Ƃ����蔻����s���B
		5.0f				//�J�����ɐݒ肳��鋅�̃R���W�����̔��a�B��R������true�̎��ɗL���ɂȂ�B
	);
	spriteRender->SetScale(scale);
	return true;
}

void Gamecamera::Update()
{
	Player* pl = FindGO<Player>("pl");
	//�����_���v�Z�B
	CVector3 cameraTarget = pl->m_position;
	cameraTarget.z += 300.0f;
	cameraTarget.y += 90.0f;
	
	//���_���v�Z����B
	CVector3 toPos = { 0.0f,50.0f,-300.0f };
	CVector3 pos = cameraTarget + toPos;

	//���_�̐ݒ�B
	//�����_�̐ݒ�B
	MainCamera().SetPosition(pos);
	MainCamera().SetTarget(cameraTarget);
	//�J�����̍X�V�B
	MainCamera().Update();

}