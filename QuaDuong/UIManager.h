#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Console.h"
#include "GameState.h"
using namespace std;
using namespace GameState;

namespace GUI
{
	bool quitGame = false;

	void drawScorePanel()
	{
		TextColor(ColorCode_Cyan);
		GotoXY(1, 4);
		for (int i = 0; i < 50; i++)
		{
			putchar(205);
		}
		GotoXY(1, 2);
		for (int i = 0; i < 50; i++)
		{
			putchar(205);
		}
		GotoXY(1, 2); putchar(201);
		GotoXY(1, 3); putchar(186);
		GotoXY(1, 4); putchar(200);
		GotoXY(50, 2); putchar(187);
		GotoXY(50, 3); putchar(186);
		GotoXY(50, 4); putchar(188);
		TextColor(ColorCode_DarkWhite);
	}
	void drawScore(int score, float time, double timeToStopLand)
	{
		GotoXY(2, 3);
		TextColor(ColorCode_White);
		printf("SCORE: %d", score);
		GotoXY(16, 3);
		printf("TIME: %0.001f", time);
		GotoXY(30, 3);
		if(score <= 8)
			printf("Dung lai sau -.--");
		else
			printf("Dung lai sau %0.f   ", (timeToStopLand - 5)*-1);
		TextColor(ColorCode_DarkWhite);
	}
	int select = 0;
	void SetUpMainMenuPanel()
	{
		select = -1;
		for (int x = 1; x <= 95; x++)
		{
			for (int y = 1; y <= 15; y++)
			{
				GotoXY(31 + x, 24 + y);
				if (y == 1 or y == 15)
				{
					putchar(205);
				}
				if ((x == 1 and y > 13 and y < 5) or (x == 95 and y > 15 and y < 5))
				{
					putchar(186);
				}
			}
		}
		GotoXY(127, 39); putchar(32);
		GotoXY(127, 25); putchar(32);
		GotoXY(126, 39); putchar(188);
		GotoXY(126, 25); putchar(187);
		GotoXY(32, 39); putchar(200);
		GotoXY(32, 25); putchar(201);
		TextColor(ColorCode_Red);
		GotoXY(74, 27); printf("MAIN MENU");
		TextColor(ColorCode_White);
		GotoXY(140, 42); printf("HOC LAI studio");
		GotoXY(2, 42); printf("KTLT - HCMUS - Nhom Loc Hai");
	}
	int timeCounter = 0;
	bool DisplayLoadGamePanel();
	bool DisplayMainMenuPanel()
	{
		TextColor(ColorCode_White);
		GotoXY(1, 36); putchar(186);
		GotoXY(MAXX, 35); putchar(186);
		switch (select)
		{
		case 0:
			TextColor(ColorCode_Green);
			GotoXY(70, 31); printf("%c TIEP TUC CHOI     ", 175);
			TextColor(ColorCode_White);
			GotoXY(70, 33); printf(" CHOI MOI         ");
			TextColor(ColorCode_White);
			GotoXY(70, 35); printf(" THOAT      ");
			TextColor(ColorCode_Yellow);
			break;
		case 1:
			TextColor(ColorCode_White);
			GotoXY(70, 31); printf(" TIEP TUC CHOI        ");
			TextColor(ColorCode_Green);
			GotoXY(70, 33); printf("%c CHOI MOI          ", 175);
			TextColor(ColorCode_White);
			GotoXY(70, 35); printf(" THOAT      ");
			TextColor(ColorCode_Blue);
			break;
		case 2:
			TextColor(ColorCode_White);
			GotoXY(70, 31); printf(" TIEP TUC CHOI      ");
			TextColor(ColorCode_White);
			GotoXY(70, 33); printf(" CHOI MOI       ");
			TextColor(ColorCode_Green);
			GotoXY(70, 35); printf("%c THOAT       ", 175);
			TextColor(ColorCode_Pink);
			break;
		default:
			break;
		}
		if (GetAsyncKeyState(VK_UP))
		{
			timeCounter++;
			if(timeCounter == 4)
				select--;
		}
		else
		{
			if (GetAsyncKeyState(VK_DOWN))
			{
				timeCounter++;
				if (timeCounter == 4)
					select ++;
			}
			else
			{
				timeCounter = 0;
			}
		}
		if (inputKey() == 13)
		{
			switch (select)
			{
			case 0:
				if (DisplayLoadGamePanel())
				{
					return true;
				}
				else
				{
					GameState::ResetGame();
					return true;
				}
			case 1:
				GameState::ResetGame();
				return true;
				break;
			case 2:
				exit(0);
				break;
			default:
				break;
			}
		}
		if (select > 2)
			select = 2;
		else
			if (select < 0)
				select = 0;
		return false;
	}

