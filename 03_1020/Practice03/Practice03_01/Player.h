#ifndef PLAYER_H
#define PLAYER_H

#include "Base.h"	// ���N���X�̃w�b�_�[(�N���X�̐݌v�����C���N���[�h)

//-----------------------------
//�v���C���[�N���X
//-----------------------------
// �p������2 �N���X�̐錾�����Ɍp�����Ă��邱�Ƃ�\���R�[�h������
class Player : public Base
{
public:
	Player();
	~Player();

public:
	void Exec();
	void Draw();
};

#endif // !PLAYER_H
