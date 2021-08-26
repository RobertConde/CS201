#include <iostream>
#include <vector>

using namespace std;

template<typename Type>
void Swap(Type &first, Type &second) {
	Type tempSecond = second;

	second = first;
	first = tempSecond;
}

template<typename Type>
int OperatorCmp(Type one, Type two) {
	if (one == two) return 0;
	return (one < two ? -1 : 1);
}

template<typename Type>
void Sort(vector<Type> &v, int (cmp)(Type one, Type two) = OperatorCmp) {
	for (int i = 0; i < v.size() - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < v.size(); j++) {
			if (cmp(v[j], v[minIndex]) < 0)
				minIndex = j;
		}

		Swap(v[i], v[minIndex]);
	}
}

template<typename Type>
void printArray(vector<Type> &v) {
	for (Type thing : v)
		cout << thing << " ";

	cout << "\n";
}

int main() {
	vector<int> v = {10, 9, 12, 37, 69, 4, 53, 50};

	cout << "Original: ";
	printArray(v);

	cout << "Sorting...\n";
	Sort(v);

	cout << "Sorted: ";
	printArray(v);
}
