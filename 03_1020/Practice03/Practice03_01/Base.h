#ifndef BASE_H
#define BASE_H


class Base
{
public:
	Base();
	virtual ~Base();

public:
	// �����̋�`���ƁA�������������Ă��邩����
	bool CheckHit(int x, int y, int width, int height);

public:
	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);
	void SetSize(int width, int height);

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();
	int GetWidth();
	int GetHeight();

private:
	int m_Hp;
	float m_PosX;
	float m_PosY;
	float m_MoveSpeed;

	int m_Width;	// �����蔻��p�̕�
	int m_Height;	// �����蔻��p�̍���
};

#endif // !BASE_H
