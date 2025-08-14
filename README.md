# Rubrik OA — Minimum Operations to Transform One Permutation into Another

## Problem

You are given two arrays **A** and **B**, each of size **N**, containing all integers from `1` to `N` exactly once (i.e., both are permutations). You want to transform **B** into **A** using the following operation:

- Move **any element** in **B** to **either the beginning or the end** of the array.

Return the **minimum number of operations** required.

### Example

**Input:**
```

A = \[4, 2, 3, 1, 5, 6]
B = \[3, 1, 4, 6, 5, 2]

```

**Output:**
```

3

````

**Explanation:**
1. Move `2` to the beginning → `[2, 3, 1, 4, 6, 5]`
2. Move `4` to the beginning → `[4, 2, 3, 1, 6, 5]`
3. Move `6` to the end → `[4, 2, 3, 1, 5, 6]`

---

## Approach

1. Map each element in **A** to its position.
2. Transform **B** into an array of indices according to this mapping.
3. Find the length of the **longest contiguous increasing subsequence** in the transformed array.
4. The minimum number of moves = `N - (length of longest contiguous increasing subsequence)`.

---

## Complexity

- **Time:** `O(N)` — single pass to map positions and single pass to find the longest block.
- **Space:** `O(N)` — for storing the mapping and transformed array.

---



```
```
