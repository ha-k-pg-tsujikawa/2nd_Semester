#include<iostream>
#include"Character.h"

int Character::m_CharacterNum = 0;

Character::Character()
{
	m_CharacterNum++;
}

Character::~Character()
{
	m_CharacterNum--;
}

// static�ȃ����o�֐��̍���(��`)
// �ʏ�̃����o�֐��Ɠ���(static�����Ȃ��Ă悢)
void Character::Print()
{
	std::cout << m_CharacterNum << std::endl;
}