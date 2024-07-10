#include <iostream>
#include<vector>
using namespace std;

int getSingleElement(vector<int> &arr){
	int xorr = 0;
	for(int i = 0;i < arr.size();i++){
		xorr = xorr ^ arr[i];
	}	
	return xorr;
}