#include"Console.h"

namespace Bus_R_1
{
	const int ID = 0;
	//toa do
	int x = MAXX;
	int y = 24;
	bool isDisplay = true;
	//2 điểm để xét va chạm
	int triggerPointA_x;
	int triggerPointA_y;
	int triggerPointB_x;
	int triggerPointB_y;
	/*   __________________
	    /  | |    |    |   |  
	   /___| |____|____|___|  
	  /    | |             |
	 '----(o)------(o)(o)--'
	*/

	int matrix[5][24]
	{
		{ 32,32,32,32,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,32,32 },
		{ 32,32,32,47,32,32,179,32,179,32,32,32,32,179,32,32,32,32,179,32,32,32,179,32 },
		{ 32,32,47,95,95,95,179,32,179,95,95,95,95,179,95,95,95,95,179,95,95,95,179,32 },
		{ 32,47,32,32,32,32,179,32,179,32,32,32,32,32,32,32,32,32,32,32,32,32,179,32 },
		{ 32,200,45,45,45,45,40,111,41,45,45,45,45,45,45,40,111,41,40,111,41,45,217,32},
	};
	void Display()
	{
		TextColor(14);
		if (isDisplay)
		{
			for (int i = 0; i < 24; i++)
			{
				for (int j = 0; j < 5; j++)
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
			triggerPointB_x = x + 23;
			triggerPointB_y = y + 5;
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

namespace Bus_R_2
{
	const int ID = 1;
	//toa do
	int x = MAXX;
	int y = 24;
	bool isDisplay = false;
	int triggerPointA_x;
	int triggerPointA_y;
	int triggerPointB_x;
	int triggerPointB_y;
	/*   __________________
	/  | |    |    |   |
	/___| |____|____|___|
	/    | |             |
	'----(o)------(o)(o)--'
	*/

	int matrix[5][24]
	{
		{ 32,32,32,32,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,32,32 },
	{ 32,32,32,47,32,32,179,32,179,32,32,32,32,179,32,32,32,32,179,32,32,32,179,32 },
	{ 32,32,47,95,95,95,179,32,179,95,95,95,95,179,95,95,95,95,179,95,95,95,179,32 },
	{ 32,47,32,32,32,32,179,32,179,32,32,32,32,32,32,32,32,32,32,32,32,32,179,32 },
	{ 32,200,45,45,45,45,40,111,41,45,45,45,45,45,45,40,111,41,40,111,41,45,217,32 },
	};
	void Display()
	{
		TextColor(14);
		if (isDisplay)
		{
			for (int i = 0; i < 24; i++)
			{
				for (int j = 0; j < 5; j++)
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
			triggerPointB_x = x + 23;
			triggerPointB_y = y + 5;
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