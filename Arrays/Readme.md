
# 📦 Section 4: Arrays

Arrays are one of the most fundamental data structures in C. This section focuses on **array traversal, searching, manipulation, frequency counting, hashing, two-pointer techniques, and common interview algorithms**.

---

## 📚 Topics Covered

### 🔹 1. Find Minimum Element

Find the smallest element in an array using a single traversal.

```c
int minimum = INT_MAX;

for (int i = 0; i < n; i++)
{
    if (a[i] < minimum)
        minimum = a[i];
}
```

⏱️ **Time:** O(n)
💾 **Space:** O(1)

---

### 🔹 2. Find Maximum and Second Largest

Maintain two variables while traversing the array.

```c
int maximum = INT_MIN;
int second_largest = INT_MIN;

for (int i = 0; i < n; i++)
{
    if (a[i] > maximum)
    {
        second_largest = maximum;
        maximum = a[i];
    }
    else if (a[i] != maximum && a[i] > second_largest)
    {
        second_largest = a[i];
    }
}
```

⏱️ **Time:** O(n)
💾 **Space:** O(1)

💡 **Important:** Handle duplicate maximum values carefully.

---

### 🔹 3. Find Minimum and Second Smallest

Similar to finding the second largest element.

```c
int minimum = INT_MAX;
int second_smallest = INT_MAX;
```

Maintain the two smallest values during traversal.

⏱️ **Time:** O(n)
💾 **Space:** O(1)

---

### 🔹 4. Reverse an Array

Use the **two-pointer technique**.

```text
left →          ← right
1  2  3  4  5
```

Swap the elements and move both pointers toward the center.

```c
while (left < right)
{
    int temp = a[left];
    a[left] = a[right];
    a[right] = temp;

    left++;
    right--;
}
```

⏱️ **Time:** O(n)
💾 **Space:** O(1)

---

### 🔹 5. Copy One Array Into Another

Copy each element individually.

```c
for (int i = 0; i < n; i++)
{
    b[i] = a[i];
}
```

⏱️ **Time:** O(n)
💾 **Space:** O(n) for the destination array

💡 `b = a` does **not** copy array contents in C.

---

# 🔢 Frequency & Hashing

### 🔹 6. Count Frequency of Elements

#### Direct Frequency Array

Useful when the values are within a small known range.

```c
int frequency[10] = {0};

for (int i = 0; i < n; i++)
{
    frequency[a[i]]++;
}
```

⏱️ **Time:** O(n + k)
💾 **Space:** O(k)

⚠️ This approach is suitable only when the values can safely be used as array indices.

---

### 🔹 Hash Table

For arbitrary integer values, a hash table can be used.

```text
Key → Frequency
```

Example:

```text
2 → 3
4 → 2
7 → 1
```

Hashing maps a key to a bucket:

```text
key → hash function → bucket
```

Collision handling was implemented using **separate chaining**.

```text
Bucket
   ↓
[Key | Count | Next] → [Key | Count | Next]
```

⏱️ **Average:** O(n)
⏱️ **Worst case:** O(n²)
💾 **Space:** O(k)

💡 **Interview insight:**

> Bucket = where we look
> Key = what we are looking for

---

### 🔹 7. Find Duplicate Elements

Build a frequency table and print elements whose frequency is greater than 1.

```c
if (current->count > 1)
{
    printf("%d ", current->key);
}
```

⏱️ **Average:** O(n) with hashing
💾 **Space:** O(k)

---

### 🔹 8. First Non-Repeating Element

Use two passes:

1. Count frequencies.
2. Traverse the original array again and find the first element whose frequency is `1`.

```text
Frequency table
       ↓
Original array → preserve ordering
```

💡 Hashing tells us the frequency, while the original array determines **which one appears first**.

⏱️ **Average:** O(n)
💾 **Space:** O(k)

---

# 🔄 Array Manipulation

### 🔹 9. Find Missing Element

For a sequence with one missing element, XOR can be used.

