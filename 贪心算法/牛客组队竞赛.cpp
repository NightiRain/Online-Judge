#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	//持续接收多组测试用例
	while (cin >> n)
	{
		long long sum = 0;
		vector<int> arr;
		arr.resize(3 * n);
		for (int i = 0; i < 3 * n; ++i)
		{
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		//要想使每组第二个之和最大，将3*n个数据分成三份，最左边的n个数据作为最小值，之后的2n个数据两个一组
		//每组数据左边的作为中间值，从n开始，到3n-2结束
		for (int i = n; i <= 3 * n - 2; i += 2)
		{
			sum += arr[i];
		}
		cout << sum;
	}
}