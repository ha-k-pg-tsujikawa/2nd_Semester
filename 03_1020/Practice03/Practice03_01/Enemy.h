#ifndef ENEMY_H
#define ENEMY_H

#include "Base.h"	// ���N���X�̃w�b�_�[(�N���X�̐݌v�����C���N���[�h)
#include <vector>
#include <iostream>

//-----------------------------
//�G�l�~�[�N���X
//-----------------------------
// �p������2 �N���X�̐錾�����Ɍp�����Ă��邱�Ƃ�\���R�[�h������
class Enemy : public Base
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();

private:
	// Enemy��p�ϐ�
	int m_Routine;	// �s�����[�`���Ǘ��ϐ�
};

#endif // !ENEMY_H
