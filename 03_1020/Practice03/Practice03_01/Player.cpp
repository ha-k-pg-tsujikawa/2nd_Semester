#include "Player.h"
#include <stdio.h>

Player::Player()
{
	printf("Player�̃R���X�g���N�^\n");
}

Player::~Player()
{
	printf("Player�̃f�X�g���N�^\n");
}

void Player::Exec()
{
	printf("Player��Exec\n");
}
void Player::Draw()
{
	printf("Player��Draw\n");
}
