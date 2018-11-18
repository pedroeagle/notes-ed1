#include <vector>
#include <iostream>
#include<cassert>
using namespace std;
vector <int> merge(const vector<int> &a, const vector <int> &b){
	vector <int> c;
	int j = 0, k = 0;
	for(int i = 0; i < (a.size()+b.size()); i++){
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
int main()
{
 vector<int> a { 4, 5 }, b { };
 // Teste #01: primeiro exemplo da prova
 auto z = merge(a, b);
 assert(z == a);
 for(int i = 0; i < z.size(); i++){
 	cout<<z.at(i)<<endl;
 }

 // Teste #02: segundo exemplo da prova
 b = vector<int>({ 1, 2, 3 });
 z = merge(a, b);

 assert(z == vector<int>({ 1, 2, 3, 4, 5 }));
 for(int i = 0; i < z.size(); i++){
 	cout<<z.at(i)<<endl;
 }

 // Teste #03: terceiro exemplo da prova
 a = vector<int>({});
 b = vector<int>({});
 z = merge(a, b);

 //assert(z == vector<int>({ 1, 2, 3, 4, 5, 6 }));
 for(int i = 0; i < z.size(); i++){
 	cout<<z.at(i)<<endl;
 }
 return 0;
}