```c
missing = 0;

for (int i = start; i <= end; i++)
    missing ^= i;

for (int i = 0; i < n; i++)
    missing ^= a[i];
```

Important XOR properties:

```text
x ^ x = 0
x ^ 0 = x
```

⏱️ **Time:** O(n)
💾 **Space:** O(1)

💡 XOR avoids the integer overflow problem that can occur with the sum approach.

---

### 🔹 10. Remove Duplicates From Sorted Array

Because the array is sorted, duplicates are adjacent.

Use a separate index to maintain the unique portion.

```c
int j = 1;

for (int i = 1; i < n; i++)
{
    if (a[i] != a[j - 1])
    {
        a[j] = a[i];
        j++;
    }
}
```

`j` represents the **logical size** of the unique portion.

⏱️ **Time:** O(n)
💾 **Space:** O(1)

---

### 🔹 11. Remove Duplicates From Unsorted Array

For an unsorted array, adjacency cannot be used.

Possible approaches:

* Brute force → O(n²)
* Hash table → O(n) average

---

### 🔹 12. Remove an Element From an Array

Use a write index to overwrite elements that should remain.

```c
int j = 0;

for (int i = 0; i < n; i++)
{
    if (a[i] != key)
    {
        a[j++] = a[i];
    }
}
```

The new logical size becomes `j`.

⏱️ **Time:** O(n)
💾 **Space:** O(1)

💡 C arrays have fixed capacity. Removing elements changes the **logical size**, not the physical capacity.

---

### 🔹 13. Insert Element at a Given Position

Insertion requires shifting elements to the right.

```text
Before:
1 2 4 5 6

Insert 3 at position 3:

1 2 3 4 5 6
```

⏱️ **Beginning/Middle:** O(n)
⏱️ **End:** O(1) if capacity is available
💾 **Space:** O(1)

💡 Always distinguish between:

```text
Array capacity
Logical size
```

---

### 🔹 14. Move Zeros to the End

Preserve the relative order of non-zero elements.

```c
int j = 0;

for (int i = 0; i < n; i++)
{
    if (a[i] != 0)
        a[j++] = a[i];
}

while (j < n)
{
    a[j++] = 0;
}
```

Example:

```text
0 1 0 3 12 0 5
        ↓
1 3 12 5 0 0 0
```

⏱️ **Time:** O(n)
💾 **Space:** O(1)

---

### 🔹 15. Move Negative Numbers to One Side

Partition the array so that negative numbers appear on one side.

```c
int j = 0;

for (int i = 0; i < n; i++)
{
    if (a[i] < 0)
    {
        int temp = a[j];
        a[j] = a[i];
        a[i] = temp;
        j++;
    }
}
```

⏱️ **Time:** O(n)
💾 **Space:** O(1)

⚠️ This does **not** preserve relative order.

A stable solution using shifting preserves order but can take:

⏱️ **Time:** O(n²)

---

# 🔄 Array Rotation

### 🔹 16. Rotate Array Left

Example:

```text
Original:
1 2 3 4 5 6 7

Left rotate by 2:

3 4 5 6 7 1 2
```

Using an extra array:

```c
source_index = (i + pos) % n;
```

⏱️ **Time:** O(n)
💾 **Space:** O(n)

---

### 🔹 17. Rotate Array Right

For right rotation:

```c
source_index = (i - pos + n) % n;
```

Example:

```text
1 2 3 4 5 6 7

Right rotate by 2:

6 7 1 2 3 4 5
```

---

### 🔹 18. Array Rotation Using Reversal Algorithm ⭐

An in-place O(n) solution.

For **right rotation by k**:

```text
1. Reverse last k elements
2. Reverse first n-k elements
3. Reverse the entire array
```

Example:

```text
1 2 3 4 5 6 7

Reverse last 2:
1 2 3 4 5 7 6

Reverse first 5:
5 4 3 2 1 7 6

Reverse all:
6 7 1 2 3 4 5
```

⏱️ **Time:** O(n)
💾 **Space:** O(1)

💡 If `k > n`, normalize:

