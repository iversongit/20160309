 ///
 /// @file    stack.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-03-09 03:12:13
 ///
 
#include <iostream>
#include <vector>
#include <stack>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::stack;

int main(){
	stack<int,vector<int> > stackInt;
	cout<<"--------int入栈---------"<<endl;
	for(int i=0; i!=20; ++i){
		cout<<i<<" ";
		stackInt.push(i);
	}
	cout<<endl;
	cout<<"stackInt.size()-->"<<stackInt.size()<<endl;

	cout<<"--------int出栈---------"<<endl;
	while(stackInt.size()){
		cout<<stackInt.top()<<" ";
		stackInt.pop();
	}
	cout<<endl;
	cout<<"stackInt.size()-->"<<stackInt.size()<<endl;

	cout<<"*********************"<<endl;
	stack<string,vector<string> > stackstring;
	cout<<"--------string入栈---------"<<endl;
	for(char c='A'; c<='Z'; ++c){
		string s(2,c);
		cout<<s<<" ";
		stackstring.push(s);
	}
	cout<<endl;
	cout<<"stackstring.size()-->"<<stackstring.size()<<endl;
	cout<<"--------string出栈---------"<<endl;
	while(stackstring.size()){
		cout<<stackstring.top()<<" ";
		stackstring.pop();
	}
	cout<<endl;
	cout<<"stackstring.size()-->"<<stackstring.size()<<endl;
	return 0;
}
