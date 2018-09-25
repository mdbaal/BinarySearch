#include "BinarySearch.h"


 bool BinarySearch::binarySearch(std::vector<double> list, double target){

	if(list.size() == 1){

		if(list[0] == target)return true; else return false;
	}

	int low = 0;
	int high = list.size()-1;

	int center;

	while(low <= high){
		center = (int) floor(low + (high-low)/2);

		if(list[center] == target){
			return true;
			break;
		}

		if(target < list[center]){
			high = center - 1;
		}else{
			low = center + 1;
		}
	}

	return false;
}
