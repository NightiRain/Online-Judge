#include<iostream>
#include<string>

using namespace std;

int main()
{
	//I/O�������ַ��������getline
	//��Ϊ cin �����ո��ַ������
	string str1;
	string str2;
	getline(cin, str1);
	getline(cin, str2);

	//��ϣ��ͳ��str2���ַ����ֵĴ���
	int hashtable[256] = { 0 };

	for (size_t i = 0; i < str2.size(); ++i)
	{
		hashtable[str2[i]]++;
	}
	//�ж�str1�е��ַ��Ƿ��ڹ�ϣ����ֹ�
	//��Ϊ0��˵�����ַ���str2���ظ��������ַ�����res�ַ���
	//���ȥ�غ�Ľ����Ϊres
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