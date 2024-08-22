#ifndef PRINT_VECTOR_2D_HPP
#define PRINT_VECTOR_2D_HPP

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>

using namespace std;

void printVector2D(vector<vector<int>> twoVector){
	for(int i=0; i<twoVector.size(); i++){
		for(int j=0; j<twoVector[i].size(); j++){
			cout<<twoVector[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

#endif