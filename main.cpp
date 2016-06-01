#include "head.h"
//#include "Vec.h"

using namespace std; 

int main()
{
	int iRet = 0;
	float iSum = 10;
	//iRet = rename("newname.txt", "../oldname.txt");
	if (iRet < 0)
	{
		printf("rename is wrong, errno=%d\n", errno);
		return E_FAIL;
	}	
	printf("Sum = %.3f\n", iSum);
	int a = 123;
	const double &b = a;
	vector<int> buf;
	typedef vector<int>::iterator iter;
	iter it;
	it = buf.begin();
	//cout << *it; 
}
