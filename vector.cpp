 ///
 /// @file    vector.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-03-09 00:20:00
 ///
 
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main(void){
	vector<int> vecInt;
	vecInt.push_back(1);

	int idex = 2;

	vector<int>::iterator it;
	for(it=vecInt.begin(); it!=vecInt.end(); ++it){
		cout<<*it<<endl;
		/*双向遍历时可以修改vector中元素的值，
		 *但是不能添加或删除元素，否则会使迭
		 *代器失效
		 */ 
		vecInt.push_back(idex);
		++idex;
	}

	return 0;
}


