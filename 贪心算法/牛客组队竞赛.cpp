#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	//�������ն����������
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
		//Ҫ��ʹÿ��ڶ���֮����󣬽�3*n�����ݷֳ����ݣ�����ߵ�n��������Ϊ��Сֵ��֮���2n����������һ��
		//ÿ��������ߵ���Ϊ�м�ֵ����n��ʼ����3n-2����
		for (int i = n; i <= 3 * n - 2; i += 2)
		{
			sum += arr[i];
		}
		cout << sum;
	}
}