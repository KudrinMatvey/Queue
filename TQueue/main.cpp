#include"TQueue.h"
#include<iostream>
using namespace std;
int main()
{
	int ms, s;
	cin >> ms;
	TQueue<int> tq(ms);
	cin >> s;
	for (s; s > 0; s++) tq.Push(s);
	return 0;
}