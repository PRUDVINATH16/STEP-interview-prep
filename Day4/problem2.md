# Finding a Pair Equal to the Target Sum

## Version - 1

```
1. Read the array and the target sum.

2. Scan the array from left to right using index `i`.

3. For the current element `arr[i]`, scan the rest of the array from left to right using index `j` (starting from `i + 1`).
   - If `arr[i] + arr[j] == targetSum`:
     - Print the pair `(arr[i], arr[j])`.

4. End loop.
```

```
Mistake:

Not checking the duplicate pairs.
```


## Version - 2

```
1. Read the array and the target sum.

2. Scan the array from left to right using index `i`.

3. For the current element `arr[i]`, scan the rest of the array from left to right using index `j` (starting from `i + 1`).
   - If `arr[i] + arr[j] == targetSum`:
     - Create a flag `isDuplicate = false`.
     - Scan the array backward from `i - 1` down to `0` using index `k`.
       - If `arr[k] == arr[i]`:
         - Set `isDuplicate = true` and break the loop.
     - If `isDuplicate == false`:
       - Print the pair `(arr[i], arr[j])`.

4. End loop.
```

```
Mistake:

Time complexity went to O(N-cube), due to nested loops.
```

```
Better approach:

Using HashMap, we can solve this problem in O(n) time complexity, but space costs here.
```