 ///
 /// @file    replace_if.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-03-09 01:23:26
 ///
 
#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(void){
	int arr[5] = {1,2,3,4,5};
	vector<int> vecInt(arr,arr + 5);
	std::less<int> it;
	//将小于3的元素全部替换成8
	replace_if(vecInt.begin(),vecInt.end(),std::bind2nd(it,3),8);
	for(int i=0; i!=5; ++i){
		cout<<vecInt[i]<<" ";
	}
	cout<<endl;
	cout<<"------运用sort对元素进行升序排序-------"<<endl;
	sort(vecInt.begin(),vecInt.end());
	for(int i=0; i!=5; ++i){
		cout<<vecInt[i]<<" ";
	}
	cout<<endl;
//	for(int i=0; i!=5; ++i){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
	return 0;
}
