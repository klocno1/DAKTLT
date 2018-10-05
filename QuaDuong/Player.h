#include"Console.h"
#include"GameState.h"

namespace Player
{
	int x = MAXX /2;
	int y = 41 ;
	int triggerPointX;
	int triggerPointY;
	bool AnimUp = false;
	bool AnimHoz = false;
	bool isVerticle = false; 
	bool reset = false;
	int prx = 1, pry = 1;
	bool isDead = false;

	int matrix[4][5]
	{
		{32,32,233,32},
		{32,47,219,92},
		{32,47,169,92}
	};

	/*  
	  #0#
	#0###0#
	  #0#*/

	int matrixE[3][7]
	{
		{ 32,32,238,229,248,32,32},
		{ 238,236,235,234,248,230,232},
		{ 32,32,248,230,232,32,32 }
	};

	void animation()
	{
		if (isVerticle)
		{
			if (AnimUp)
			{
				matrix[1][1] = 124;
				matrix[1][3] = 39;
				matrix[2][1] = 39;
				matrix[2][3] = 124;
			}
			else
			{
				matrix[1][1] = 39;
				matrix[1][3] = 124;
				matrix[2][1] = 124;
				matrix[2][3] = 39;
			}
		}
		else
		{
			if (AnimHoz)
			{
				matrix[1][1] = 47;
				matrix[1][3] = 92;
				matrix[2][1] = 124;
				matrix[2][3] = 124;
			}
			else
			{
				matrix[1][1] = 124;
				matrix[1][3] = 124;
				matrix[2][1] = 47;
				matrix[2][3] = 92;
			}
		}
	}

	void Display()
	{
		if (!isDead)
		{
			TextColor(15);
			animation();
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					GotoXY(i + x, j + y);
					putchar(matrix[j][i]);
					triggerPointX = x + 1;
					triggerPointY = y + 2;
				}
			}
			TextColor(7);
		}
		else
		{
			TextColor(ColorCode_Red);
			for (int i = 0; i < 7; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					GotoXY(i + x, j + y);
					putchar(matrixE[j][i]);
					triggerPointX = x + 1;
					triggerPointY = y + 2;
				}
			}
			TextColor(ColorCode_DarkWhite);
		}

	}
	bool pause;
	void DrawLastPos(int x, int y)
	{
		if (prx != 1 and pry != 1)
		{
			if (x == prx and y == pry)
			{
				pause = true;				
			}
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					GotoXY(i + prx, j + pry);
					putchar(32);
				}
			}
		}
		prx = x; pry = y;
	}

	void Control() //Dieu khien nguoi choi
	{	
		if (!isDead)
		{
			if (reset)
			{
				DrawLastPos(x, y);

				x = MAXX / 2;
				y = 41;
				reset = false;
			}
			else
			{
				if (GetAsyncKeyState(VK_UP))
				{
					y--;
					AnimUp = !AnimUp;
					isVerticle = true;
				}
				if (GetAsyncKeyState(VK_LEFT) && x >= 0)
				{
					x--;
					AnimHoz = !AnimHoz;
					isVerticle = false;
				}
				if (GetAsyncKeyState(VK_RIGHT) && x <= MAXX - 4)
				{
					x++;
					AnimHoz = !AnimHoz;
					isVerticle = false;
				}
			}
		}
				
	}
}