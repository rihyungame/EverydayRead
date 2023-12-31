#pragma once

#include <algorithm>

class ShuffleRandom
{
public:
	ShuffleRandom();
	~ShuffleRandom();

	void Init(int _size);
	int GetRandomNum();
	void SetCount(int n);
	int GetCount();
	int GetCountDigits();

private:
	int size;
	int count;
	std::vector<int> suffleWithSize;
};

