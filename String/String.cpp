/*
На вход подается арифметическое выражение
определить его корректность.
пример: (8+2) - корректно, а 8+2)( - некорректно.
*/

#include <iostream>


using namespace std;

int main()
{

	char In[30];
	int top{0};
	int fail{1};

	cout << "Type example: ";
	cin >> In;

	for (int i = 0; In[i] != '\0'; i++)
	{

		if (In[i] == '(')
			top += 1;

		if (In[i] == ')')
		{

			if (top != 0)
				top = top - 1;

			else
				cout << "Uncorrect!\n"; fail = 0; break;

		}

	}

	if (fail == 1)
	{
		if (top == 0) cout << "Correct!\n";

		else cout << "Uncorrect!\n";
	}

	return 0;

}
