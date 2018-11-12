#include <vector>
#include <iostream>
using namespace std;

vector<int> merge(const vector<int> &a, const vector<int> &b){
	vector<int> c;
	int j = 0, k = 0;
	for(int i = 0; i < a.size()+b.size(); i++){
		if(j >= a.size()){
			c.push_back(b.at(k));
			k++;
		}
		else if(k >= b.size()){
			c.push_back(a.at(j));
			j++;
		}
		else if(a.at(j) > b.at(k)){
			c.push_back(b.at(k));
			k++;
		}
		else{
			c.push_back(a.at(j));
			j++;
		}
	}
	return c;
}
int main(){
	vector<int> a, b, c;
	a.push_back(4);
	a.push_back(7);
	a.push_back(9);
	b.push_back(5);
	b.push_back(6);
	b.push_back(8);
	b.push_back(10);
	b.push_back(10);
	b.push_back(10);
	b.push_back(10);
	b.push_back(10);
	b.push_back(1);
	c = merge(a, b);
	for(int i = 0; i < c.size(); i++){
		cout<<c.at(i)<<endl;
	}
	return 0;
}