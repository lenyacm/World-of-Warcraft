#include<iostream>
#include"Warriors.h"
#include"Others.h"

int  Warriors::total[2] = { 0 };
void Warriors::init(int input)
{
	total[0] = total[1] = input;
}
Warriors::Warriors(int newcolor, int newid, int newtype)
{
	printf("%.3d:00 %s %s %d born\n", now_time, s[newcolor], ss[newtype], newid);
	total[newcolor] -= need[newtype];
	id = newid;
	time = now_time;
	color = newcolor;
	type = newtype;
	hp = need[newtype];
	attack = _attack[newtype];
	kill = 0;
}
void Warriors::get_hp(int a)
{
	hp += a;
}