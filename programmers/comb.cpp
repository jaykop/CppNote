#include <vector>
#include <cmath>
#include <string>

using namespace std;

string return_digit(int n, int k)
{
	int rest = -1;// n% k, div = n / k;

	string ans;

	while (n)
	{
		rest = n % k;
		n = n / k;
		if (rest < 10)
			ans.insert(0, to_string(rest));

		else
		{
			char c = rest + ('A' - 10);
			ans.insert(0, 1, c);
		}
	}

	return ans;
}


vector<vector<int>> return_subset(const vector<int> v)
{
	vector<vector<int>> ans;
	size_t size = v.size();
	size_t end = pow(2, size);

	// 2^n ��ŭ�� �κ�����
	for (int i = 0; i < end; ++i)
	{
		vector<int> subset;

		// binary ������ üũ�ϸ� �κ����� �߰�\
		// size�� ��Ʈ �ڸ� ��
		for (int j = 0; j < size; ++j)
		{
			if (i & (1 << j)) // 1�� j��ŭ �������� i���� ��Ʈ���� üũ�Ѵ�
			{
				subset.push_back(v[j]);
			}
		}

		ans.emplace_back(subset);
	}

	return ans;
}

int main()
{
	vector<int> v1 = { 4, 1, 5, 2, 3, },
		v2 = { 1, 3, 7, 9, 5, },
		v3, ans;

	int size = -1;
	scanf("%d", size);

	v1.resize(size);
	for (int i = 0; i < size; i++)
		scanf("%d", v1[i]);

	scanf("%d", size);

	v2.resize(size);
	for (int i = 0; i < size; i++)
		scanf("%d", v2[i]);

	for (auto i : v1)
	{
		if (v3.size() <= i)
			v3.resize(i + 1);

		v3[i] = 1;
	}

	for (auto i : v2)
		if (v3.size() <= i || !v3[i])
			ans.push_back(0);
		else
			ans.push_back(1);


	//vector<int> v = {1, 2, 3, 4};
	//return_subset(v);
	//auto i = return_digit(60466175, 36);
	return 0;
}