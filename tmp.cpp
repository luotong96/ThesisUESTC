#include <bit/stdc++.h>
using namespace std;
int main()
{
	sort(bid,bid+n);
	while(count > 0)
	{
		if(i > n)
			break;
		min = min(bid[i].bid,count);
		count -= min;
		allo_ind = min;
		i++;
	}
	return 0;
}