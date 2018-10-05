#include"Console.h"

namespace Duong
{
	void Display()
	{
		GotoXY(1, 10);
		for (int i = 0; i < MAXX; i++)
		{
			putchar(177);
		}
		GotoXY(1, 40);
		for (int i = 0; i < MAXX; i++)
		{
			putchar(177);
		}
		GotoXY(1, 30);
		for (int i = 0; i < 99; i++)
		{
			if (i % 7 == 0)
			{
				putchar(32);
				putchar(32);
				putchar(32);
				putchar(32);
				putchar(32);
			}
			else
				putchar(219);
			
		}
		GotoXY(1, 20);
		for (int i = 0; i < 99; i++)
		{
			if (i % 7 == 0)
			{
				putchar(32);
				putchar(32);
				putchar(32);
				putchar(32);
				putchar(32);
			}
			else
				putchar(219);

		}
	}
}