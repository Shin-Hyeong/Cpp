#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> nums;

	int check = 0;

	string N;
	cin >> N;

	for (int i = 0; i < N.size(); i++)
	{
		nums.push_back(N[i] - '0');
	}

	sort(nums.begin(), nums.end(), greater<>());

	for (int i = 0; i < nums.size(); i++)
	{
		check += nums[i];
	}

	if (nums[nums.size() - 1] == 0 && check % 3 == 0)
		for (int i = 0; i < nums.size(); i++) cout << nums[i];
	else cout << -1;

	return 0;
}