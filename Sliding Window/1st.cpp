#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of Array: ";
    cin >> n;
 vector<int> arr(n);
cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
int k;
    cout << "Enter window size k: ";
    cin >> k;
if(k > n || k <= 0){
        cout << "Invalid";
        return 0;
    }
int sum = 0;
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }
int maxSum = sum;
    for (int i = k; i < n; i++){
        sum += arr[i];
        sum -= arr[i - k];
        maxSum = max(maxSum, sum);
    }

    cout << "Maximum sum of subarray of size " << k << " is: " << maxSum << endl;

    return 0;
}