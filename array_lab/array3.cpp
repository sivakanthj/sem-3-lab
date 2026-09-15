#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1, 3, 5, 6};
    int target = 5;
    int n = 4;

    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            cout << mid;
            return 0;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << left;

    return 0;
}