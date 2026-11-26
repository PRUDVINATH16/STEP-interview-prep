### **Problem Statement: Best Time to Buy and Sell Stock II**

You are given an integer array `prices` where `prices[i]` represents the price of a given stock on the `i-th` day.

On each day, you can decide to buy and/or sell the stock. You can hold at most one share of stock at any time. However, you can buy and sell the stock multiple times.

You may sell and buy the stock on the same day, provided you do not hold more than one share at a time.

Your task is to **find and return the maximum profit you can achieve.**

### **Example 1**

**Input:**

```
prices = [7, 1, 5, 3, 6, 4]
```

**Output:**

```
7
```

**Explanation:**

- Buy on day 2 at price 1.
- Sell on day 3 at price 5. Profit = 4.
- Buy on day 4 at price 3.
- Sell on day 5 at price 6. Profit = 3.

Total profit = 4 + 3 = 7.

### **Example 2**

**Input:**

```
prices = [1, 2, 3, 4, 5]
```

**Output:**

```
4
```

**Explanation:** Buy on day 1 at price 1 and sell on day 5 at price 5.

### **Example 3**

**Input:**

```
prices = [7, 6, 4, 3, 1]
```

**Output:**

```
-1
```

**Explanation:** No transactions are done because the stock price keeps decreasing.