	void DisplaySaveGamePanel()
	{
		TextColor(ColorCode_Cyan);
		for (int x = 1; x <= 60; x++)
		{
			for (int y = 1; y <= 20; y++)
			{
				GotoXY(50 + x, 10 + y);

				if (y == 1 or y == 20)
				{
					putchar(205);
				}
				if (x == 1 or x == 60)
				{
					putchar(186);
				}
				else
				{
					putchar(32);
				}
			}
		}
		GotoXY(51, 11); putchar(201);
		GotoXY(110, 11); putchar(187);
		GotoXY(111, 11); putchar(32);
		GotoXY(51, 30); putchar(200);
		GotoXY(110, 30); putchar(188);
		GotoXY(111, 30); putchar(32);
		TextColor(ColorCode_Red);
		GotoXY(75, 13); printf("%s", "SAVE GAME");
		TextColor(ColorCode_Yellow);
		GotoXY(70, 17); printf("Hay nhap ten cua ban: ");
		string name;
		fflush(stdin);
		cin >> name;
		ofstream file;
		file.open(name);
		GameState::Save(file);
		file.close();
		TextColor(ColorCode_Green);
		GotoXY(60, 20); printf("Da luu game thanh cong voi ten: %s", name.c_str());
		TextColor(ColorCode_White);
		GotoXY(67, 29);
		system("pause");
	}

	bool DisplayLoadGamePanel()
	{
		TextColor(ColorCode_Cyan);
		for (int x = 1; x <= 60; x++)
		{
			for (int y = 1; y <= 20; y++)
			{
				GotoXY(50 + x, 10 + y);

				if (y == 1 or y == 20)
				{
					putchar(205);
				}
				if (x == 1 or x == 60)
				{
					putchar(186);
				}
				else
				{
					putchar(32);
				}
			}
		}
		GotoXY(51, 11); putchar(201);
		GotoXY(110, 11); putchar(187);
		GotoXY(111, 11); putchar(32);
		GotoXY(51, 30); putchar(200);
		GotoXY(110, 30); putchar(188);
		GotoXY(111, 30); putchar(32);
		TextColor(ColorCode_Red);
		GotoXY(75, 13); printf("%s", "LOAD GAME");
		TextColor(ColorCode_Yellow);
		GotoXY(70, 17); printf("Hay nhap ten cua ban: ");
		string name;
		fflush(stdin);
		cin >> name;
		ifstream file;
		file.open(name, ios::in);
		if (file.fail())
		{
			TextColor(ColorCode_Red);
			GotoXY(47, 20); printf("Khong ton tai nguoi dung nay, ban se duoc dua vao choi mot game moi!");
			TextColor(ColorCode_Yellow);
			file.close();
			GotoXY(67, 29);
			system("pause");
			return false;
		}		
		GameState::ResetGame();
		GameState::Load(file,name);
		file.close();
		TextColor(ColorCode_Green);
		GotoXY(60, 20); printf("Da load game thanh cong voi ten: %s", name.c_str());
		TextColor(ColorCode_White);
		GotoXY(67, 29);
		system("pause");
		return true;
	}

