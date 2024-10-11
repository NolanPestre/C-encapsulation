#pragma once
class Alive
{
protected:
	float LifeMax;
	float LifeNow;

public:
	Alive(float);
	virtual float GetLifeM();
	virtual float GetLifeN();
	virtual void TakeDammage(float Dammage);
	virtual bool IsAlive();
};

