#include<omp.h>
#include<iostream>
using namespace std;

int main() {
#pragma omp parallel
	{
	int ID = omp_get_thread_num();
	cout << "Hello - "<<ID;
	cout << " World - " << ID << endl;
	}
	return 0;
}
