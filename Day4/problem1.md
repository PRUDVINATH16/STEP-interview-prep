# Closest to the given number.

## My first algorithm

```
1. Read the array and the target number.

2. Initialize finalDistance = -1 (acts as a flag).

3. Loop through the array:
  If arr[i] > 0:
    distance = arr[i] - target
  If distance < 0: distance = distance * -1
  Else (if arr[i] <= 0):
    distance = (-1 * arr[i]) + target

 Check the flag:
  If finalDistance == -1:
    finalDistance = distance
    closestElement = arr[i]
  Else if finalDistance > distance:
    finalDistance = distance
    closestElement = arr[i]

4. Print closestElement.

```

```
## My mistakes:

In the above logic, the logic and code is COMPLETELY FINE, but is brute force.

I can simply use abs() function and write it in just 2 lines. I overcomplicated the logic(without think correctly) and expanded for negative targets and negative elements.
```

```
Updated approach:

1. Read the array and the target number.

2. Initialize finalDistance = -1 (acts as a flag).

3. Initialize closestElement (to store the answer).

4. Loop through the array from i = 0 to n - 1:
   Calculate distance: distance = abs(arr[i] - target)
   
   Check and update:
     If finalDistance == -1 OR distance < finalDistance:
       finalDistance = distance
       closestElement = arr[i]

5. Print closestElement.

```