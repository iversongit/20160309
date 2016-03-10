 ///
 /// @file    bind.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-03-09 06:35:46
 ///
 
#include <iostream>
#include <functional>
using std::cout;
using std::endl;

void print(int n1,int n2,int n3,const int& n4,int n5){
	cout<<"print(int,int,int,int,int)"<<endl;
	cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<" "<<n5<<endl;
}

int g(int n){
	return n;
}


struct A{
	public:
		void print_sum(int a,int b){
			cout<<"A::funcA(int,int)"<<endl;
			cout<< a + b <<endl;
		}
		int data = 5;
};

int main(void){
	//注意：bind绑定参数时，采用的是值传递
	//占位符的数字代表的是实参传递时的位置
	//可以理解成是一个变量，其余的为无用参数
	using namespace std::placeholders;
	int n = 7;
	auto f1 = std::bind(print,_2,_1,_3,std::cref(n),_5);
	n =18;
	f1(3,4,5,9,6);
	cout<<"-----------------------"<<endl;
	A a;
	a.data = 100;
	auto f2 = std::bind(&A::print_sum,a,_1,_2);
	f2(66,88,22,33,44);
	cout<<"-----------------------"<<endl;
	auto f3 = std::bind(&A::data,_1);
	cout<<f3(a)<<endl;
	cout<<"-----------------------"<<endl;
	return 0;
}
