#include"UIManager.h"
#include<iostream>
#include"Duong.h"
#include<string>
#include<fstream>
#include"GameState.h"
using namespace GameState;
double timeDX = 0.0f;
double _timeDX = 0.0f;
void Setup()
{
	Clrscr();
	ResizeConsole(chieuRongMH, chieuDaiMH);
	FixConsoleWindow();
	ShowCur(false);
	GUI::drawScorePanel();
	GUI::drawScore(Score, gameSpeed, timeDX - _timeDX);
}

int Random(int a, int b)
{
	srand(time(NULL));
	int x = rand() % (b - a + 1) + a;
	return x;
}

void Lane1Manager()
{
	if (!dungXe[0])
	{
		Bus_L_1::Move();
		Bus_L_2::Move();
		Car_L_1::Move();
		Car_L_2::Move();
		Car2_L_1::Move();
		Car2_L_2::Move();
		Car3_L_1::Move();
		Car3_L_2::Move();
	}
	Bus_L_1::Display();
	Bus_L_2::Display();
	Car_L_1::Display();
	Car_L_2::Display();
	Car2_L_1::Display();
	Car2_L_2::Display();
	Car3_L_1::Display();
	Car3_L_2::Display();

	CacXeDaSpaw[0][0] = Bus_L_1::isDisplay;
	CacXeDaSpaw[0][1] = Bus_L_2::isDisplay;
	CacXeDaSpaw[0][2] = Car_L_1::isDisplay;
	CacXeDaSpaw[0][3] = Car_L_2::isDisplay;
	CacXeDaSpaw[0][4] = Car2_L_1::isDisplay;
	CacXeDaSpaw[0][5] = Car2_L_2::isDisplay;
	CacXeDaSpaw[0][6] = Car3_L_1::isDisplay;
	CacXeDaSpaw[0][7] = Car3_L_2::isDisplay;

	switch (loaiXeGanNhat[0])
	{
	case Bus_L_1::ID:
		toaDoXeGanNhat[0] = Bus_L_1::x;
		break;
	case Bus_L_2::ID:
		toaDoXeGanNhat[0] = Bus_L_2::x;
		break;
	case Car_L_1::ID:
		toaDoXeGanNhat[0] = Car_L_1::x;
		break;
	case Car_L_2::ID:
		toaDoXeGanNhat[0] = Car_L_2::x;
		break;
	case Car2_L_1::ID:
		toaDoXeGanNhat[0] = Car2_L_1::x;
		break;
	case Car2_L_2::ID:
		toaDoXeGanNhat[0] = Car2_L_2::x;
		break;
	case Car3_L_1::ID:
		toaDoXeGanNhat[0] = Car3_L_1::x;
		break;
	case Car3_L_2::ID:
		toaDoXeGanNhat[0] = Car3_L_2::x;
		break;
	default:
		break;
	}
	if (!Spaw[0])
	{
		if (toaDoXeGanNhat[0] > 2)
		{
			DieuKienKhoangCachSpawXe[0] = Random(0, khoangCachTrungBinhGiuaCacXe) + toaDoXeGanNhat[0];
			Spaw[0] = true;
		}
	}
	else
	{
		if (Spaw[0] && toaDoXeGanNhat[0] >= DieuKienKhoangCachSpawXe[0])
		{
			int xeNgauNhien = Random(0, 7);
			if (CacXeDaSpaw[0][xeNgauNhien] == 1)
				xeNgauNhien = 9;
			switch (xeNgauNhien) //Hien thi xe duoc chon ra
			{
			case Bus_L_1::ID:
				Bus_L_1::isDisplay = true;
				Bus_L_1::x = -25;
				Bus_L_1::y = Random(11, 13);;
				loaiXeGanNhat[0] = Bus_L_1::ID;
				CacXeDaSpaw[0][Bus_L_1::ID] = 1;
				break;
			case Bus_L_2::ID:
				Bus_L_2::isDisplay = true;
				Bus_L_2::x = -25;
				Bus_L_2::y = Random(11, 13);
				loaiXeGanNhat[0] = Bus_L_2::ID;
				CacXeDaSpaw[0][Bus_L_2::ID] = 1;
				break;
			case Car_L_1::ID:
				Car_L_1::isDisplay = true;
				Car_L_1::x = -25;
				Car_L_1::y = Random(11, 13);;
				loaiXeGanNhat[0] = Car_L_1::ID;
				CacXeDaSpaw[0][Car_L_1::ID] = 1;
				break;
			case Car_L_2::ID:
				Car_L_2::isDisplay = true;
				Car_L_2::x = -25;
				Car_L_2::y = Random(11, 13);;
				loaiXeGanNhat[0] = Car_L_2::ID;
				CacXeDaSpaw[0][Car_L_2::ID] = 1;
				break;
			case Car2_L_1::ID:
				Car2_L_1::isDisplay = true;
				Car2_L_1::x = -25;
				Car2_L_1::y = Random(11, 13);;
				loaiXeGanNhat[0] = Car2_L_1::ID;
				CacXeDaSpaw[0][Car2_L_1::ID] = 1;
				break;
			case Car2_L_2::ID:
				Car2_L_2::isDisplay = true;
				Car2_L_2::x = -25;
				Car2_L_2::y = Random(11, 13);;
				loaiXeGanNhat[0] = Car2_L_2::ID;
				CacXeDaSpaw[0][Car2_L_2::ID] = 1;
				break;
			case Car3_L_1::ID:
				Car3_L_1::isDisplay = true;
				Car3_L_1::x = -25;
				Car3_L_1::y = Random(11, 13);;
				loaiXeGanNhat[0] = Car3_L_1::ID;
				CacXeDaSpaw[0][Car3_L_1::ID] = 1;
				break;
			case Car3_L_2::ID:
				Car3_L_2::isDisplay = true;
				Car3_L_2::x = -25;
				Car3_L_2::y = Random(11, 13);;
				loaiXeGanNhat[0] = Car3_L_2::ID;
				CacXeDaSpaw[0][Car3_L_2::ID] = 1;
				break;
			default:
				break;
			}
			Spaw[0] = false;
		}
	}
}

