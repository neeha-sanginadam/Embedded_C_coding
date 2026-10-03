n & (1U << pos)       // check bit
n | (1U << pos)       // set bit
n & ~(1U << pos)      // clear bit
n ^ (1U << pos)       // toggle bit
(n >> pos) & 1        // read bit

n & (n - 1)           // clear lowest set bit
n & (-n)              // isolate lowest set bit


# 🧩 3. Bit Manipulation

Bit manipulation is the process of operating directly on individual bits using **bitwise operators**.

It is especially important in **Embedded C, firmware, device drivers, operating systems, hardware registers, and performance-critical code**. ⚙️

---

## 🔹 3.1 Bitwise Operators

| Operator | Name        | Purpose                    |
| :------: | ----------- | -------------------------- |
|    `&`   | AND         | Check / clear bits         |
|   `\|`   | OR          | Set bits                   |
|    `^`   | XOR         | Toggle bits / compare bits |
|    `~`   | NOT         | Invert bits                |
|   `<<`   | Left Shift  | Shift bits left            |
|   `>>`   | Right Shift | Shift bits right           |

For a 16-bit value:

```text
Bit position:
15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0
                                  ↑
                                 LSB
```

📌 **Bit position `0` is the Least Significant Bit (LSB).**

---

## 🔍 3.2 Check Whether a Bit Is Set

To check whether bit `pos` is `1`:

```c
if (n & (1U << pos))
{
    printf("Bit is set\n");
}
```

### Example

```text
n = 4 = 0100

Check bit 2:

1 << 2 = 0100

0100
0100
----
0100  → non-zero → bit is set
```

### 🧠 Key Formula

```c
n & (1U << pos)
```

---

## 🟢 3.3 Set a Bit

Setting a bit means changing it to `1`.

```c
n |= (1U << pos);
```

### Example

```text
n = 0011
pos = 3

1 << 3 = 1000

0011
1000
----
1011
```

📌 **OR is used to set bits.**

---

## 🔴 3.4 Clear a Bit

Clearing a bit means changing it to `0`.

```c
n &= ~(1U << pos);
```

### Example

```text
n = 0011
pos = 1

1 << 1 = 0010
~0010  = 1101

0011
1101
----
0001
```

📌 **AND with an inverted mask is used to clear bits.**

---

## 🔄 3.5 Toggle a Bit

Toggling means:

```text
0 → 1
1 → 0
```

Use XOR:

```c
n ^= (1U << pos);
```

Because:

```text
0 ^ 1 = 1
1 ^ 1 = 0
```

📌 **XOR is used to toggle bits.**

---

## 📖 3.6 Read a Bit

To obtain the actual value (`0` or `1`) of a bit:

```c
int bit = (n >> pos) & 1;
```

### Difference

```c
n & (1U << pos)
```

➡️ Checks whether the bit is set.

```c
(n >> pos) & 1
```

➡️ Returns the actual bit value: `0` or `1`.

---

## ✏️ 3.7 Update a Bit

Update means forcing a bit to a desired value (`0` or `1`).

```c
void update_bit(uint16_t *n, uint16_t pos, uint16_t value)
{
    if (value == 1)
        *n |= (1U << pos);
    else
        *n &= ~(1U << pos);
}
```

### Concept

```text
value = 1 → Set the bit
value = 0 → Clear the bit
```

---

## 🔢 3.8 Count Set Bits

A **set bit** is a bit whose value is `1`.

Example:

```text
121 = 01111001
```

Number of set bits = **5**.

Basic approach:

```c
uint16_t count = 0;

for (uint16_t i = 0; i < 16; i++)
{
    if ((n >> i) & 1)
        count++;
}
```

### ⏱️ Complexity

```text
Time  → O(W)
Space → O(1)
```

where `W` is the number of bits.

---

## ⚪ 3.9 Count Clear Bits

A **clear bit** is a bit whose value is `0`.

```c
uint16_t count = 0;

for (uint16_t i = 0; i < 16; i++)
{
    if (((n >> i) & 1) == 0)
        count++;
}
```

