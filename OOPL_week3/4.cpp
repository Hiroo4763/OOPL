#include <iostream>
using namespace std;

int main()
{
	int i, j, k = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (k == 0) 
				continue;
			cout << "¾È³çÇÏ¼¼¿ä\n";
		}
		cout << "i=" << i << ", j=" << j << endl;
	}
}