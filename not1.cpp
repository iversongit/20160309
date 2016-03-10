 ///
 /// @file    not1.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-03-09 08:12:07
 ///
 
#include <iostream>
#include <vector>
#include <algorithm>

using std::endl;
using std::cout;
using std::vector;

int main(void){
	int arr[6] = {1,2,3,4,5,6};
	vector<int> vecInt(arr,arr + 6);
	for(int i=0; i<6; ++i){
		cout<<vecInt[i]<<" ";
	}
	cout<<endl;
	cout<<"-----------------------"<<endl;
	std::less<int> it;
	replace_if(vecInt.begin(),vecInt.end(),not1(bind2nd(it,3)),7);
	for(int i=0; i<6; ++i){
		cout<<vecInt[i]<<" ";
	}
	cout<<endl;
	return 0;
}
