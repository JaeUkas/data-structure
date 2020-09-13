#include <iostream>

using namespace std;

int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

int search(int start, int end, int target) {
	
	if (start > end) return -1;
	int mid = (start + end) / 2;
	if (arr[mid] == target) return mid;
	else if (arr[mid] > target) search(start, mid - 1, target);
	else search(mid + 1, end, target);

}


int main() {

	int result = search(0, 9, 3);
	
	if (result != -1) {
		cout << result + 1 << "번째입니다";
	}

	return 0;
}