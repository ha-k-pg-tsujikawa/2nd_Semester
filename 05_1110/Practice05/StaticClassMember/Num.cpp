#include<iostream>
#include "Num.h"

// 3.static�ȃ����o�ϐ��͂��炩���߁A�ȉ��̂悤�Ɏ��̉������Ă���
// �^�� �N���X��::�ϐ���(= �����l)
// ���� : ���̂�cpp���ɏ���
int Num::m_Num = 0;

Num::Num(int num)
// 1.static�ȃ����o�ϐ��̓C�j�V�����C�U���g���ď��������邱�Ƃ��ł��Ȃ�
//	:m_Num(num)
{
	// 2.�R���p�C�����̃G���[�͏o�Ȃ�
	// �������A���̂��錾����Ă��Ȃ��ƃ����N�̃G���[���o�Ă��܂�
	m_Num = num;
}

void Num::Print()
{
	std::cout << m_Num << std::endl;
}
