# Thoughtworks STEP Prep: Array Post-Mortem (Q1 & Q2)

## 1. Elements Greater Than Average
**Goal:** Find all elements in an array greater than the array's average.

### My Attempt & The Trap
- **Approach:** Calculated the sum, found the average, then looped again to compare.
- **Mistake:** I tried to force a "one-pass" \(O(N)\) solution, thinking the interviewer would penalize two passes.
- **The Lesson:** A one-pass solution is **impossible** here. You cannot know if an element is greater than the average until you have the sum of *all* elements. The best interview answer is explaining the **dependency**: *"No, because the condition for each element depends on the global sum. We inherently need two passes."*
- **Edge Cases:** Must guard against empty arrays (division by zero) and understand that if all elements are equal, nothing prints.

---

## 2. Moving Zeros to the End (Preserving Order)
**Goal:** Move all zeros to the end of the array in-place, maintaining the relative order of non-zero elements.

### My First Attempt (Insertion/Shifting Logic)
- **Approach:** Find a zero, shift all subsequent elements left, and put the zero at the end. Used a state tracker to prevent infinite loops.
- **Mistake:** Time complexity is \(O(N^2)\). Shifting is too slow. 

### My Second Attempt (Inward Two-Pointer)
- **Approach:** `i` from the left looking for 0, `j` from the right looking for non-zero. Swap them.
- **Mistake:** The time complexity is \(O(N)\), **but it destroys the relative order** of the non-zero elements. Fixing the order would require shifting, taking us back to \(O(N^2)\).

### The Final Optimal Logic (Left-to-Right Write Pointer)
- **Approach:** Use a read pointer `i` and a write pointer `j` (both starting at 0). If `arr[i] != 0`, swap `arr[i]` with `arr[j]` and increment both. If `arr[i] == 0`, just increment `i`.
- **Why it's optimal:** It is \(O(N)\) time, \(O(1)\) space, and perfectly maintains the relative order.
- **Micro-optimization:** Only swap if `i != j` to avoid swapping an element with itself. 

---

## 💡 Core Takeaway
**Always look out for trade-offs (Time vs. Space vs. Order).** 
