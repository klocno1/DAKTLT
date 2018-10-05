#include"Console.h"

namespace Car2_L_1
{
	//toa do
	const int ID = 4;
	int x = -25;
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
		{ ' ',' ',' ',' ',' ',',','-','-','-','-','-',','},
		{ ' ','\,','-','-','\'','-','-','-',':','-','-','-','`','-','-', ',' },
		{ ' ','=','=','(','0',')','-','-','-','-','-','(','0',')','=','=','J'},
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
					if (x > MAXX)
					{
						
						isDisplay = false;
					}
					GotoXY(i + x, j + y);
					putchar(temp);
				}
			}
			triggerPointA_x = x + 1;
			triggerPointA_y = y + 1;
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
			x++;
	}
}

namespace Car2_L_2
{
	//toa do
	const int ID = 5;
	int x = -25;
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
		{ ' ',' ',' ',' ',' ',',','-','-','-','-','-',',' },
	{ ' ','\,','-','-','\'','-','-','-',':','-','-','-','`','-','-', ',' },
	{ ' ','=','=','(','0',')','-','-','-','-','-','(','0',')','=','=','J' },
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
					if (x > MAXX)
					{
						
						isDisplay = false;
					}
					GotoXY(i + x, j + y);
					putchar(temp);
				}
			}
			triggerPointA_x = x + 1;
			triggerPointA_y = y + 1;
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
			x++;
	}
}

namespace Car2_L_3
{
	//toa do
	const int ID = 4;
	int x = -25;
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
		{ ' ',' ',' ',' ',' ',',','-','-','-','-','-',',' },
	{ ' ','\,','-','-','\'','-','-','-',':','-','-','-','`','-','-', ',' },
	{ ' ','=','=','(','0',')','-','-','-','-','-','(','0',')','=','=','J' },
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
					if (x > MAXX)
					{
						//spawedList::CacXeDaSpaw[2][ID - 1] = 0;
						isDisplay = false;
					}
					GotoXY(i + x, j + y);
					putchar(temp);
				}
			}
			triggerPointA_x = x + 1;
			triggerPointA_y = y + 1;
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
			x++;
	}
}

namespace Car2_L_4
{
	//toa do
	const int ID = 5;
	int x = -25;
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
		{ ' ',' ',' ',' ',' ',',','-','-','-','-','-',',' },
	{ ' ','\,','-','-','\'','-','-','-',':','-','-','-','`','-','-', ',' },
	{ ' ','=','=','(','0',')','-','-','-','-','-','(','0',')','=','=','J' },
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
					if (x > MAXX)
					{
						//spawedList::CacXeDaSpaw[2][ID - 1] = 0;
						isDisplay = false;
					}
					GotoXY(i + x, j + y);
					putchar(temp);
				}
			}
			triggerPointA_x = x + 1;
			triggerPointA_y = y + 1;
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
			x++;
	}
}