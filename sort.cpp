 ///
 /// @file    sort.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-03-09 02:39:16
 ///
 
#include <iostream>
#include <algorithm>
#include <vector>

using std::endl;
using std::cout;
using std::vector;

int main(void){
	int arr[10] = {2,8,6,5,3,77,1,4,9,18};
	vector<int> vecInt(arr,arr + 10);
	vector<int>::iterator it;
	for(it=vecInt.begin(); it!=vecInt.end(); ++it){
		cout<< *it <<" ";
	}
	cout<<endl;

	sort(vecInt.begin(),vecInt.end(),std::greater<int>());
	for(it=vecInt.begin(); it!=vecInt.end(); ++it){
		cout<< *it <<" ";
	}
	cout<<endl;
	return 0;
}
