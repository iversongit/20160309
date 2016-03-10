 ///
 /// @file    priority_queue.cpp
 /// @iverson	(1564329410@qq.com)
 /// @date    2016-03-09 03:55:46
 ///
 
#include <iostream>
#include <queue>
#include <vector>

//优先级队列，采用堆排序
//堆顶元素和新元素进行比较，返回值为true，交换
//返回值为false，不交换
//如果比较器是<(less),按降序排列
//如果比较器是>(greater),按升序排列

using std::cout;
using std::endl;
using std::priority_queue;
using std::vector;

int main(void){
	int arr[10] = {3,4,7,6,1,9,0,11,40,22};
	priority_queue<int,vector<int>,std::greater<int> > pq;
	for(int i=0; i!=10; ++i){
		cout<<arr[i]<<endl;
		pq.push(arr[i]);
		cout<<"当前队列中优先级最高的是-->";
		cout<<pq.top()<<endl;
		
	}
	cout<<endl;

	while(pq.size()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	cout<<endl;
	return 0;	
}
