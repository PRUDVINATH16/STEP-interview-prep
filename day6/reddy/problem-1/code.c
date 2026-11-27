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
    k = k % n;

    reverse(arr, 0, n - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, k - 1);
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    int arr3[] = {1, 2, 3, 4, 5, 6, 7};

    int n = 7;
    int k = 3;

    rotation_1(arr1, n, k);
    rotation_2(arr2, n, k);
    rotation_3(arr3, n, k);

    printf("Rotation 1: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);

    printf("\nRotation 2: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr2[i]);

    printf("\nRotation 3: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr3[i]);

    return 0;
}
