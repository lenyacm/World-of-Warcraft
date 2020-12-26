#include <iostream>
#include <string>
#include"head.h"

using namespace std;

int main()
{
	//savefile=fopen("1.txt","w");
	//readfile=fopen("E:/cpp/1.txt","r");
	Functions Warcraft;
	int times, input;
	cin >> times;
	int total_time, already_time;
	for (int t = 1; t <= times; t++)
	{
		cin >> input >> City_sum >> total_time;
		Warriors::init(input);
		already_time = 0;
		game_over = false;
		now_time = -1;
		number[0] = number[1] = 0;
		order[0] = order[1] = 0;
		head_num[0] = head_num[1] = false;
		for (int i = 0; i <= 4; i++) {
			cin >> need[i];
		}
		for (int i = 0; i <= 4; i++) {
			cin >> _attack[i];
		}
		printf("Case:%d\n", t);
		for (int i = 0; i <= City_sum + 1; i++)
			Citys[i].creat(i);
		while (1)
		{
			now_time++;
			Warcraft.creat();
			already_time += 10;
			if (already_time > total_time) break;
			Warcraft.go_ahead();
			if (game_over) break;
			for (int i = 1; i <= City_sum; i++)
				Citys[i].input_hp();
			already_time += 20;
			if (already_time > total_time) break;
			for (int i = 1; i <= City_sum; i++)
				Citys[i].output_hp();
			already_time += 10;
			if (already_time > total_time) break;
			for (int i = 1; i <= City_sum; i++)
				Citys[i].beat();
			Warcraft.pride();
			already_time += 10;
			if (already_time > total_time) break;
			for (int i = 0; i <= 1; i++)
				printf("%.3d:50 %d elements in %s headquarter\n", now_time, Warriors::total[i], s[i]);
			already_time += 10;
			if (already_time > total_time) break;
		}
	}
	//fclose(savefile);
	//fclose(readfile);
	//system("pause");
	return 0;
}