#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
public:
	Character();
	virtual ~Character();

	// static�ȃ����o�֐��̍���(�錾)
	// static �߂�l �֐���(����)
	static void Print();

private:
	static int m_CharacterNum;
};

#endif // !CHARACTER_H
