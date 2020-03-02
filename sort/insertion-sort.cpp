#include <vector>
#include <iostream>
using namespace std;
void insertion_sort(vector<int>& vec) {
	int chave = 0;
	for(int j = 1; j < vec.size(); j++) {
		chave = vec[j];
		int i = j - 1;
		while(i >= 0 && vec[i] > chave) {
			vec[i + 1] = vec[i];
			i--;
		}
		vec[i+1] = chave;
	}
}

int main() {
	vector<int> v = {1, 4, -4, -200, 1000, 123, -2, 18, 9};
	insertion_sort(v);
	for(int value : v) {
		cout<<value<<endl;
	}
	return 0;
}
