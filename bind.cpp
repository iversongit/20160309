 ///
 /// @file    bind.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-03-09 06:35:46
 ///
 
#include <iostream>
#include <functional>
using std::cout;
using std::endl;

int func(int a,int b){
	cout<<"func(int,int)"<<endl;
	return a + b;
}

class A{
	public:
		int funcA(int a,int b){
			cout<<"A::funcA(int,int)"<<endl;
			return a + b;
		}
};

int main(void){
	using namespace std::placeholders;
	auto f1 = std::bind(func,10,_1);
	cout<<f1(10)<<endl;
	cout<<"-----------------------"<<endl;
	A a;
	auto f2 = std::bind(&A::funcA,a,_1,_2);
	cout<<f2(66,88)<<endl;
	cout<<"-----------------------"<<endl;
	std::function<int(int)> f3 = std::bind(&A::funcA,a,_1,100);
	cout<<f3(100)<<endl;
	cout<<"-----------------------"<<endl;
	std::function<int()> f4 = std::bind(&A::funcA,a,6,8);
	cout<<f4()<<endl;
	return 0;
}
