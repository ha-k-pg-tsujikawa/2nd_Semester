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

// static‚Èƒƒ“ƒoŠÖ”‚Ìì‚è•û(’è‹`)
// ’Êí‚Ìƒƒ“ƒoŠÖ”‚Æ“¯‚¶(static‚ğ‚Â‚¯‚È‚­‚Ä‚æ‚¢)
void Character::Print()
{
	std::cout << m_CharacterNum << std::endl;
}