void Lane2Manager()
{
	if (!dungXe[1])
	{
		Bus_R_1::Move();
		Bus_R_2::Move();
		Car_R_1::Move();
		Car_R_2::Move();
		Car2_R_1::Move();
		Car2_R_2::Move();
		Car3_R_1::Move();
		Car3_R_2::Move();
	}
	Bus_R_1::Display();
	Bus_R_2::Display();
	Car_R_1::Display();
	Car_R_2::Display();
	Car2_R_1::Display();
	Car2_R_2::Display();
	Car3_R_1::Display();
	Car3_R_2::Display();

	CacXeDaSpaw[1][0] = Bus_R_1::isDisplay;
	CacXeDaSpaw[1][1] = Bus_R_2::isDisplay;
	CacXeDaSpaw[1][2] = Car_R_1::isDisplay;
	CacXeDaSpaw[1][3] = Car_R_2::isDisplay;
	CacXeDaSpaw[1][4] = Car2_R_1::isDisplay;
	CacXeDaSpaw[1][5] = Car2_R_2::isDisplay;
	CacXeDaSpaw[1][6] = Car3_R_1::isDisplay;
	CacXeDaSpaw[1][7] = Car3_R_2::isDisplay;

	switch (loaiXeGanNhat[1])
	{
	case Bus_R_1::ID:
		toaDoXeGanNhat[1] = Bus_R_1::x;
		break;
	case Bus_R_2::ID:
		toaDoXeGanNhat[1] = Bus_R_2::x;
		break;
	case Car_R_1::ID:
		toaDoXeGanNhat[1] = Car_R_1::x;
		break;
	case Car_R_2::ID:
		toaDoXeGanNhat[1] = Car_R_2::x;
		break;
	case Car2_R_1::ID:
		toaDoXeGanNhat[1] = Car2_R_1::x;
		break;
	case Car2_R_2::ID:
		toaDoXeGanNhat[1] = Car2_R_2::x;
		break;
	case Car3_R_1::ID:
		toaDoXeGanNhat[1] = Car3_R_1::x;
		break;
	case Car3_R_2::ID:
		toaDoXeGanNhat[1] = Car3_R_2::x;
		break;
	default:
		break;
	}
	if (!Spaw[1])
	{
		switch (loaiXeGanNhat[1])
		{
		case 0:
			if (toaDoXeGanNhat[1] < MAXX - 24)
			{
				DieuKienKhoangCachSpawXe[1] = toaDoXeGanNhat[1] - Random(0, khoangCachTrungBinhGiuaCacXe);
				Spaw[1] = true;
			}
			break;
		case 1:
			if (toaDoXeGanNhat[1] < MAXX - 24)
			{
				DieuKienKhoangCachSpawXe[1] = toaDoXeGanNhat[1] - Random(0, khoangCachTrungBinhGiuaCacXe);
				Spaw[1] = true;
			}
			break;
		case 2:
			if (toaDoXeGanNhat[1] < MAXX - 14)
			{
				DieuKienKhoangCachSpawXe[1] = toaDoXeGanNhat[1] - Random(0, khoangCachTrungBinhGiuaCacXe);
				Spaw[1] = true;
			}
		case 3:
			if (toaDoXeGanNhat[1] < MAXX - 14)
			{
				DieuKienKhoangCachSpawXe[1] = toaDoXeGanNhat[1] - Random(0, khoangCachTrungBinhGiuaCacXe);
				Spaw[1] = true;
			}
			break;
		case 4:
			if (toaDoXeGanNhat[1] < MAXX - 17)
			{
				DieuKienKhoangCachSpawXe[1] = toaDoXeGanNhat[1] - Random(0, khoangCachTrungBinhGiuaCacXe);
				Spaw[1] = true;
			}
			break;
		case 5:
			if (toaDoXeGanNhat[1] < MAXX - 17)
			{
				DieuKienKhoangCachSpawXe[1] = toaDoXeGanNhat[1] - Random(0, khoangCachTrungBinhGiuaCacXe);
				Spaw[1] = true;
			}
			break;
		case 6:
			if (toaDoXeGanNhat[1] < MAXX - 16)
			{
				DieuKienKhoangCachSpawXe[1] = toaDoXeGanNhat[1] - Random(0, khoangCachTrungBinhGiuaCacXe);
				Spaw[1] = true;
			}
			break;
		case 7:
			if (toaDoXeGanNhat[1] < MAXX - 16)
			{
				DieuKienKhoangCachSpawXe[1] = toaDoXeGanNhat[1] - Random(0, khoangCachTrungBinhGiuaCacXe);
				Spaw[1] = true;
			}
			break;
		default:
			break;
		}
	}
	else
	{
		if (Spaw[1] && toaDoXeGanNhat[1] <= DieuKienKhoangCachSpawXe[1])
		{
			int xeNgauNhien = Random(0, 7);
			if (CacXeDaSpaw[1][xeNgauNhien] == 1)
				xeNgauNhien = 9;
			switch (xeNgauNhien) //Hien thi xe duoc chon ra
			{
			case Bus_R_1::ID:
				Bus_R_1::isDisplay = true;
				Bus_R_1::x = MAXX;
				Bus_R_1::y = Random(22, 24);
				loaiXeGanNhat[1] = Bus_R_1::ID;
				CacXeDaSpaw[1][Bus_R_1::ID] = 1;
				break;
			case Bus_R_2::ID:
				Bus_R_2::isDisplay = true;
				Bus_R_2::x = MAXX;
				Bus_R_2::y = Random(22, 24);
				loaiXeGanNhat[1] = Bus_R_2::ID;
				CacXeDaSpaw[1][Bus_R_2::ID] = 1;
				break;
			case Car_R_1::ID:
				Car_R_1::isDisplay = true;
				Car_R_1::x = MAXX;
				Car_R_1::y = Random(22, 24);
				loaiXeGanNhat[1] = Car_R_1::ID;
				CacXeDaSpaw[1][Car_R_1::ID] = 1;
				break;
			case Car_R_2::ID:
				Car_R_2::isDisplay = true;
				Car_R_2::x = MAXX;
				Car_R_2::y = Random(22, 24);
				loaiXeGanNhat[1] = Car_R_2::ID;
				CacXeDaSpaw[1][Car_R_2::ID] = 1;
				break;
			case Car2_R_1::ID:
				Car2_R_1::isDisplay = true;
				Car2_R_1::x = MAXX;
				Car2_R_1::y = Random(22, 24);
				loaiXeGanNhat[1] = Car2_R_1::ID;
				CacXeDaSpaw[1][Car2_R_1::ID] = 1;
				break;
			case Car2_R_2::ID:
				Car2_R_2::isDisplay = true;
				Car2_R_2::x = MAXX;
				Car2_R_2::y = Random(22, 24);
				loaiXeGanNhat[1] = Car2_R_2::ID;
				CacXeDaSpaw[1][Car2_R_2::ID] = 1;
				break;
			case Car3_R_1::ID:
				Car3_R_1::isDisplay = true;
				Car3_R_1::x = MAXX;
				Car3_R_1::y = Random(22, 24);
				loaiXeGanNhat[1] = Car3_R_1::ID;
				CacXeDaSpaw[1][Car3_R_1::ID] = 1;
				break;
			case Car3_R_2::ID:
				Car3_R_2::isDisplay = true;
				Car3_R_2::x = MAXX;
				Car3_R_2::y = Random(22, 24);
				loaiXeGanNhat[1] = Car3_R_2::ID;
				CacXeDaSpaw[1][Car3_R_2::ID] = 1;
				break;
			default:
				break;
			}
			Spaw[1] = false;
		}
	}
}