For a 16-bit number:

```text
Clear bits = 16 - Set bits
```

---

## ⚡ 3.10 Check Whether a Number Is a Power of 2

A positive power of 2 contains exactly **one set bit**.

Examples:

```text
1  = 0001
2  = 0010
4  = 0100
8  = 1000
16 = 10000
```

Use:

```c
if (n != 0 && (n & (n - 1)) == 0)
{
    printf("Power of 2\n");
}
```

### Why?

```text
n     = 1000
n - 1 = 0111

1000
0111
----
0000
```

Therefore:

```c
n & (n - 1)
```

is zero.

⚠️ `0` is **not** a power of 2, hence the `n != 0` check.

---

## 🔎 3.11 Find Position of First Set Bit

Search from the **LSB toward the MSB**.

```c
for (uint16_t i = 0; i < 16; i++)
{
    if ((n >> i) & 1)
    {
        printf("First set bit: %u\n", i);
        break;
    }
}
```

For:

```text
24 = 11000
```

The first set bit from the LSB side is:

```text
Position = 3
```

📌 Here, **"first" means the least-significant set bit.**

---

## 🧹 3.12 Clear the Lowest Set Bit

The lowest set bit means the **rightmost `1`**.

Efficient operation:

```c
n &= (n - 1);
```

### Example

```text
n     = 11000
n - 1 = 10111

11000
10111
-----
10000
```

✨ The rightmost `1` is removed.

---

## 🎯 3.13 Find the Only Non-Repeating Number

### Problem

Every number appears twice except one number. Find the number appearing once.

Example:

```text
{1, 1, 2, 2, 3}
```

Answer:

```text
3
```

Use XOR:

```c
uint16_t result = 0;

for (uint16_t i = 0; i < n; i++)
{
    result ^= a[i];
}
```

### 🔑 Important XOR Properties

```text
a ^ a = 0
a ^ 0 = a
```

Therefore, duplicate numbers cancel each other.

### ⏱️ Complexity

```text
Time  → O(n)
Space → O(1)
```

---

## ❓ 3.14 Find Missing Number Using XOR

### Problem

Numbers from `1` to `n+1` are given, with one number missing.

Example:

```text
{1, 2, 3, 5}
```

Missing number:

```text
4
```

### XOR Approach

```c
uint16_t result = 0;

for (uint16_t i = 1; i <= n + 1; i++)
{
    result ^= i;
}

for (uint16_t i = 0; i < n; i++)
{
    result ^= a[i];
}
```

All numbers that appear in both sets cancel, leaving the missing number. ✨

---

## 2️⃣ 3.15 Find Two Non-Repeating Numbers

### Problem

Every number occurs twice except two numbers.

Example:

```text
{1, 2, 3, 2, 1, 4}
```

Non-repeating numbers:

```text
3 and 4
```

### Step 1️⃣ — XOR Everything

```c
xor_all ^= a[i];
```

The result is:

```text
unique1 ^ unique2
```

### Step 2️⃣ — Find a Differing Bit

```c
uint16_t mask = xor_all & (-xor_all);
```

`n & (-n)` isolates the **rightmost set bit**.

### Step 3️⃣ — Divide into Two Groups

```c
if (a[i] & mask)
    num1 ^= a[i];
else
    num2 ^= a[i];
```

The two unique numbers go into different groups, while duplicate pairs stay together and cancel.

### ⏱️ Complexity

```text
Time  → O(n)
Space → O(1)
```

---

## 🔁 3.16 Swap Two Numbers Using XOR

Without a temporary variable:

```c
a ^= b;
b ^= a;
a ^= b;
```

Example:

```text
Before:
a = 10
b = 20

After:
a = 20
b = 10
```

⚠️ In production code, a temporary variable is often clearer. XOR swapping is mainly useful as an **interview bit-manipulation technique**.

---

## ➕➖ 3.17 Check Whether Two Numbers Have Opposite Signs

