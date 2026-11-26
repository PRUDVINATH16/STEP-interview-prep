Problem: Alice and Bob Playing Stone Game

Alice and Bob are playing a game where they take turns removing stones from a pile, with Alice going first.

Rules:
1. Alice starts by removing exactly 10 stones on her first turn.
2. For each subsequent turn, each player removes exactly 1 fewer stone than the previous opponent.
3. The player who cannot make a move loses the game.

Given a positive integer n, return true if Alice wins the game and false otherwise.

Example 1:
Input: n = 12
Output: true

Explanation:
- Alice removes 10 stones, leaving 2 stones.
- Bob must remove 9 stones but only 2 are left.
- Bob cannot make a move, so Alice wins.

Example 2:
Input: n = 1
Output: false

Explanation:
- Alice must remove 10 stones.
- There is only 1 stone.
- Alice cannot make a move, so she loses.


LeetCode: Stone Removal Game

Problem link: https://leetcode.com/problems/stone-removal-game/?envType=daily-question&envId=2026-11-25

I want you to check whether my Python code is correct for this LeetCode problem.

Please:
1. Check whether my code is correct or incorrect.
2. Identify any errors or bugs.
3. Test important edge cases.
4. Explain why my code passes or fails.
5. Do not provide the approach, hints, or corrected code unless I explicitly ask.
6. Help me understand my mistakes so I can solve the problem myself.
