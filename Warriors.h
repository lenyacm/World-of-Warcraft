#ifndef _WARRIORS_H_
#define _WARRIORS_H_

class Warriors {//Œ‰ ø
public:
	Warriors() = default;
	Warriors(int newcolor, int newid, int newtype);
	void get_hp(int);
	static void init(int input);
	static int total[2];
	virtual void twice() {}
	virtual void happy(int) {}
	friend class City;
protected:
	int type;
	int id;
	int hp;
	int time;
	int color;
	int attack;
	int kill;
};
#endif // !_WARRIORS_H_