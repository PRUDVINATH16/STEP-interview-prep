## Approach

1. Initialize `i = 1` to represent the current number to print.

2. Initialize `status = 1` to represent the direction of movement.
   - `status = 1` means move forward (increasing order).
   - `status = -1` means move backward (decreasing order).

3. Use a `for` loop to print exactly `K` elements.

4. Inside the loop:
   - Print the current value of `i`.
   - If `i == N`, change `status = -1` because we reached the maximum number and need to move backward.
   - If `i == 1`, change `status = 1` because we reached the minimum number and need to move forward.
   - Update `i` using `i += status` to move in the current direction.

5. Repeat these steps until exactly `K` elements are printed.

