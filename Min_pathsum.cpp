#include <iostream>
#include <cstdio>

using namespace std;

int min (int a, int b) {
	return (a <= b) ? a : b;
}

int minTreePath(tnode *t) {
	if (t == NULL) {
		return 0;
	}
	if (t -> left == NULL) {
		return minTreePath(t -> right) + t -> value;
	}
	if (t -> right == NULL) {
		return minTreePath(t -> left) + t -> value;
	}
	return min(minTreePath(t -> left), minTreePath(t -> right)) + t -> value;
}

int main()
{
	return 0;
}