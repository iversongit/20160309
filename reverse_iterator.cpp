 ///
 /// @file    reverse_iterator.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-03-09 08:24:39
 ///
 
#include <iostream>
#include <vector>

using std::endl;
using std::cout;
using std::vector;

int main(void){
	int arr[5] = {1,2,3,4,5};
	vector<int> vecInt(arr,arr+5);
	vector<int>::reverse_iterator rit;
	for(rit=vecInt.rbegin(); rit != vecInt.rend(); ++rit){
		cout<<*rit<<" ";
	}
	cout<<endl;
	return 0;
}
