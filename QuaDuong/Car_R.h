#include"Console.h"


namespace Car_R_1
{
	const int ID = 2;
	//toa do
	int x = MAXX;
	int y = 12;
	bool isDisplay = false;
	//2 điểm để xét va chạm
	int triggerPointA_x;
	int triggerPointA_y;
	int triggerPointB_x;
	int triggerPointB_y;
	/*
		      ______
		  __.'/_||_|\
		 /  _ _  _ _ |
		  '-(0)--(0)'=
	*/

	int matrix[4][14]
	{
		{ ' ',' ',' ',' ',' ','_','_','_','_','_','_' },
		{ ' ','_','_','.','\'','/','_','|','|','_','|','\\',' ' },
		{ '/',' ',' ','_',' ','_',' ',' ','_',' ','_',' ','|',' ' },
		{ ' ','\'','-','(','0',')','-','-','(','0',')','\'','=',' ' },
	};
	void Display()
	{
		TextColor(12);
		y = 24;
		if (isDisplay)
		{
			for (int i = 0; i < 14; i++)
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
			triggerPointB_x = x + 13;
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

namespace Car_R_2
{
	const int ID = 3;
	//toa do
	int x = MAXX;
	int y = 12;
	bool isDisplay = false;
	//2 điểm để xét va chạm
	int triggerPointA_x;
	int triggerPointA_y;
	int triggerPointB_x;
	int triggerPointB_y;
	/*
	______
	__.'/_||_|\
	/  _ _  _ _ |
	'-(0)--(0)'=
	*/

	int matrix[4][14]
	{
		{ ' ',' ',' ',' ',' ','_','_','_','_','_','_' },
	{ ' ','_','_','.','\'','/','_','|','|','_','|','\\',' ' },
	{ '/',' ',' ','_',' ','_',' ',' ','_',' ','_',' ','|',' ' },
	{ ' ','\'','-','(','0',')','-','-','(','0',')','\'','=',' ' },
	};
	void Display()
	{
		TextColor(12);
		if (isDisplay)
		{
			for (int i = 0; i < 14; i++)
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
			triggerPointB_x = x + 13;
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