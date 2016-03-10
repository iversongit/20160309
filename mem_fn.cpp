 ///
 /// @file    mem_fn.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-03-09 07:47:07
 ///
 
#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class NumVal{
	public:
		NumVal()
		:_val(0)
		{
		
		}

		NumVal(int val)
		:_val(val)
		{
		
		}

		bool display(){
			cout<<_val<<" ";
			return true;
		}

		bool isEven(){
			if(!(_val%2)){
				return true;
			}else{
				return false;
			}
		}

		bool isPrime(){
			for(int i=2; i <= (_val/2); ++i){
				if(!(_val % i)){
					return false;
				}
			}
			return true;
		}
	private:
		int _val;
};

int main(void){
	vector<NumVal> vecNum(10);
	for(int i=0; i<10; ++i){
		vecNum[i] = NumVal(i + 1);
	}

	cout<<"vecNum中元素的初始值为："<<endl;
	for_each(vecNum.begin(),vecNum.end(),std::mem_fn(&NumVal::display));
	cout<<endl;
	cout<<"------------------"<<endl;
	auto f1 = remove_if(vecNum.begin(),vecNum.end(),std::mem_fn(&NumVal::isPrime));
	for_each(vecNum.begin(),f1,std::mem_fn(&NumVal::display));
	cout<<endl;
	return 0;
}