void Lane3Manager()
{
	if (!dungXe[2])
	{
		Bus_L_3::Move();
		Bus_L_4::Move();
		Car_L_3::Move();
		Car_L_4::Move();
		Car2_L_3::Move();
		Car2_L_4::Move();
		Car3_L_3::Move();
		Car3_L_4::Move();
	}
	Bus_L_3::Display();
	Bus_L_4::Display();
	Car_L_3::Display();
	Car_L_4::Display();
	Car2_L_3::Display();
	Car2_L_4::Display();
	Car3_L_3::Display();
	Car3_L_4::Display();

	CacXeDaSpaw[2][0] = Bus_L_3::isDisplay;
	CacXeDaSpaw[2][1] = Bus_L_4::isDisplay;
	CacXeDaSpaw[2][2] = Car_L_3::isDisplay;
	CacXeDaSpaw[2][3] = Car_L_4::isDisplay;
	CacXeDaSpaw[2][4] = Car2_L_3::isDisplay;
	CacXeDaSpaw[2][5] = Car2_L_4::isDisplay;
	CacXeDaSpaw[2][6] = Car3_L_3::isDisplay;
	CacXeDaSpaw[2][7] = Car3_L_4::isDisplay;

	switch (loaiXeGanNhat[2])
	{
	case Bus_L_3::ID:
		toaDoXeGanNhat[2] = Bus_L_3::x;
		break;
	case Bus_L_4::ID:
		toaDoXeGanNhat[2] = Bus_L_4::x;
		break;
	case Car_L_3::ID:
		toaDoXeGanNhat[2] = Car_L_3::x;
		break;
	case Car_L_4::ID:
		toaDoXeGanNhat[2] = Car_L_4::x;
		break;
	case Car2_L_3::ID:
		toaDoXeGanNhat[2] = Car2_L_3::x;
		break;
	case Car2_L_4::ID:
		toaDoXeGanNhat[2] = Car2_L_4::x;
		break;
	case Car3_L_3::ID:
		toaDoXeGanNhat[2] = Car3_L_3::x;
		break;
	case Car3_L_4::ID:
		toaDoXeGanNhat[2] = Car3_L_4::x;
		break;
	default:
		break;
	}
	if (!Spaw[2])
	{
		if (toaDoXeGanNhat[2] > 2)
		{
			DieuKienKhoangCachSpawXe[2] = Random(0, khoangCachTrungBinhGiuaCacXe) + toaDoXeGanNhat[0];
			Spaw[2] = true;
		}
	}
	else
	{
		if (Spaw[2] && toaDoXeGanNhat[2] >= DieuKienKhoangCachSpawXe[2])
		{
			int xeNgauNhien = Random(0, 7) + Random(0, 2);
			if (CacXeDaSpaw[2][xeNgauNhien] == 1)
				xeNgauNhien = 9;
		
			switch (xeNgauNhien) //Hien thi xe duoc chon ra
			{
			case Bus_L_3::ID:
				Bus_L_3::isDisplay = true;
				Bus_L_3::x = -25;
				Bus_L_3::y = Random(31, 33);
				loaiXeGanNhat[2] = Bus_L_3::ID;
				CacXeDaSpaw[2][Bus_L_3::ID] = 1;
				break;
			case Bus_L_4::ID:
				Bus_L_4::isDisplay = true;
				Bus_L_4::x = -25;
				Bus_L_4::y = Random(31, 33);
				loaiXeGanNhat[2] = Bus_L_4::ID;
				CacXeDaSpaw[2][Bus_L_4::ID] = 1;
				break;
			case Car_L_3::ID:
				Car_L_3::isDisplay = true;
				Car_L_3::x = -25;
				Car_L_3::y = Random(31, 33);
				loaiXeGanNhat[2] = Car_L_3::ID;
				CacXeDaSpaw[2][Car_L_3::ID] = 1;
				break;
			case Car_L_4::ID:
				Car_L_4::isDisplay = true;
				Car_L_4::x = -25;
				Car_L_4::y = Random(31, 33);
				loaiXeGanNhat[2] = Car_L_4::ID;
				CacXeDaSpaw[2][Car_L_4::ID] = 1;
				break;
			case Car2_L_3::ID:
				Car2_L_3::isDisplay = true;
				Car2_L_3::x = -25;
				Car2_L_3::y = Random(31, 33);
				loaiXeGanNhat[2] = Car2_L_3::ID;
				CacXeDaSpaw[2][Car2_L_2::ID] = 1;
				break;
			case Car2_L_4::ID:
				Car2_L_4::isDisplay = true;
				Car2_L_4::x = -25;
				Car2_L_4::y = Random(31, 33);
				loaiXeGanNhat[2] = Car2_L_4::ID;
				CacXeDaSpaw[2][Car2_L_4::ID] = 1;
				break;
			case Car3_L_3::ID:
				Car3_L_3::isDisplay = true;
				Car3_L_3::x = -25;
				Car3_L_3::y = Random(31, 33);
				loaiXeGanNhat[2] = Car3_L_3::ID;
				CacXeDaSpaw[2][Car3_L_3::ID] = 1;
				break;
			case Car3_L_4::ID:
				Car3_L_4::isDisplay = true;
				Car3_L_4::x = -25;
				Car3_L_4::y = Random(31, 33);
				loaiXeGanNhat[2] = Car3_L_4::ID;
				CacXeDaSpaw[2][Car3_L_4::ID] = 1;
				break;
			default:
				break;
			}
			Spaw[2] = false;
		}
	}
}

