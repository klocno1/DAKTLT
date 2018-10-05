#pragma once
#include <fstream>
#include"Bus_L.h"
#include"Bus_R.h"
#include"Car_L.h"
#include"Car_R.h"
#include"Car2_L.h"
#include"Car2_R.h"
#include"Car3_L.h"
#include"Car3_R.h"
#include"Player.h"

using namespace std;
namespace GameState 
{
	int gameSpeed = 1;
	int khoangCachTrungBinhGiuaCacXe = 30;
	int toaDoXeGanNhat[3]{ 0,0,0 };
	int loaiXeGanNhat[3]{ 0,0,0 };
	int DieuKienKhoangCachSpawXe[3];
	bool Spaw[3] = { false, false, false };
	int CacXeDaSpaw[3][8]{ { 1,0,0,0,0,0,0,0 },{ 1,0,0,0,0,0,0,0 },{ 1,0,0,0,0,0,0,0 } };
	bool NguoiChoiBiXeTong = false;
	bool LuotDiMoi = false;
	float thoiGian = 5;
	int Score = 0;
	bool TamDung = false;
	bool ketthuc = false;
	bool dungXe[3] = { false, false, false};

	void ResetGame()
	{
		Player::pause = false;
		Player::x = MAXX / 2;
		Player::y = 41;
		Player::isDead = false;
		Bus_L_1::x = -25;
		Bus_L_2::x = -25;
		Car_L_1::x = -25;
		Car_L_2::x = -25;
		Car2_L_1::x = -25;
		Car2_L_2::x = -25;
		Car3_L_1::x = -25;
		Car3_L_2::x = -25;

		Bus_L_3::x = -25;
		Bus_L_4::x = -25;
		Car_L_3::x = -25;
		Car_L_4::x = -25;
		Car2_L_3::x = -25;
		Car2_L_4::x = -25;
		Car3_L_3::x = -25;
		Car3_L_4::x = -25;

		Bus_R_1::x = MAXX;
		Bus_R_2::x = MAXX;
		Car_R_1::x = MAXX;
		Car_R_2::x = MAXX;
		Car2_R_1::x = MAXX;
		Car2_R_2::x = MAXX;
		Car3_R_1::x = MAXX;
		Car3_R_2::x = MAXX;
		//
		Bus_L_1::isDisplay = true;
		Bus_L_2::isDisplay = false;
		Car_L_1::isDisplay = false;
		Car_L_2::isDisplay = false;
		Car2_L_1::isDisplay = false;
		Car2_L_2::isDisplay = false;
		Car3_L_1::isDisplay = false;
		Car3_L_2::isDisplay = false;

		Bus_L_3::isDisplay = true;
		Bus_L_4::isDisplay = false;
		Car_L_3::isDisplay = false;
		Car_L_4::isDisplay = false;
		Car2_L_3::isDisplay = false;
		Car2_L_4::isDisplay = false;
		Car3_L_3::isDisplay = false;
		Car3_L_4::isDisplay = false;

		Bus_R_1::isDisplay = true;
		Bus_R_2::isDisplay = false;
		Car_R_1::isDisplay = false;
		Car_R_2::isDisplay = false;
		Car2_R_1::isDisplay = false;
		Car2_R_2::isDisplay = false;
		Car3_R_1::isDisplay = false;
		Car3_R_2::isDisplay = false;

		gameSpeed = 1;
		khoangCachTrungBinhGiuaCacXe = 30;
		toaDoXeGanNhat[0] = 0;
		toaDoXeGanNhat[1] = 0;
		toaDoXeGanNhat[2] = 0;
		loaiXeGanNhat[0] = 0;
		loaiXeGanNhat[1] = 0;
		loaiXeGanNhat[2] = 0;
		DieuKienKhoangCachSpawXe[0] = 0;
		DieuKienKhoangCachSpawXe[1] = 0;
		DieuKienKhoangCachSpawXe[2] = 0;
		Spaw[0] = false;
		Spaw[1] = false;
		Spaw[2] = false;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				CacXeDaSpaw[i][j] = 0;
			}
		}
		CacXeDaSpaw[0][0] = 1;
		CacXeDaSpaw[1][0] = 1;
		CacXeDaSpaw[2][0] = 1;
		NguoiChoiBiXeTong = false;
		LuotDiMoi = false;
		thoiGian = 5;
		Score = 0;
		TamDung = false;
		ketthuc = false;
	}

	void Save(ofstream &file)
	{
		file << Bus_L_1::x << endl;
		file << Bus_L_2::x << endl;
		file << Car_L_1::x << endl;
		file << Car_L_2::x << endl;
		file << Car2_L_1::x << endl;
		file << Car2_L_2::x << endl;
		file << Car3_L_1::x << endl;
		file << Car3_L_2::x << endl;

		file << Bus_L_3::x << endl;
		file << Bus_L_4::x << endl;
		file << Car_L_3::x << endl;
		file << Car_L_4::x << endl;
		file << Car2_L_3::x << endl;
		file << Car2_L_4::x << endl;
		file << Car3_L_3::x << endl;
		file << Car3_L_4::x << endl;

		file << Bus_R_1::x << endl;
		file << Bus_R_2::x << endl;
		file << Car_R_1::x << endl;
		file << Car_R_2::x << endl;
		file << Car2_R_1::x << endl;
		file << Car2_R_2::x << endl;
		file << Car3_R_1::x << endl;
		file << Car3_R_2::x << endl;
		//
		file << Bus_L_1::isDisplay << endl;
		file << Bus_L_2::isDisplay << endl;
		file << Car_L_1::isDisplay << endl;
		file << Car_L_2::isDisplay << endl;
		file << Car2_L_1::isDisplay << endl;
		file << Car2_L_2::isDisplay << endl;
		file << Car3_L_1::isDisplay << endl;
		file << Car3_L_2::isDisplay << endl;

		file << Bus_L_3::isDisplay << endl;
		file << Bus_L_4::isDisplay << endl;
		file << Car_L_3::isDisplay << endl;
		file << Car_L_4::isDisplay << endl;
		file << Car2_L_3::isDisplay << endl;
		file << Car2_L_4::isDisplay << endl;
		file << Car3_L_3::isDisplay << endl;
		file << Car3_L_4::isDisplay << endl;

		file << Bus_R_1::isDisplay << endl;
		file << Bus_R_2::isDisplay << endl;
		file << Car_R_1::isDisplay << endl;
		file << Car_R_2::isDisplay << endl;
		file << Car2_R_1::isDisplay << endl;
		file << Car2_R_2::isDisplay << endl;
		file << Car3_R_1::isDisplay << endl;
		file << Car3_R_2::isDisplay << endl;

		//gameSpeed = 1;
		//khoangCachTrungBinhGiuaCacXe = 30;
		//toaDoXeGanNhat[0] = 0;
		//toaDoXeGanNhat[1] = 0;
		//toaDoXeGanNhat[2] = 0;
		//loaiXeGanNhat[0] = 0;
		//loaiXeGanNhat[1] = 0;
		//loaiXeGanNhat[2] = 0;
		//DieuKienKhoangCachSpawXe[3];
		//Spaw[0] = false;
		//Spaw[1] = false;
		//Spaw[2] = false;
		//for (int i = 0; i < 3; i++)
		//{
		//	for (int j = 0; j < 8; j++)
		//	{
		//		CacXeDaSpaw[i][j] = 0;
		//	}
		//}
		//CacXeDaSpaw[0][0] = 1;
		//CacXeDaSpaw[1][0] = 1;
		//CacXeDaSpaw[2][0] = 1;
		//NguoiChoiBiXeTong = false;
		//LuotDiMoi = false;
		//thoiGian = 5;
		//Score = 0;

		file << gameSpeed << endl;
		file << khoangCachTrungBinhGiuaCacXe << endl;
		file << toaDoXeGanNhat[0] << endl;
		file << toaDoXeGanNhat[1] << endl;
		file << toaDoXeGanNhat[2] << endl;
		file << loaiXeGanNhat[0] << endl;
		file << loaiXeGanNhat[1] << endl;
		file << loaiXeGanNhat[2] << endl;
		file << DieuKienKhoangCachSpawXe[0] << endl;
		file << DieuKienKhoangCachSpawXe[1] << endl;
		file << DieuKienKhoangCachSpawXe[2] << endl;
		file << Spaw[0] << endl;
		file << Spaw[1] << endl;
		file << Spaw[2] << endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				file << CacXeDaSpaw[i][j] << endl;
			}
		}
		file << NguoiChoiBiXeTong << endl;
		file << LuotDiMoi << endl;
		file << thoiGian << endl;
		file << Score << endl;
	}
	void Load(ifstream &file,string name)
	{
		file >> Bus_L_1::x;
		file >> Bus_L_2::x;
		file >> Car_L_1::x;
		file >> Car_L_2::x;
		file >> Car2_L_1::x;
		file >> Car2_L_2::x;
		file >> Car3_L_1::x;
		file >> Car3_L_2::x;

		file >> Bus_L_3::x;
		file >> Bus_L_4::x;
		file >> Car_L_3::x;
		file >> Car_L_4::x;
		file >> Car2_L_3::x;
		file >> Car2_L_4::x;
		file >> Car3_L_3::x;
		file >> Car3_L_4::x;

		file >> Bus_R_1::x;
		file >> Bus_R_2::x;
		file >> Car_R_1::x;
		file >> Car_R_2::x;
		file >> Car2_R_1::x;
		file >> Car2_R_2::x;
		file >> Car3_R_1::x;
		file >> Car3_R_2::x;
		//
		file >> Bus_L_1::isDisplay;
		file >> Bus_L_2::isDisplay;
		file >> Car_L_1::isDisplay;
		file >> Car_L_2::isDisplay;
		file >> Car2_L_1::isDisplay;
		file >> Car2_L_2::isDisplay;
		file >> Car3_L_1::isDisplay;
		file >> Car3_L_2::isDisplay;

		file >> Bus_L_3::isDisplay;
		file >> Bus_L_4::isDisplay;
		file >> Car_L_3::isDisplay;
		file >> Car_L_4::isDisplay;
		file >> Car2_L_3::isDisplay;
		file >> Car2_L_4::isDisplay;
		file >> Car3_L_3::isDisplay;
		file >> Car3_L_4::isDisplay;

		file >> Bus_R_1::isDisplay;
		file >> Bus_R_2::isDisplay;
		file >> Car_R_1::isDisplay;
		file >> Car_R_2::isDisplay;
		file >> Car2_R_1::isDisplay;
		file >> Car2_R_2::isDisplay;
		file >> Car3_R_1::isDisplay;
		file >> Car3_R_2::isDisplay;

		file >> gameSpeed;
		file >> khoangCachTrungBinhGiuaCacXe;
		file >> toaDoXeGanNhat[0];
		file >> toaDoXeGanNhat[1];
		file >> toaDoXeGanNhat[2];
		file >> loaiXeGanNhat[0];
		file >> loaiXeGanNhat[1];
		file >> loaiXeGanNhat[2];
		file >> DieuKienKhoangCachSpawXe[0];
		file >> DieuKienKhoangCachSpawXe[1];
		file >> DieuKienKhoangCachSpawXe[2];
		file >> Spaw[0];
		file >> Spaw[1];
		file >> Spaw[2];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				file >> CacXeDaSpaw[i][j];
			}
		}
		file >> NguoiChoiBiXeTong;
		file >> LuotDiMoi;
		file >> thoiGian;
		file >> Score;
		TamDung = false;
		ketthuc = false;
	}
}