/*
 *	Name : HDU2042.cpp
 *	Author : CHN.ChouUn
 *	Date : 2015��3��3�� ����2:50:55
 *	Copyright : www.fateud.com
 *	Email : ChouUnSoft@gmail.com
 *	Description : None
 */

#include <standard.h>

int main() {
	int T; cin >> T;
	while (T --) {
		int n; cin >> n;
		Int64 ans = 3;
		while (n --) ans --, ans <<= 1;
		cout << ans << endl;
	}
	return 0;
}
