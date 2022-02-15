#include<iostream>
using namespace std;
int main()
{
	int testCases;
	cin >> testCases;
	int* test = new int[testCases];

	for (int i = 0; i < testCases; i++)
		test[i] = 0;
	for (int i = 0; i < testCases; i++)
	{
		int x;
		int y;
		string s;
		cin >> x >> y >> s;

		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == 'C')
				for (int k = j + 1; k < s.length(); k++)
					if (s[k] == 'C')
						break;
					else if (s[k] == 'J')
					{
						test[i] += x;
						break;
					}
			else if (s[j] == 'J')
				for (int k = j + 1; k < s.length(); k++)
					if (s[k] == 'J')
						break;
					else if (s[k] == 'C')
					{
						test[i] += y;
						break;
					}
		}

	}
	for (int i = 0; i < testCases; i++)
		cout << "Case #" << i + 1 << ": " << test[i] << endl;
	return 0;
}