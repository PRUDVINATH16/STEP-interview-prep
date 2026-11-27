# Problem Statement: Rotate an Array by K Positions to the Right

## Problem Description

Given an integer array `nums` and an integer `k`, rotate the array to the right by `k` positions.

Rotating an array to the right means moving each element `k` positions forward. Elements that move beyond the last position should wrap around to the beginning of the array.

## Example 1

**Input:**
```text
nums = [1, 2, 3, 4, 5, 6, 7]
k = 3
```

**Output:**
```text
[5, 6, 7, 1, 2, 3, 4]
```

**Explanation:**

Rotate the array to the right by 3 positions.

- Move 7 to the first position.
- Move 6 to the second position.
- Move 5 to the third position.
- The remaining elements shift to the right.

The final array is `[5, 6, 7, 1, 2, 3, 4]`.

## Example 2

**Input:**
```text
nums = [-1, -100, 3, 99]
k = 2
```

**Output:**
```text
[3, 99, -1, -100]
```

**Explanation:**

After rotating the array to the right by 2 positions, the last two elements move to the beginning.

