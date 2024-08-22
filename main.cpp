#include "solution.hpp"
#include "printOne.hpp"
#include "printTwo.hpp"

int main(){

	Solution solution;
	vector<vector<int>> edges={{1,2},{2,3},{3,4},{1,4},{1,5}};
	vector<int> output=solution.findRedundantConnection(edges);
	cout<<"Original graph: "<<endl;
	printVector2D(edges);
	cout<<"Output: "<<endl;
	printVector1D(output);


	return 0;
}