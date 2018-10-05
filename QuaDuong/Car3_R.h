#include"Console.h"


namespace Car3_R_1
{
	const int ID = 6;
	//toa do
	int x = MAXX;
	int y = 36;
	bool isDisplay = false;
	//2 điểm để xét va chạm
	int triggerPointA_x;
	int triggerPointA_y;
	int triggerPointB_x;
	int triggerPointB_y;
	/*
			 _____
		 ___/__|__\___
		|'      |     |
		'(o)------(o)''
	*/

	int matrix[4][16]
	{
		{ ' ',' ',' ',' ','_','_','_','_','_',' '},
		{ ' ','_','_','_','/','_','_','|','_','_','\\','_','_','_',' '},
		{ '|','\'',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ', '|', ' '},
		{ '\'', '(', '0', ')','-','-' ,'-' ,'-' ,'-' ,'-','(','0',')','\'','\'', ' '}
	};
	void Display()
	{
		TextColor(10);
		if (isDisplay)
		{
			for (int i = 0; i < 16; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					//su ly cham bien
					int temp = matrix[j][i];
					if (x + i <= 1 || (x + i >= MAXX))
					{
						temp = 32;
					}
					if (x < -24)
					{
						isDisplay = false;
					}
					GotoXY(i + x, j + y);
					putchar(temp);
				}
			}
			triggerPointA_x = x;
			triggerPointA_y = y;
			triggerPointB_x = x + 15;
			triggerPointB_y = y + 4;
		}
		else
		{
			triggerPointA_x = 0;
			triggerPointA_y = 0;
			triggerPointB_x = 0;
			triggerPointB_y = 0;
		}
		TextColor(7);
	}
	void Move()
	{
		if (isDisplay)
			x--;
	}
}

namespace Car3_R_2
{
	const int ID = 7;
	//toa do
	int x = MAXX;
	int y = 36;
	bool isDisplay = false;
	//2 điểm để xét va chạm
	int triggerPointA_x;
	int triggerPointA_y;
	int triggerPointB_x;
	int triggerPointB_y;
	/*
	_____
	___/__|__\___
	|'      |     |
	'(o)------(o)''
	*/

	int matrix[4][16]
	{
		{ ' ',' ',' ',' ','_','_','_','_','_',' ' },
	{ ' ','_','_','_','/','_','_','|','_','_','\\','_','_','_',' ' },
	{ '|','\'',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ', '|', ' ' },
	{ '\'', '(', '0', ')','-','-' ,'-' ,'-' ,'-' ,'-','(','0',')','\'','\'', ' ' }
	};
	void Display()
	{
		TextColor(10);
		if (isDisplay)
		{
			for (int i = 0; i < 16; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					//su ly cham bien
					int temp = matrix[j][i];
					if (x + i <= 1 || (x + i >= MAXX))
					{
						temp = 32;
					}
					if (x < -24)
					{
						isDisplay = false;
					}
					GotoXY(i + x, j + y);
					putchar(temp);
				}
			}
			triggerPointA_x = x;
			triggerPointA_y = y;
			triggerPointB_x = x + 15;
			triggerPointB_y = y + 4;
		}
		else
		{
			triggerPointA_x = 0;
			triggerPointA_y = 0;
			triggerPointB_x = 0;
			triggerPointB_y = 0;
		}
		TextColor(7);
	}
	void Move()
	{
		if (isDisplay)
			x--;
	}
}