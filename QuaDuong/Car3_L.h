#include"Console.h"

namespace Car3_L_1
{
	//toa do
	const int ID = 6;
	int x = -25;
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
	   |      |     `| 
	   `(o)------(o)'
	*/

	int matrix[4][16]
	{
		{ ' ',' ',' ',' ',' ',' ','_','_','_','_','_'},
		{ ' ',' ','_','_','_','/','_','_','|','_','_','\\','_','_','_'},
		{ ' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ','`', '|' },
		{' ', '`', '(', '0', ')','-','-' ,'-' ,'-' ,'-' ,'-','(','0',')','\''}
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
					if (x > MAXX)
					{
						//spawedList::CacXeDaSpaw[0][ID - 1] = 0;
						isDisplay = false;
					}
					GotoXY(i + x, j + y);
					putchar(temp);
				}
			}
			triggerPointA_x = x + 1;
			triggerPointA_y = y + 1;
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
			x++;
	}
}

namespace Car3_L_2
{
	//toa do
	const int ID = 7;
	int x = -25;
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
	|      |     `|
	`(o)------(o)'
	*/

	int matrix[4][16]
	{
		{ ' ',' ',' ',' ',' ',' ','_','_','_','_','_' },
	{ ' ',' ','_','_','_','/','_','_','|','_','_','\\','_','_','_' },
	{ ' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ','`', '|' },
	{ ' ', '`', '(', '0', ')','-','-' ,'-' ,'-' ,'-' ,'-','(','0',')','\'' }
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
					if (x > MAXX)
					{
						//spawedList::CacXeDaSpaw[0][ID - 1] = 0;
						isDisplay = false;
					}
					GotoXY(i + x, j + y);
					putchar(temp);
				}
			}
			triggerPointA_x = x + 1;
			triggerPointA_y = y + 1;
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
			x++;
	}
}

namespace Car3_L_3
{
	//toa do
	const int ID = 6;
	int x = -25;
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
	|      |     `|
	`(o)------(o)'
	*/

	int matrix[4][16]
	{
		{ ' ',' ',' ',' ',' ',' ','_','_','_','_','_' },
	{ ' ',' ','_','_','_','/','_','_','|','_','_','\\','_','_','_' },
	{ ' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ','`', '|' },
	{ ' ', '`', '(', '0', ')','-','-' ,'-' ,'-' ,'-' ,'-','(','0',')','\'' }
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
			x++;
	}
}

namespace Car3_L_4
{
	//toa do
	const int ID = 7;
	int x = -25;
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
	|      |     `|
	`(o)------(o)'
	*/

	int matrix[4][16]
	{
		{ ' ',' ',' ',' ',' ',' ','_','_','_','_','_' },
	{ ' ',' ','_','_','_','/','_','_','|','_','_','\\','_','_','_' },
	{ ' ','|',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ','`', '|' },
	{ ' ', '`', '(', '0', ')','-','-' ,'-' ,'-' ,'-' ,'-','(','0',')','\'' }
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
			x++;
	}
}