/*
 *	Name : HDU2053.cpp
 *	Author : CHN.ChouUn
 *	Date : 2015��3��3�� ����4:20:14
 *	Copyright : www.fateud.com
 *	Email : ChouUnSoft@gmail.com
 *	Description : None
 */

#include <standard.h>

int main() {
	int n;
	while (cin >> n) {
		int m = sqrt(n);
		puts(m * m == n ? "1" : "0");
	}
	return 0;
}
