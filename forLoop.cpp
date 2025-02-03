#include <iostream>

using namespace std;

void pointForLoop(){
	// Declearations
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int size = 9;
	int i, j, t;

	for(i = 0; i < size; i++){
		for(j = i + 1; j < size; j++){
			if(*(arr + j) < *(arr + i)){
				t = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = t; 		
			}
		}
		cout << arr[i] << "\n";
	}	
}



int main(){
	// Function call
	pointForLoop();

}
