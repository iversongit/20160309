 ///
 /// @file    iterator.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-03-09 06:17:38
 ///
 
#include <iostream>
#include <iterator>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

template <typename container>
void printElements(container c){
	typename container::const_iterator cit = c.begin();
	for(; cit != c.end(); ++cit){
		cout<<*cit<<" ";
	}
	cout<<endl;
}

int main(void){
	vector<int> vec;
	list<int> lit;
	for(int i=0; i<3; i++){
		vec.push_back(i);
	}
	copy(vec.begin(),vec.end(),std::back_insert_iterator<list<int> >(lit));
	printElements(lit);
	return 0;
}
