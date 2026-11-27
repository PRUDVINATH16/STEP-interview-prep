#include <stdio.h>

// it take O(n*k)
void rotation_1(int arr[], int n, int k)
{
    k = k % n;

    for (int i = 0; i < k; i++)
    {
        int temp = arr[n - 1];

        for (int j = 0; j < n - 1; j++)
            arr[j] = arr[j + 1];

        arr[0] = temp;
    }
}

// it take O(n)
int rotation_2(int arr[], int n, int k)
{
    int count = 0;
    k = k % n;

    for (int start = 0; count < n; start++)
    {
        int position = start;
        int prev = arr[start];

        do
        {
            position = (position + k) % n;
            int curr = arr[position];
            arr[position] = prev;
            prev = curr;
            count++;

        } while (start != position);
    }
}

int reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
    }
}

int rotation_3(int arr[], int n, int k)
{
    reverse(arr, 0, n - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, k - 1);
}

int main()
{
}