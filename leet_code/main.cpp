#include "diagonalSort.h"

int main() {

	vector<vector<int>> v =
	//{
	//	{58}, {99}, {1}, {6}, {73}, {9}, {60}, {88}, {64}, {60},
	//	{39}, {29}, {46}, {20}, {78}, {95}, {2}, {35}, {20}, {53},
	//	{60}, {15}, {94}, {78}, {26}, {89}, {87}, {93}, {70}, {31},
	//	{94}, {58}, {90}, {48}, {60}, {6}, {68}, {62}, {32}, {36}, {73},
	//	{49}, {45}, {31}, {23}, {3}, {73}, {70}, {71}, {18}, {14}, {49},
	//	{84}, {72}, {59}, {91}, {17}, {46}, {93}, {31}, {31}, {71}, {52},
	//	{83}, {8}, {95}, {49}, {57}, {52}, {65}, {83}, {98}, {46}, {55},
	//	{44}, {100}, {45}, {7}, {59}, {38}, {82}, {62}, {25}, {55}, {64},
	//	{56}, {89}, {2}, {10}, {57}, {26}, {19}, {27}, {80}, {12}, {32},
	//	{62}, {91}, {68}, {92}
	//};

	//{ {37, 98, 82, 45, 42} };
	{

	//   0  1  2  3
		{3, 3, 1, 1}, // 0
		{2, 2, 1, 2}, // 1
		{1, 1, 1, 2}  // 2
	};

	Solution a;
	auto result = a.diagonalSort(v);

	return 0;
}