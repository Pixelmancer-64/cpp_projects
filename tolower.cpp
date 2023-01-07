#include <iostream>
using namespace std;
main()
{
	int h,i, tam=10;
	char v1[tam]={'C','h','o','c','o','l','a','t','e','z'};
	i=0;
	while (v1[i] != '\0')
	{
		if(v1[i] >= 65 && v1[i] <= 90)
		{
			cout << v1[i];
		}
		i++;
	}
	
}
