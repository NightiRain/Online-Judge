#include<iostream>
#include<string>

using namespace std;

int main()
{
	//I/O中输入字符串最好用getline
	//因为 cin 遇到空格字符会结束
	string str1;
	string str2;
	getline(cin, str1);
	getline(cin, str2);

	//哈希表统计str2中字符出现的次数
	int hashtable[256] = { 0 };

	for (size_t i = 0; i < str2.size(); ++i)
	{
		hashtable[str2[i]]++;
	}
	//判断str1中的字符是否在哈希表出现过
	//若为0则说明该字符与str2不重复，将该字符存入res字符串
	//最后去重后的结果即为res
	string res;
	for (size_t i = 0; i < str1.size(); ++i)
	{
		if (hashtable[str1[i]] == 0)
		{
			res += str1[i];
		}
	}

	cout << res << endl;

	return 0;
}