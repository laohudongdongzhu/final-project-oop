// stock_backtest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <fstream>
#include "StockClass.h"
using namespace std;

int main()
{
	string fileName = "TSLA.txt";
	ifstream file;
	float input;
	file.open(fileName);
	StockClass tsla;

	for (int i = 0; i < 2881; i++) {
		file >> input;
		tsla.setData(input);
		cout << tsla.getDayData(i) << endl;
	}

}
