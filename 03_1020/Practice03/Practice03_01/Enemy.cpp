#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	// Enemy��p�ϐ�
	m_Routine = 0;

	printf("Enemy�̃R���X�g���N�^\n");
}

Enemy::~Enemy()
{
	printf("Enemy�̃f�X�g���N�^\n");
}

void Enemy::Exec()
{
	std::vector<int> v1(5, -1);

	for (int i = 0; i < v1.size(); i++)
	{
		std::cout << v1[i] << std::endl;
	}
}
void Enemy::Draw()
{

}

// �����̋�`���ƁA�������������Ă��邩����
bool Enemy::CheckHit(int x, int y, int width, int height)
{
	printf("Enemy�N���X��CheckHit()\n");

	// �I�[�o�[���C�h�����֐����g���ɂ͖��m�ɂ��Đ錾���ČĂяo��
	Base::CheckHit(x, y, width, height);

	// ��������̓����蔻��
	return false;
}