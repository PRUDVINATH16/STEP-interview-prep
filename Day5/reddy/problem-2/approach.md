## What I Understand from the Problem

- Alice starts the game.
- First, Alice removes 10 stones.
- Then Bob removes (Alice's removal - 1) stones.
- Next, Alice removes (Bob's removal - 1) stones.
- This continues until a player cannot remove the required number of stones.
- If Alice cannot remove the stones, Bob wins.
- If Bob cannot remove the stones, Alice wins.

## Approach

- Given the number of stones.
- `removeStones` represents the current number of stones a player needs to remove (initially 10).
- `status = false` indicates that we initially assume Bob will win.

**Steps:**

1. Run a loop until a player cannot remove the required stones.
2. Check whether the remaining stones are less than `removeStones`.
   - If yes, return the current `status`.
3. Otherwise:
   - Toggle `status` using `status = !status` to switch the winner.
   - Subtract `removeStones` from the total stones.
   - Decrease `removeStones` by 1.
4. Repeat until the game ends.
