#ifndef PRINT_VECTOR_1D_HPP
#define PRINT_VECTOR_1D_HPP

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>

using namespace std;

void printVector1D(vector<int> oneVector){
	for(int i=0; i<oneVector.size(); i++){
		cout<<oneVector[i]<<" ";
	}
	cout<<endl;
}

#endif