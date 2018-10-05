#include"Console.h"


namespace Car2_R_1
{
	const int ID = 4;
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
		,-----,
	.--'---:---`--,
	==(o)-----(o)==J
	*/

	int matrix[3][17]
	{
		{' ',' ',' ',' ',',','-','-','-','-','-',',',' '},
		{'.','-','-','\'','-','-','-',':','-','-','-','`','-','-', ',',' '},
		{'J','=','=','(','0',')','-','-','-','-','-','(','0',')','=','=',' ' },
	};
	void Display()
	{
		TextColor(11);
		if (isDisplay)
		{
			for (int i = 0; i < 17; i++)
			{
				for (int j = 0; j < 3; j++)
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
			triggerPointB_x = x + 16;
			triggerPointB_y = y + 3;
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

namespace Car2_R_2
{
	const int ID = 5;
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
	,-----,
	.--'---:---`--,
	==(o)-----(o)==J
	*/

	int matrix[3][17]
	{
		{ ' ',' ',' ',' ',',','-','-','-','-','-',',',' ' },
	{ '.','-','-','\'','-','-','-',':','-','-','-','`','-','-', ',',' ' },
	{ 'J','=','=','(','0',')','-','-','-','-','-','(','0',')','=','=',' ' },
	};
	void Display()
	{
		TextColor(11);
		if (isDisplay)
		{
			for (int i = 0; i < 17; i++)
			{
				for (int j = 0; j < 3; j++)
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
			triggerPointB_x = x + 16;
			triggerPointB_y = y + 3;
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