```c
k %= n;
```

---

# 🔗 Multiple Arrays

### 🔹 19. Merge Two Arrays

If both arrays are sorted and the destination has enough capacity, merge from the **end**.

```text
A: 1 3 5 7
B: 2 4 6 8

Result:
1 2 3 4 5 6 7 8
```

Starting from the end avoids overwriting elements that still need to be processed.

⏱️ **Time:** O(n + m)
💾 **Extra space:** O(1) when destination has sufficient capacity

---

### 🔹 20. Find Common Elements

For two sorted arrays, use the **two-pointer technique**.

```c
while (i < n && j < m)
{
    if (a[i] == b[j])
    {
        printf("%d ", a[i]);
        i++;
        j++;
    }
    else if (a[i] < b[j])
    {
        i++;
    }
    else
    {
        j++;
    }
}
```

⏱️ **Time:** O(n + m)
💾 **Space:** O(1)

---

### 🔹 21. Find Union of Two Sorted Arrays

Use two pointers and avoid printing duplicates.

```text
A: 1 2 3 5 7
B: 2 4 6 7

Union:
1 2 3 4 5 6 7
```

⏱️ **Time:** O(n + m)
💾 **Space:** O(1)

---

### 🔹 22. Find Intersection of Two Sorted Arrays

Use two pointers.

If:

```text
a[i] == b[j]
```

the element is common.

For duplicate-free intersection, skip repeated values.

⏱️ **Time:** O(n + m)
💾 **Space:** O(1)

---

# 🎯 Sum-Based Problems

### 🔹 23. Pair With Given Sum — Two Sum

Find two elements whose sum equals the target.

Example:

```text
Array:
2 7 11 15 3 6 9

Target:
18
```

Pairs include:

```text
3 + 15 = 18
7 + 11 = 18
```

#### Brute Force

```c
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        if (a[i] + a[j] == target)
        {
            printf("%d %d\n", a[i], a[j]);
        }
    }
}
```

⏱️ **Time:** O(n²)
💾 **Space:** O(1)

#### Hash Table

Store previously encountered elements and search for:

```text
required = target - a[i]
```

⏱️ **Average:** O(n)
💾 **Space:** O(n)

💡 Search for the complement **before inserting the current element** to avoid using the same element twice.

---

### 🔹 24. Triple Sum — Three Sum

Find three elements whose sum equals a target.

Concept:

```text
a[i] + a[j] + required = target
```

Hashing can achieve approximately O(n²) average time, but the more common interview solution is:

```text
Sort + Two Pointers
```

⏱️ **Time:** O(n²) after sorting
💾 **Extra space:** O(1) depending on sorting algorithm

---

# 📈 Maximum / Special Elements

### 🔹 25. Maximum Subarray Sum ⭐

Find the contiguous subarray with the maximum sum.

Example:

```text
-2 1 -3 4 -1 2 1 -5 4
```

Maximum subarray:

```text
4 -1 2 1
```

Maximum sum:

```text
6
```

Use **Kadane's Algorithm**.

```c
int sum = a[0];
int maximum = a[0];

for (int i = 1; i < n; i++)
{
    if (sum + a[i] > a[i])
        sum += a[i];
    else
        sum = a[i];

    if (maximum < sum)
        maximum = sum;
}
```

💡 Important corner case:

```text
All elements negative
```

Do **not** initialize `sum` and `maximum` to `0` if the subarray must be non-empty.

⏱️ **Time:** O(n)
💾 **Space:** O(1)

---

### 🔹 26. Equilibrium Index

An index where:

```text
Sum of elements on the left
=
Sum of elements on the right
```

Example:

```text
-7 1 5 2 -4 3 0
         ↑
```

At index `3`:

```text
Left:
-7 + 1 + 5 = -1

Right:
-4 + 3 + 0 = -1
```

Therefore:

```text
Equilibrium index = 3
```

Efficient approach:

1. Calculate total sum.
2. Traverse the array.
3. Subtract current element from total → right sum.
