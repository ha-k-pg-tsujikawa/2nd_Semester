#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
public:
	Character();
	virtual ~Character();

	// static‚Èƒƒ“ƒoŠÖ”‚Ìì‚è•û(éŒ¾)
	// static –ß‚è’l ŠÖ”–¼(ˆø”)
	static void Print();

private:
	static int m_CharacterNum;
};

#endif // !CHARACTER_H