The sign bit determines whether a signed number is positive or negative.

For same-width signed integers:

```c
if ((a ^ b) < 0)
{
    printf("Opposite signs\n");
}
```

If the sign bits differ, XOR produces a value with the sign bit set.

📌 For a 16-bit signed value, the sign bit is **bit 15**.

---

## 🔄 3.18 Reverse Bits

Bit reversal means reversing **all bit positions**.

Example:

```text
Original:
10110000

Reversed:
00001101
```

For a 16-bit value:

```c
uint16_t reversed = 0;

for (uint16_t i = 0; i < 16; i++)
{
    uint16_t bit = (n >> i) & 1;
    reversed |= bit << (15 - i);
}
```

📌 Bit reversal includes the zero bits as well.

---

## 🔃 3.19 Rotate Bits Left

Rotation is different from shifting because bits leaving one side **wrap around** to the other side.

For a 16-bit value, rotating left by `k`:

```c
uint16_t pos = (i + k) % 16;
```

Concept:

```text
bit i → bit (i + k) % 16
```

Unlike a normal left shift, bits are **not lost**. 🔄

---

## 🔃 3.20 Rotate Bits Right

For a 16-bit value, rotating right by `k`:

```c
uint16_t pos = (i - k + 16) % 16;
```

Concept:

```text
bit i → bit (i - k + 16) % 16
```

The `+16` prevents a negative position before applying `% 16`.

---

## 🧩 3.21 Extract a Bit Field

A **bit field** is a group of consecutive bits.

Two parameters define it:

```text
pos    → starting position
length → number of bits
```

Example:

```text
n = 1101 1010 1011 0110

Extract 4 bits starting at position 4.
```

### Mask

```c
uint16_t mask = ((1U << length) - 1) << pos;
```

### Extract

```c
uint16_t field = (n & mask) >> pos;
```

### General Formula

```c
field = (n >> pos) & ((1U << length) - 1);
```

📌 The final right shift moves the extracted field down to bit position `0`.

---

## 🧱 3.22 Insert a Bit Field

Bit-field insertion means taking bits from one number and placing them into a specific position in another number.

### Steps

```text
1️⃣ Create destination mask
2️⃣ Clear destination field
3️⃣ Extract source field
4️⃣ Shift source field
5️⃣ OR it into destination
```

### Implementation

```c
uint16_t field_mask = ((1U << length) - 1) << pos;

destination &= ~field_mask;

destination |= (source & ((1U << length) - 1)) << pos;
```

---

## 🟢 3.23 Set Multiple Bits

Set multiple selected bits to `1`.

Example:

```text
Set bits:
2, 4, 6, 8, 11, 15
```

Create a mask:

```c
uint16_t mask = (1U << 2) |
                (1U << 4) |
                (1U << 6) |
                (1U << 8) |
                (1U << 11) |
                (1U << 15);
```

Then:

```c
n |= mask;
```

### 🧠 Key Idea

```text
Selected mask bits = 1
```

```c
n |= mask;
```

sets those bits without changing the other bits.

---

## 🔴 3.24 Clear Multiple Bits

Create a mask containing `1` at the positions to clear:

```c
uint16_t mask = (1U << 2) |
                (1U << 4) |
                (1U << 6) |
                (1U << 8) |
                (1U << 11);
```

Then:

```c
n &= ~mask;
```

The selected positions become `0`, while all other positions remain unchanged.

### 🧠 Key Idea

```c
n &= ~mask;
```

---

## ⚖️ 3.25 Check Parity

Parity tells whether the number of set bits is **even or odd**.

Example:

```text
121 = 01111001
```

Number of set bits:

```text
5
```

Therefore:

```text
Odd parity
```

### Implementation

```c
uint16_t count = 0;

for (uint16_t i = 0; i < 16; i++)
{
    if ((1U << i) & n)
        count++;
}

if (count % 2 == 0)
    printf("Even parity\n");
else
    printf("Odd parity\n");
```

---