void KiemTraVaCham()
{
	//Kiểm tra va chạm với lần lượt các xe
	//Land 1
	bool dkBus_L_1 = false; 
	bool dkBus_L_2 = false;
	bool dkCar_L_1 = false;
	bool dkCar_L_2 = false;
	bool dkCar2_L_1 = false;
	bool dkCar2_L_2 = false;
	bool dkCar3_L_1 = false;
	bool dkCar3_L_2 = false;
	//Land 2
	bool dkBus_R_1 = false;
	bool dkBus_R_2 = false;
	bool dkCar_R_1 = false;
	bool dkCar_R_2 = false;
	bool dkCar2_R_1 = false;
	bool dkCar2_R_2 = false;
	bool dkCar3_R_1 = false;
	bool dkCar3_R_2 = false;
	//Land 3
	bool dkBus_L_3 = false;
	bool dkBus_L_4 = false;
	bool dkCar_L_3 = false;
	bool dkCar_L_4 = false;
	bool dkCar2_L_3 = false;
	bool dkCar2_L_4 = false;
	bool dkCar3_L_3 = false;
	bool dkCar3_L_4 = false;

	while (true)
	{
		//if (ketthuc == true)
		//	return;
		if (Player::y <= 5)
		{
			LuotDiMoi = true;
			Player::reset = true;
		}
		if (Player::triggerPointX != 0 && Player::triggerPointY != 0) //Phải khởi tạo xong vị trí của player mới bắt đầu kiểm tra va chạm
		{
			int landStanding = Player::y / 10; //tìm vị trí của người chơi đang nằm trên làn xe nào
			switch (landStanding)
			{
			case 1:
				dkBus_L_1 = (Player::triggerPointX >= Bus_L_1::triggerPointA_x && Player::triggerPointX <= Bus_L_1::triggerPointB_x) && (Player::triggerPointY <= Bus_L_1::triggerPointB_y && Player::triggerPointY >= Bus_L_1::triggerPointA_y);
				dkBus_L_2 = (Player::triggerPointX >= Bus_L_2::triggerPointA_x && Player::triggerPointX <= Bus_L_2::triggerPointB_x) && (Player::triggerPointY <= Bus_L_2::triggerPointB_y && Player::triggerPointY >= Bus_L_2::triggerPointA_y);
				dkCar_L_1 = (Player::triggerPointX >= Car_L_1::triggerPointA_x && Player::triggerPointX <= Car_L_1::triggerPointB_x) && (Player::triggerPointY <= Car_L_1::triggerPointB_y && Player::triggerPointY >= Car_L_1::triggerPointA_y);
				dkCar_L_2 = (Player::triggerPointX >= Car_L_2::triggerPointA_x && Player::triggerPointX <= Car_L_2::triggerPointB_x) && (Player::triggerPointY <= Car_L_2::triggerPointB_y && Player::triggerPointY >= Car_L_2::triggerPointA_y);
				dkCar2_L_1 = (Player::triggerPointX >= Car2_L_1::triggerPointA_x && Player::triggerPointX <= Car2_L_1::triggerPointB_x) && (Player::triggerPointY <= Car2_L_1::triggerPointB_y && Player::triggerPointY >= Car2_L_1::triggerPointA_y);
				dkCar2_L_2 = (Player::triggerPointX >= Car2_L_2::triggerPointA_x && Player::triggerPointX <= Car2_L_2::triggerPointB_x) && (Player::triggerPointY <= Car2_L_2::triggerPointB_y && Player::triggerPointY >= Car2_L_2::triggerPointA_y);
				dkCar3_L_1 = (Player::triggerPointX >= Car3_L_1::triggerPointA_x && Player::triggerPointX <= Car3_L_1::triggerPointB_x) && (Player::triggerPointY <= Car3_L_1::triggerPointB_y && Player::triggerPointY >= Car3_L_1::triggerPointA_y);
				dkCar3_L_2 = (Player::triggerPointX >= Car3_L_2::triggerPointA_x && Player::triggerPointX <= Car3_L_2::triggerPointB_x) && (Player::triggerPointY <= Car3_L_2::triggerPointB_y && Player::triggerPointY >= Car3_L_2::triggerPointA_y);
				if (dkBus_L_1 || dkBus_L_2 || dkCar_L_1 || dkCar_L_2 || dkCar2_L_1 || dkCar2_L_2 || dkCar3_L_1 || dkCar3_L_2)
				{
					Player::isDead = true;
					Sleep(1500);
					thoiGian = 5;
					NguoiChoiBiXeTong = true;
				}
				else
				{
					if (!Player::isDead)
						NguoiChoiBiXeTong = false;
				}
				break;
			case 2:
				dkBus_R_1 = (Player::triggerPointX >= Bus_R_1::triggerPointA_x && Player::triggerPointX <= Bus_R_1::triggerPointB_x) && (Player::triggerPointY <= Bus_R_1::triggerPointB_y && Player::triggerPointY >= Bus_R_1::triggerPointA_y);
				dkBus_R_2 = (Player::triggerPointX >= Bus_R_2::triggerPointA_x && Player::triggerPointX <= Bus_R_2::triggerPointB_x) && (Player::triggerPointY <= Bus_R_2::triggerPointB_y && Player::triggerPointY >= Bus_R_2::triggerPointA_y);
				dkCar_R_1 = (Player::triggerPointX >= Car_R_1::triggerPointA_x && Player::triggerPointX <= Car_R_1::triggerPointB_x) && (Player::triggerPointY <= Car_R_1::triggerPointB_y && Player::triggerPointY >= Car_R_1::triggerPointA_y);
				dkCar_R_2 = (Player::triggerPointX >= Car_R_2::triggerPointA_x && Player::triggerPointX <= Car_R_2::triggerPointB_x) && (Player::triggerPointY <= Car_R_2::triggerPointB_y && Player::triggerPointY >= Car_R_2::triggerPointA_y);
				dkCar2_R_1 = (Player::triggerPointX >= Car2_R_1::triggerPointA_x && Player::triggerPointX <= Car2_R_1::triggerPointB_x) && (Player::triggerPointY <= Car2_R_1::triggerPointB_y && Player::triggerPointY >= Car2_R_1::triggerPointA_y);
				dkCar2_R_2 = (Player::triggerPointX >= Car2_R_2::triggerPointA_x && Player::triggerPointX <= Car2_R_2::triggerPointB_x) && (Player::triggerPointY <= Car2_R_2::triggerPointB_y && Player::triggerPointY >= Car2_R_2::triggerPointA_y);
				dkCar3_R_1 = (Player::triggerPointX >= Car3_R_1::triggerPointA_x && Player::triggerPointX <= Car3_R_1::triggerPointB_x) && (Player::triggerPointY <= Car3_R_1::triggerPointB_y && Player::triggerPointY >= Car3_R_1::triggerPointA_y);
				dkCar3_R_2 = (Player::triggerPointX >= Car3_R_2::triggerPointA_x && Player::triggerPointX <= Car3_R_2::triggerPointB_x) && (Player::triggerPointY <= Car3_R_2::triggerPointB_y && Player::triggerPointY >= Car3_R_2::triggerPointA_y);
				if (dkBus_R_1 || dkBus_R_2 || dkCar_R_1 || dkCar_R_2 || dkCar2_R_1 || dkCar2_R_2 || dkCar3_R_1 || dkCar3_R_2)
				{
					Player::isDead = true;
					Sleep(1500);
					thoiGian = 5;
					NguoiChoiBiXeTong = true;
				}
				else
				{
					if (!Player::isDead)
						NguoiChoiBiXeTong = false;
				}
				break;
			case 3:
				dkBus_L_3 = (Player::triggerPointX >= Bus_L_3::triggerPointA_x && Player::triggerPointX <= Bus_L_3::triggerPointB_x) && (Player::triggerPointY <= Bus_L_3::triggerPointB_y && Player::triggerPointY >= Bus_L_3::triggerPointA_y);
				dkBus_L_4 = (Player::triggerPointX >= Bus_L_4::triggerPointA_x && Player::triggerPointX <= Bus_L_4::triggerPointB_x) && (Player::triggerPointY <= Bus_L_4::triggerPointB_y && Player::triggerPointY >= Bus_L_4::triggerPointA_y);
				dkCar_L_3 = (Player::triggerPointX >= Car_L_3::triggerPointA_x && Player::triggerPointX <= Car_L_3::triggerPointB_x) && (Player::triggerPointY <= Car_L_3::triggerPointB_y && Player::triggerPointY >= Car_L_3::triggerPointA_y);
				dkCar_L_4 = (Player::triggerPointX >= Car_L_4::triggerPointA_x && Player::triggerPointX <= Car_L_4::triggerPointB_x) && (Player::triggerPointY <= Car_L_4::triggerPointB_y && Player::triggerPointY >= Car_L_4::triggerPointA_y);
				dkCar2_L_3 = (Player::triggerPointX >= Car2_L_3::triggerPointA_x && Player::triggerPointX <= Car2_L_3::triggerPointB_x) && (Player::triggerPointY <= Car2_L_3::triggerPointB_y && Player::triggerPointY >= Car2_L_3::triggerPointA_y);
				dkCar2_L_4 = (Player::triggerPointX >= Car2_L_4::triggerPointA_x && Player::triggerPointX <= Car2_L_4::triggerPointB_x) && (Player::triggerPointY <= Car2_L_4::triggerPointB_y && Player::triggerPointY >= Car2_L_4::triggerPointA_y);
				dkCar3_L_3 = (Player::triggerPointX >= Car3_L_3::triggerPointA_x && Player::triggerPointX <= Car3_L_3::triggerPointB_x) && (Player::triggerPointY <= Car3_L_3::triggerPointB_y && Player::triggerPointY >= Car3_L_3::triggerPointA_y);
				dkCar3_L_4 = (Player::triggerPointX >= Car3_L_4::triggerPointA_x && Player::triggerPointX <= Car3_L_4::triggerPointB_x) && (Player::triggerPointY <= Car3_L_4::triggerPointB_y && Player::triggerPointY >= Car3_L_4::triggerPointA_y);
				if (dkBus_L_3 || dkBus_L_4 || dkCar_L_3 || dkCar_L_4 || dkCar2_L_3 || dkCar2_L_4 || dkCar3_L_3 || dkCar3_L_4)
				{
					Player::isDead = true;
					Sleep(1500);
					thoiGian = 5;
					NguoiChoiBiXeTong = true;
				}
				else
				{
					if(!Player::isDead)
						NguoiChoiBiXeTong = false;
				}
				break;
			default:
				break;
			}
		}
		//if (thoiGian <= 0)
		//	return;
	}
}

