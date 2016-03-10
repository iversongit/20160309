 ///
 /// @file    remove_if.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-03-09 00:39:56
 ///
 
#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;

int main(void){
	vector<int> vecInt;
	vecInt.reserve(10);
	cout<<"vecInt.size()-->"<<vecInt.size()<<endl;
	cout<<"vecInt.capacity()-->"<<vecInt.size()<<endl;

	vector<int>::iterator it;
	for(int i=0; i!=10; ++i){
		vecInt.push_back(i);
	}

	cout<<"vecInt.size()-->"<<vecInt.size()<<endl;
	cout<<"vecInt.capacity()-->"<<vecInt.size()<<endl;
	cout<<"---------------------------"<<endl;
	for(it=vecInt.begin(); it!=vecInt.end(); ++it){
		cout<<*it<<" ";
	}
	cout<<endl;
	vecInt[1] = vecInt[3] = vecInt[8] = 88;
	for(it=vecInt.begin(); it!=vecInt.end(); ++it){
		cout<<*it<<" ";
	}
	cout<<endl;
#if 0
	cout<<"--------after remove 88------------"<<endl;
	remove(vecInt.begin(), vecInt.end(),88);
	for(it=vecInt.begin(); it!=vecInt.end(); ++it){
		cout<<*it<<" ";
	}
#endif
	cout<<endl;

	cout<<"vecInt.size()-->"<<vecInt.size()<<endl;
	cout<<"vecInt.capacity()-->"<<vecInt.size()<<endl;
	cout<<"--------after erase 88-------------"<<endl;
	//erase-remove惯用法-->防止出现迭代器失效的问题
	vecInt.erase(remove(vecInt.begin(), vecInt.end(),88),vecInt.end());
	for(it=vecInt.begin(); it!=vecInt.end(); ++it){
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"vecInt.size()-->"<<vecInt.size()<<endl;
	cout<<"vecInt.capacity()-->"<<vecInt.size()<<endl;
	return 0;
}