## ⚡ 3.26 Brian Kernighan's Algorithm

Brian Kernighan's algorithm counts set bits efficiently.

### 🔑 Key Operation

```c
n = n & (n - 1);
```

This removes the **lowest/rightmost set bit**.

### Example

```text
n     = 1100
n - 1 = 1011

1100
1011
----
1000
```

One set bit was removed.

Again:

```text
1000 → 0000
```

Therefore, there were **2 set bits**.

### Implementation

```c
uint16_t count = 0;

while (n)
{
    n &= (n - 1);
    count++;
}
```

### ⏱️ Complexity

```text
Time  → O(k)
Space → O(1)
```

where `k` is the number of set bits.

✨ Unlike checking every bit, this algorithm performs one iteration **per set bit**.

---

# 🧠 3.27 Important Bit-Manipulation Patterns

These are the patterns worth remembering for interviews:

```c
// Check bit
n & (1U << pos)

// Set bit
n |= (1U << pos)

// Clear bit
n &= ~(1U << pos)

// Toggle bit
n ^= (1U << pos)

// Read bit
(n >> pos) & 1

// Clear lowest set bit
n &= (n - 1)

// Isolate lowest set bit
n & (-n)

// Check power of 2
n != 0 && (n & (n - 1)) == 0
```

---

# 🔀 3.28 Important XOR Properties

```text
a ^ a = 0
a ^ 0 = a
a ^ b ^ a = b
```

These properties are useful for:

* 🎯 Finding non-repeating numbers
* ❓ Finding missing numbers
* 2️⃣ Finding two non-repeating numbers
* 🔄 XOR-based swapping

---

# ⚙️ 3.29 Embedded-C Applications

Bit manipulation is especially important in embedded systems because hardware registers are commonly controlled at the **bit level**.

Typical applications include:

* 🔌 GPIO configuration
* ⚙️ Peripheral registers
* 🚨 Interrupt configuration
* 📡 Communication protocol fields
* 🔧 Hardware control/status registers
* 💾 Bit-field packing/unpacking
* 🔍 Reading hardware status flags
* 🧩 Enabling/disabling hardware features

### Example

```c
#define ENABLE_BIT   (1U << 3)

register |= ENABLE_BIT;     // Enable
register &= ~ENABLE_BIT;    // Disable
```

---

# 📌 3.30 Section Summary

| Concept                   | Operation                  |
| ------------------------- | -------------------------- |
| 🔍 Check bit              | `n & (1U << pos)`          |
| 🟢 Set bit                | `n \|= (1U << pos)`        |
| 🔴 Clear bit              | `n &= ~(1U << pos)`        |
| 🔄 Toggle bit             | `n ^= (1U << pos)`         |
| 📖 Read bit               | `(n >> pos) & 1`           |
| ✏️ Update bit             | Set / Clear based on value |
| 🔢 Count set bits         | Scan each bit              |
| ⚡ Clear lowest set bit    | `n &= (n - 1)`             |
| 🎯 Isolate lowest set bit | `n & (-n)`                 |
| 🔢 Power of 2             | `n != 0 && !(n & (n - 1))` |
| 🧩 Extract field          | Mask + Shift               |
| 🧱 Insert field           | Clear + Shift + OR         |
| 🔄 Rotate                 | Wrap bits around           |
| ⚖️ Parity                 | Even / Odd number of `1`s  |
| ⚡ Brian Kernighan         | Count set bits efficiently |

---

## 🎯 Key Interview Takeaway

> **Use masks to select specific bits and bitwise operators to manipulate them.**

The most important patterns to remember:

```c
n |=  (1U << pos);     // Set
n &= ~(1U << pos);     // Clear
n ^=  (1U << pos);     // Toggle
n &=  (n - 1);         // Clear lowest set bit
n &   (-n);            // Isolate lowest set bit
```

### 🚀 Section 3 Completed!

**Bit Manipulation ✅**


**Concept → Example → Write the code → Review → Interview Notes** 💻🔥
