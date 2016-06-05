#include <iostream>
#include <string>

using namespace std;

int main()
{
	while (true)
	{
		string input;
		cout << "Please enter an string value: ";
		cin >> input;

		int upCount = 0;
		int lowCount = 0;

		for (size_t i = 0; i < input.size(); i++)
		{
			auto currentCharacter = input[i];
			if (isupper(currentCharacter))
			{
				upCount++;
			}
			else
			{
				lowCount++;
			}
		}

		cout << "UpperCase: " << upCount << " | LowerCase: " << lowCount << endl;
	}

	return 0;
}