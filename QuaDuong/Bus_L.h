#include"Console.h"
namespace Bus_L_1
{
	//ID
	const int ID = 0;
	//toa do
	int x = -25;
	int y = 12;
	//2 điểm để xét va chạm
	int triggerPointA_x;
	int triggerPointA_y;
	int triggerPointB_x;
	int triggerPointB_y;
	bool isDisplay = true;
/*	  __________________
     |   |    |    | |  \
	 |___|____|____|_|___\
     |             | |    \
	 `--(o)(o)--------(o)--'
	*/





	int matrix[5][24]
	{
		{ 32,32,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,32,32,32,32 },
		{ 32,179,32,32,32,179,32,32,32,32,179,32,32,32,32,179,32,179,32,32,92,32,32 },
		{ 32,179,95,95,95,179,95,95,95,95,179,95,95,95,95,179,95,179,95,95,95,92,32 },
		{ 32,179,32,32,32,32,32,32,32,32,32,32,32,32,32,179,32,179,32,32,32,32,92 },
		{ 32,217,45,45,40,111,41,40,111,41,45,45,45,45,45,45,45,40,111,41,45,45,190 },
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
		if(isDisplay)
			x++;
	}
}
namespace Bus_L_2
{
	//toa do
	const int ID = 1;
	int x = -25;
	int y = 12;
	//2 điểm để xét va chạm
	int triggerPointA_x;
	int triggerPointA_y;
	int triggerPointB_x;
	int triggerPointB_y;
	bool isDisplay = false;
	/*	  __________________
	|   |    |    | |  \
	|___|____|____|_|___\
	|             | |    \
	`--(o)(o)--------(o)--'
	*/

	int matrix[5][24]
	{
		{ 32,32,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,32,32,32,32 },
	{ 32,179,32,32,32,179,32,32,32,32,179,32,32,32,32,179,32,179,32,32,92,32,32 },
	{ 32,179,95,95,95,179,95,95,95,95,179,95,95,95,95,179,95,179,95,95,95,92,32 },
	{ 32,179,32,32,32,32,32,32,32,32,32,32,32,32,32,179,32,179,32,32,32,32,92 },
	{ 32,217,45,45,40,111,41,40,111,41,45,45,45,45,45,45,45,40,111,41,45,45,190 },
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
			x++;
	}
}
namespace Bus_L_3
{
	//toa do
	const int ID = 0;
	int x = -25;
	int y = 12;
	//2 điểm để xét va chạm
	int triggerPointA_x;
	int triggerPointA_y;
	int triggerPointB_x;
	int triggerPointB_y;
	bool isDisplay = true;
	/*	  __________________
	|   |    |    | |  \
	|___|____|____|_|___\
	|             | |    \
	`--(o)(o)--------(o)--'
	*/

	int matrix[5][24]
	{
		{ 32,32,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,32,32,32,32 },
	{ 32,179,32,32,32,179,32,32,32,32,179,32,32,32,32,179,32,179,32,32,92,32,32 },
	{ 32,179,95,95,95,179,95,95,95,95,179,95,95,95,95,179,95,179,95,95,95,92,32 },
	{ 32,179,32,32,32,32,32,32,32,32,32,32,32,32,32,179,32,179,32,32,32,32,92 },
	{ 32,217,45,45,40,111,41,40,111,41,45,45,45,45,45,45,45,40,111,41,45,45,190 },
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
			x++;
	}
}
namespace Bus_L_4
{
	//toa do
	const int ID = 1;
	int x = -25;
	int y = 12;
	//2 điểm để xét va chạm
	int triggerPointA_x;
	int triggerPointA_y;
	int triggerPointB_x;
	int triggerPointB_y;
	bool isDisplay = false;
	/*	  __________________
	|   |    |    | |  \
	|___|____|____|_|___\
	|             | |    \
	`--(o)(o)--------(o)--'
	*/

	int matrix[5][24]
	{
		{ 32,32,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,95,32,32,32,32 },
	{ 32,179,32,32,32,179,32,32,32,32,179,32,32,32,32,179,32,179,32,32,92,32,32 },
	{ 32,179,95,95,95,179,95,95,95,95,179,95,95,95,95,179,95,179,95,95,95,92,32 },
	{ 32,179,32,32,32,32,32,32,32,32,32,32,32,32,32,179,32,179,32,32,32,32,92 },
	{ 32,217,45,45,40,111,41,40,111,41,45,45,45,45,45,45,45,40,111,41,45,45,190 },
	};
	void Display()
	{
		if (isDisplay)
		{
			TextColor(14);
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
			x++;
	}
}