	bool DisplayPausePanel()
	{
		TextColor(ColorCode_Cyan);
		for (int x = 1; x <= 60; x++)
		{
			for (int y = 1; y <= 20; y++)
			{
				GotoXY(50 + x, 10 + y);
				
				if (y == 1 or y == 20)
				{
					putchar(205);
				}
				if (x == 1 or x == 60)
				{
					putchar(186);
				}
				else
				{
					putchar(32);
				}
			}
		}
		GotoXY(51, 11); putchar(201);
		GotoXY(110, 11); putchar(187);
		GotoXY(111, 11); putchar(32);
		GotoXY(51, 30); putchar(200);
		GotoXY(110, 30); putchar(188);
		GotoXY(111, 30); putchar(32);
		TextColor(ColorCode_Red);
		GotoXY(77, 13); printf("PAUSE");
		TextColor(ColorCode_Yellow);
		GotoXY(75, 17); printf("Tiep tuc ?");
		TextColor(ColorCode_White);
		GotoXY(77, 20); printf("KHONG");
		GotoXY(77, 22); printf("CO");
		GotoXY(77, 24); printf("LUU VA THOAT");
		GotoXY(56, 29); printf("Nhan nut len xuong de thay doi, nhan enter de chon");
		while (true)
		{		
			switch (select)
			{
			case 0:
				TextColor(ColorCode_Green);
				GotoXY(74, 20); printf("%c KHONG     ", 175);
				TextColor(ColorCode_White);
				GotoXY(74, 22); printf(" CO         ");
				TextColor(ColorCode_White);
				GotoXY(74, 24); printf(" LUU VA THOAT      ");
				TextColor(ColorCode_Yellow);
				break;
			case 1:
				TextColor(ColorCode_White);
				GotoXY(74, 20); printf(" KHONG        ");
				TextColor(ColorCode_Green);
				GotoXY(74, 22); printf("%c CO          ", 175);
				TextColor(ColorCode_White);
				GotoXY(74, 24); printf(" LUU VA THOAT      ");
				TextColor(ColorCode_Blue);
				break;
			case 2:
				TextColor(ColorCode_White);
				GotoXY(74, 20); printf(" KHONG      ");
				TextColor(ColorCode_White);
				GotoXY(74, 22); printf(" CO       ");
				TextColor(ColorCode_Green);
				GotoXY(74, 24); printf("%c LUU VA THOAT       ", 175);
				TextColor(ColorCode_Pink);
				break;
			default:
				break;
			}
			if (GetAsyncKeyState(VK_UP))
			{
				timeCounter++;
				if (timeCounter == 4)
					select--;
			}
			else
			{
				if (GetAsyncKeyState(VK_DOWN))
				{
					timeCounter++;
					if (timeCounter == 4)
						select++;
				}
				else
				{
					timeCounter = 0;
				}
			}
			if (select > 2)
				select = 2;
			else
				if (select < 0)
					select = 0;
			if (inputKey() == 13)
			{
				switch (select)
				{
				case 0:
					return false;
				case 1:
					return true;
				case 2:
					DisplaySaveGamePanel();
					return false;
				default:
					break;
				}
			}
			TextColor(ColorCode_DarkWhite);
		}
	}

	bool DisplayLosePanel(string mess)
	{
		TextColor(ColorCode_Cyan);
		for (int x = 1; x <= 60; x++)
		{
			for (int y = 1; y <= 20; y++)
			{
				GotoXY(50 + x, 10 + y);

				if (y == 1 or y == 20)
				{
					putchar(205);
				}
				if (x == 1 or x == 60)
				{
					putchar(186);
				}
				else
				{
					putchar(32);
				}
			}
		}
		GotoXY(51, 11); putchar(201);
		GotoXY(110, 11); putchar(187);
		GotoXY(111, 11); putchar(32);
		GotoXY(51, 30); putchar(200);
		GotoXY(110, 30); putchar(188);
		GotoXY(111, 30); putchar(32);
		TextColor(ColorCode_Red);
		GotoXY(67, 13); printf("%s", mess.c_str());
		TextColor(ColorCode_White);
		GotoXY(69, 17); printf("Ban co muon choi lai ?");
		GotoXY(77, 20); printf("KHONG");
		GotoXY(77, 22); printf("CO");
		GotoXY(56, 29); printf("Nhan nut len xuong de thay doi, nhan enter de chon");
		bool select = true;
		while (true)
		{
			if (select)
			{
				TextColor(ColorCode_Green);
				GotoXY(75, 20); printf("%c KHONG", 175);
				TextColor(ColorCode_White);
				GotoXY(75, 22); printf("  CO");
			}
			else
			{
				TextColor(ColorCode_White);
				GotoXY(75, 20); printf("  KHONG");
				TextColor(ColorCode_Green);
				GotoXY(75, 22); printf("%c CO", 175);
			}
			if (GetAsyncKeyState(VK_UP))
			{
				select = true;
			}
			else
			{
				if (GetAsyncKeyState(VK_DOWN))
				{
					select = false;
				}
			}
			if (inputKey() == 13)
			{
				if (select)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			TextColor(ColorCode_DarkWhite);
		}
	}


}
