/*二维数组查找*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		int rows = array.size();
		int cols = array[0].size();
		int i = 0;
		int j = cols - 1;
		while (i <= rows - 1 && j >= 0)
		{
			if (target > array[i][j])
				i++;
			else if (target < array[i][j])
				j--;
			else
				return true;
		}
		return false;
	}
};
void main()
{
	vector<vector<int>> array = { {1,2,3},{4,5,6},{7,8,9} };
	Solution s;
	cout<<s.Find(4, array)<<endl;

}