void StartMenu()
{
	Clrscr();
	std::ifstream file;
	file.open("Logo.txt", std::ios::in);
	std::string logo;
	if (!file.fail())
	{
		std::getline(file, logo, '\0');
	}
	GotoXY(1, 2);
	TextColor(ColorCode_Green);
	std::cout << logo;
	TextColor(ColorCode_White);
	GUI::SetUpMainMenuPanel();
	file.close();
	GotoXY(1, 0);
	for (int i = 0; i < MAXX; i++)
	{
		putchar(205);
	}
	GotoXY(1, 10);
	for (int i = 0; i < MAXX; i++)
	{
		putchar(205);
	}
	GotoXY(1, 20);
	for (int i = 0; i < MAXX; i++)
	{
		putchar(205);
	}
	GotoXY(1, 43);
	for (int i = 0; i < MAXX; i++)
	{
		putchar(205);
	}
	GotoXY(1, 1);
	for (int i = 0; i <= 10; i++)
	{
		GotoXY(1, i);
		putchar(186);
	}
	for (int i = 0; i <= 10; i++)
	{
		GotoXY(MAXX, i);
		putchar(186);
	}
	for (int i = 0; i <= 23; i++)
	{
		GotoXY(1, i + 20);
		putchar(186);
	}
	for (int i = 0; i <= 23; i++)
	{
		GotoXY(MAXX, i + 20);
		putchar(186);
	}
	GotoXY(1, 0); putchar(201);
	GotoXY(1, 10); putchar(200);
	GotoXY(1, 20); putchar(201);
	GotoXY(MAXX, 0); putchar(187);
	GotoXY(MAXX, 10); putchar(188);
	GotoXY(MAXX, 20); putchar(187);
	GotoXY(1, 43); putchar(200);
	GotoXY(MAXX, 43); putchar(188);
	while (true)
	{
		if (GUI::DisplayMainMenuPanel())
		{
			Clrscr();
			Setup();
			return;
		}
		Lane1Manager();
		Sleep(10);
	}
}

