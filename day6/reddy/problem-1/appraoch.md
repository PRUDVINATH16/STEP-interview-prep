# Rotate an Array by K Positions to the Right

## Approach 1: Repeated Rotation (Brute Force)

### What I understand from the problem

We are given an array and a number `k`.

We need to rotate the array to the right by `k` positions.

### Approach

- First, calculate `k = k % n` to avoid unnecessary rotations.
- Repeat the rotation `k` times.
- In each rotation:
  1. Store the last element of the array in a temporary variable.
  2. Shift all the elements one position to the right.
  3. Place the stored last element at the first position.
- After completing `k` rotations, the array will be rotated to the right.

### Complexity

- Time Complexity: `O(n * k)`
- Space Complexity: `O(1)`

---

## Approach 2: Cycle Replacement

### What I understand from the problem

Instead of rotating the array one position at a time, we can directly move each element to its correct position.

For right rotation, an element at index `i` should move to:

`(i + k) % n`

### Approach

- First, calculate `k = k % n`.

- Maintain a `count` variable to track how many elements have been moved.

- Start from index `0`.

- Store the current element in a temporary variable called `prev`.

- Calculate the next position using:

  `position = (position + k) % n`

- Store the element at the next position in another temporary variable called `curr`.

- Place `prev` at the next position.

- Update `prev = curr` so that the replaced element can be moved to its correct position.

- Increase the count after every movement.

- Continue until we return to the starting position.

- If some elements are still not moved, start another cycle from the next starting index.

- Repeat until all `n` elements are moved.

### Complexity

- Time Complexity: `O(n)`
- Space Complexity: `O(1)`

---

## Approach 3: Reversal Algorithm

### What I understand from the problem

i observer the output there is relationship b/w the reversing a array

### Approach

- First, calculate `k = k % n`.
- Reverse the entire array.
- Reverse the first `k` elements.
- Reverse the remaining `n-k` elements.
- Now the array will be rotated to the right by `k` positions.

### Example

**Input:**

`arr = [1, 2, 3, 4, 5, 6, 7]`

`k = 3`

**Step 1: Reverse the entire array.**

`[7, 6, 5, 4, 3, 2, 1]`

**Step 2: Reverse the first k elements.**

`[5, 6, 7, 4, 3, 2, 1]`

**Step 3: Reverse the remaining elements.**

`[5, 6, 7, 1, 2, 3, 4]`

**Final Output:**

`[5, 6, 7, 1, 2, 3, 4]`

### Complexity

- Time Complexity: `O(n)`
- Space Complexity: `O(1)`

---

