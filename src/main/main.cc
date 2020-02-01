#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    double arr[] = {1,26,13,8,10,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<double> v(arr,arr+n);
    Solution solution ;
    cout << solution.FindMedian(v) << endl;

    return EXIT_SUCCESS;
}