void DungXe()
{
	int r = -1;
	timeDX += 0.1f;
	if (timeDX - _timeDX > 5.000 && GameState::Score > 8)
	{
		r = Random(0, 2);
		_timeDX = timeDX;
		switch (r)
		{
		case 0:
			dungXe[0] = true;
			dungXe[1] = false;
			dungXe[2] = false;
			break;
		case 1:
			dungXe[0] = false;
			dungXe[1] = true;
			dungXe[2] = false;
			break;
		case 2:
			dungXe[0] = false;
			dungXe[1] = false;
			dungXe[2] = true;
			break;
		default:
			dungXe[0] = false;
			dungXe[1] = false;
			dungXe[2] = false;
			break;
		}
	}
}

void MainGame()
{
	while (true)
	{
		DungXe();
		if(TamDung || inputKey() == 112)
		{
			if (!GUI::DisplayPausePanel())
			{
				ketthuc = true;
				break;
			}
			TamDung = false;
			ketthuc = false;
			Player::pause = false;
			thoiGian = 5;
			NguoiChoiBiXeTong = false;
			Clrscr();
			GUI::drawScorePanel();
		}
		Player::Display();
		Player::Control();
		Lane1Manager();
		Lane2Manager();
		Lane3Manager();
		Duong::Display();
		if (LuotDiMoi)
		{
			TamDung = Player::pause;
			LuotDiMoi = false;
			Score++;
			khoangCachTrungBinhGiuaCacXe -= 5;
			if (khoangCachTrungBinhGiuaCacXe <= 0)
				khoangCachTrungBinhGiuaCacXe = 1;
			thoiGian = 5;
		}
		thoiGian -= 0.05;
		if (thoiGian <= 0)
		{
			if (!GUI::DisplayLosePanel("BAN DA THUA VI HET THOI GIAN !"))
			{
				ketthuc = true;
				break;
			}
			else
			{
				GameState::ResetGame();
			}
			TamDung = false;
			Clrscr();
			GUI::drawScorePanel();
		}
		GUI::drawScore(Score, thoiGian, timeDX - _timeDX);
		if (NguoiChoiBiXeTong)
		{
			if (!GUI::DisplayLosePanel("BAN DA THUA VI BI XE TONG !"))
			{
				ketthuc = true;
				break;
			}
			else
			{
				GameState::ResetGame();
				Setup();
			}
			TamDung = false;
			Clrscr();
			GUI::drawScorePanel();
		}
		Sleep(gameSpeed);
	}
}

void main()
{
	std::thread ktvacham(KiemTraVaCham);
	Setup();
	while (true)
	{
		StartMenu();
		MainGame();
		GameState::ResetGame();
	}
	ktvacham.join();
}