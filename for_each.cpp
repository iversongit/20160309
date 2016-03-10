 ///
 /// @file    for_each.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-03-09 04:32:40
 ///
 
#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void func(vector<int>::value_type v){
	cout<<v<<endl;
}

int main(void){
	int arr[6] = {1,2,3,4,5,6};
	vector<int> vecInt(arr,arr + 6);
	for_each(vecInt.begin(),vecInt.end(),func);
	cout<<endl;
	return 0;
}
