#include"Console.h"

namespace Car_L_1
{
	const int ID = 2;
	//toa do
	int x = -25;
	int y = 12;
	bool isDisplay = false;
	//2 điểm để xét va chạm
	int triggerPointA_x;
	int triggerPointA_y;
	int triggerPointB_x;
	int triggerPointB_y;
	/*	  
		  ______     
		 /|_||_\`.__ 
		| _ _  _ _  \
		=`(0)--(0)-' 
	*/

	int matrix[4][14]
	{
		{ ' ',' ',' ','_','_','_','_','_','_'},
		{ ' ',' ','/','|','_','|','|','_','\\','`','.','_','_'},
		{ ' ','|',' ','_',' ','_',' ',' ','_',' ','_',' ',' ','\\'},
		{ ' ','=','`','(','0',')','-','-','(','0',')','-','\''},
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
			x++;
	}
}
namespace Car_L_2
{
	const int ID = 3;
	//toa do
	int x = -25;
	int y = 12;
	bool isDisplay = false;
	//2 điểm để xét va chạm
	int triggerPointA_x;
	int triggerPointA_y;
	int triggerPointB_x;
	int triggerPointB_y;
	/*
	______
	/|_||_\`.__
	| _ _  _ _  \
	=`(0)--(0)-'
	*/

	int matrix[4][14]
	{
		{ ' ',' ',' ','_','_','_','_','_','_' },
	{ ' ',' ','/','|','_','|','|','_','\\','`','.','_','_' },
	{ ' ','|',' ','_',' ','_',' ',' ','_',' ','_',' ',' ','\\' },
	{ ' ','=','`','(','0',')','-','-','(','0',')','-','\'' },
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
			x++;
	}
}
namespace Car_L_3
{
	const int ID = 2;
	//toa do
	int x = -25;
	int y = 12;
	bool isDisplay = false;
	//2 điểm để xét va chạm
	int triggerPointA_x;
	int triggerPointA_y;
	int triggerPointB_x;
	int triggerPointB_y;
	/*
	______
	/|_||_\`.__
	| _ _  _ _  \
	=`(0)--(0)-'
	*/

	int matrix[4][14]
	{
		{ ' ',' ',' ','_','_','_','_','_','_' },
	{ ' ',' ','/','|','_','|','|','_','\\','`','.','_','_' },
	{ ' ','|',' ','_',' ','_',' ',' ','_',' ','_',' ',' ','\\' },
	{ ' ','=','`','(','0',')','-','-','(','0',')','-','\'' },
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
			x++;
	}
}
namespace Car_L_4
{
	const int ID = 3;
	//toa do
	int x = -25;
	int y = 12;
	bool isDisplay = false;
	//2 điểm để xét va chạm
	int triggerPointA_x;
	int triggerPointA_y;
	int triggerPointB_x;
	int triggerPointB_y;
	/*
	______
	/|_||_\`.__
	| _ _  _ _  \
	=`(0)--(0)-'
	*/

	int matrix[4][14]
	{
		{ ' ',' ',' ','_','_','_','_','_','_' },
	{ ' ',' ','/','|','_','|','|','_','\\','`','.','_','_' },
	{ ' ','|',' ','_',' ','_',' ',' ','_',' ','_',' ',' ','\\' },
	{ ' ','=','`','(','0',')','-','-','(','0',')','-','\'' },
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
			x++;
	}
}