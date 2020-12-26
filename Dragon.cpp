#include<iostream>
#include"Dragon.h"
#include"Others.h"

Dragon::Dragon(int newcolor, int newid, int newtype) :Warriors(newcolor, newid, newtype)
{

}
void Dragon::happy(int _id)
{
	printf("%.3d:40 %s Dragon %d yelled in City %d\n", now_time, s[color], id, _id);
}