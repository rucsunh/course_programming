//
// 	big_sheep.cpp
//  Created on: 15 Oct 2018
//  Author: sunh

#include <iostream>
using namespace std;

int main(){
	float sheep[10] = {0};
	float big_sheep = 0.0;
	int i = 0, big_sheep_no = 0;
	
	cout << "Please input the weight:\n";
	for (i = 0; i < 10; i++){
		cin >> sheep[i];
		if (big_sheep < sheep[i]){
			big_sheep = sheep[i];
			big_sheep_no = i;
		}
	}
	
	cout << "The fattest sheep's weight is " << big_sheep << endl;
	cout << "The fattest sheep's number is " << big_sheep_no << endl;
	
	return 0;
}


