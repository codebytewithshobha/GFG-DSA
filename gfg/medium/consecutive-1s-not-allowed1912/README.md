# Consecutive 1's not allowed

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a positive integer  **n**, count all possible  **distinct binary strings**  of length  **n**  such that there are  **no consecutive 1’s**.

 **Examples :** 

```
Input: n = 3
Output: 5
Explanation: 5 strings are ("000", "001", "010", "100", "101").

```

```
Input: n = 2
Output: 3
Explanation: 3 strings are ("00", "01", "10").

```

```
Input: n = 1
Output: 2
```

 **Constraints:** 
1 ≤ n ≤ 44

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-27T17:52:13.401Z  

```cpp
class Solution {
public:
    int countStrings(int n) {
        int a = 1, b = 2;

        if (n == 1) return 2;

        for (int i = 2; i <= n; i++) {
            int c = a + b;
            a = b;
            b = c;
        }

        return b;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/consecutive-1s-not-allowed1912/1)