#ifndef ENEMY_H
#define ENEMY_H

// namespace ���O��Ԃ̏�����
// namespace namespace�̖��O
// {
//		�O���[�o���ϐ���A�N���X��`�Ȃ�
// }

// Enemy���O���
namespace Enemy
{
	static const int Max = 10;	// �G�ő吔

	// ���ꖼ�O��Ԃɂ���ꍇ�� namespace��::���ȗ����邱�Ƃ��ł���
	// �����͈͂̎����X�R�[�v�ƌĂ�
	void PrintMax(void)
	{
		printf("�G�̍ő吔 = %d\n", Max);
	}
}

#endif // !ENEMY_H
