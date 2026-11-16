# 🔤 Section 5: Strings

Strings in C are character arrays terminated by a null character (`'\0'`). This section focuses on **string traversal, standard string operations, two-pointer techniques, character frequency, string manipulation, and common interview algorithms**.

---

## 📚 Topics Covered

### 🔹 1. Implement `strlen()`

Find the length of a string without using the standard library function.

**Logic:**
- Initialize a counter to zero.
- Traverse the string until `'\0'` is encountered.
- Increment the counter for every character.

```c
while (*p != '\0')
{
    count++;
    p++;
}
```

⏱️ **Time:** O(n)  
💾 **Space:** O(1)

💡 The null terminator is not included in the string length.

---

### 🔹 2. Implement `strcpy()`

Copy the contents of one string into another.

**Logic:**
- Traverse the source string.
- Copy each character into the destination.
- Continue until the null terminator is reached.
- Copy the null terminator as well.

```c
while (*src != '\0')
{
    *dest = *src;
    src++;
    dest++;
}

*dest = '\0';
```

⏱️ **Time:** O(n)  
💾 **Space:** O(1) auxiliary space

💡 The destination must have sufficient capacity to hold the source string, including `'\0'`.

---

### 🔹 3. Implement `strcmp()`

Compare two strings character by character.

**Logic:**
- Traverse both strings simultaneously.
- Compare corresponding characters.
- If characters differ, return their difference.
- Otherwise, move both pointers forward.
- If both strings terminate together, return `0`.

```c
while (*s1 && *s2 && *s1 == *s2)
{
    s1++;
    s2++;
}
```

⏱️ **Time:** O(n)  
💾 **Space:** O(1)

💡 `strcmp()` returns:
- `0` → Strings are equal.
- Negative value → First differing character in the first string is smaller.
- Positive value → First differing character in the first string is greater.

---

### 🔹 4. Implement `strcat()`

Append one string to the end of another string.

**Logic:**
- Traverse the destination until its null terminator.
- Start copying the source from that position.
- Copy characters until the source terminates.
- Append the null terminator.

```c
while (*dest != '\0')
    dest++;

while (*src != '\0')
{
    *dest = *src;
    dest++;
    src++;
}

*dest = '\0';
```

⏱️ **Time:** O(n + m)  
💾 **Space:** O(1) auxiliary space

💡 Standard `strcat()` does not insert a space between strings. The destination must have sufficient capacity.

---

# 🔄 String Reversal & Palindrome

### 🔹 5. Reverse a String

Use the **two-pointer technique**.

```text
left →             ← right
N  E  E  H  A
↓
A  H  E  E  N
```

**Logic:**
- Initialize one pointer at the beginning and another at the last character.
- Swap the characters at both pointers.
- Move the left pointer forward and the right pointer backward.
- Continue until the pointers meet or cross.

```c
while (left < right)
{
    // Swap characters
    left++;
    right--;
}
```

⏱️ **Time:** O(n)  
💾 **Space:** O(1)

---

### 🔹 6. Check Palindrome String

A palindrome reads the same forward and backward.

Example:

```text
madam → Palindrome
hello → Not a palindrome
```

**Logic:**
- Initialize two pointers at the beginning and end of the string.
- Compare the characters at both pointers.
- If they differ, the string is not a palindrome.
- Otherwise, move both pointers toward the center.
- If all characters match, the string is a palindrome.

```c
while (left < right)
{
    if (*left != *right)
        return false;

    left++;
    right--;
}
```

⏱️ **Time:** O(n)  
💾 **Space:** O(1)

💡 This comparison is case-sensitive and considers spaces.

---

### 🔹 7. Check Palindrome Without Including Spaces

Check whether a string is a palindrome while ignoring spaces.

Example:

```text
nurses run → Palindrome
hello world → Not a palindrome
```

**Logic:**
- Initialize two pointers at the beginning and end.
- Skip spaces from the left side.
- Skip spaces from the right side.
- Compare the remaining characters.
- If they match, move both pointers toward the center.
- If all non-space characters match, the string is a palindrome.

```c
// Skip spaces from both ends
while (*left == ' ')
    left++;

while (*right == ' ')
    right--;
```

⏱️ **Time:** O(n)  
💾 **Space:** O(1)

💡 This approach ignores ordinary spaces (`' '`). Tabs and newlines require additional whitespace handling.

---

# 🔠 Character Classification

### 🔹 8. Count Vowels

Count the vowels present in a string.

**Logic:**
- Traverse the string character by character.
- Convert uppercase characters to lowercase if case-insensitive counting is required.
- Check whether the character is `a`, `e`, `i`, `o`, or `u`.
- Increment the counter whenever a vowel is found.

```c
if (ch == 'a' || ch == 'e' || ch == 'i' ||
    ch == 'o' || ch == 'u')
{
    count++;
}
```

⏱️ **Time:** O(n)  
💾 **Space:** O(1)

---

### 🔹 9. Count Consonants

Count alphabetic characters that are not vowels.

**Logic:**
- Traverse the string.
- Check whether the character is an alphabet.
- Check whether it is not a vowel.
- Increment the counter if both conditions are satisfied.

```c
if (isalpha(ch) && !is_vowel(ch))
{
    count++;
}
```

⏱️ **Time:** O(n)  
💾 **Space:** O(1)

💡 Spaces, digits, and special characters are not counted as consonants.

---

### 🔹 10. Count Digits

Count the numeric digits present in a string.

**Logic:**
- Traverse the string.
- Check whether each character falls between `'0'` and `'9'`.
- Increment the counter whenever a digit is found.

```c
if (ch >= '0' && ch <= '9')
{
    count++;
}
```

⏱️ **Time:** O(n)  
💾 **Space:** O(1)

---

### 🔹 11. Count Spaces

Count the number of ordinary spaces in a string.

**Logic:**
- Traverse the string.
- Check whether the current character is `' '`.
- Increment the counter whenever a space is found.

```c
if (ch == ' ')
{
    count++;
}
```

⏱️ **Time:** O(n)  
💾 **Space:** O(1)

💡 This counts ordinary spaces, not tabs or newlines.

---

# 🔢 Character Frequency & Hashing

### 🔹 12. Count Character Frequency

Find how many times each lowercase character appears in a string.

**Logic:**
- Create a frequency array of size 26.
- Initialize all elements to zero.
- Traverse the string.
- Calculate the index using `character - 'a'`.
- Increment the corresponding frequency.

```c
frequency[ch - 'a']++;
```

Example:

```text
String: banana

a → 3
b → 1
n → 2
```

⏱️ **Time:** O(n + 26)  
💾 **Space:** O(26)

⚠️ This approach assumes lowercase English alphabetic input.

---

### 🔹 13. Count Character Frequency for Uppercase and Lowercase

Maintain separate frequency counts for uppercase and lowercase characters.

**Logic:**
- Create a frequency array of size 52.
- Use indices 0–25 for lowercase letters.
- Use indices 26–51 for uppercase letters.
- Traverse the string.
- Calculate the corresponding index based on the character's case.
- Increment its frequency.

```c
// Lowercase
frequency[ch - 'a']++;

// Uppercase
frequency[ch - 'A' + 26]++;
```

Example:

```text
String: NeeHa

N → 1
e → 2
H → 1
a → 1
```

⏱️ **Time:** O(n + 52)  
💾 **Space:** O(52)

💡 Uppercase and lowercase characters are counted separately.

---

### 🔹 14. Find First Occurrence of a Character

Find the first position where a target character appears.

**Logic:**
- Initialize a pointer at the beginning of the string.
- Traverse the string while maintaining an index.
- Compare each character with the target character.
- Return the index immediately when a match is found.
- If no match is found, return `-1`.

```c
if (*p == target)
{
    return index;
}
```

⏱️ **Time:** O(n)  
💾 **Space:** O(1)

💡 Use zero-based indexing.

---

### 🔹 15. Remove Spaces

Remove spaces from a string without using an additional array.

Use the **read and write pointer technique**.

**Logic:**
- Initialize read and write pointers at the beginning.
- Traverse the string using the read pointer.
- If the current character is not a space, copy it to the write pointer.
- Increment the write pointer only when a character is copied.
- Add the null terminator at the final write position.

```c
if (*read != ' ')
{
    *write = *read;
    write++;
}

read++;
```

Example:

```text
Before: Embedded C Programming
After:  EmbeddedCProgramming
```

⏱️ **Time:** O(n)  
💾 **Space:** O(1)

---

### 🔹 16. Remove Duplicate Characters

Remove repeated characters while preserving the first occurrence.

**Logic:**
- Create a visited array to track characters already encountered.
- Traverse the string using a read pointer.
- Check whether the current character has already appeared.
- If it has not appeared, mark it as visited and copy it to the write position.
- Skip characters that have already appeared.
- Terminate the resulting string with `'\0'`.

```text
String: programming

Result: progamin
```

⏱️ **Time:** O(n) using a fixed-size character tracking array  
💾 **Space:** O(1)

💡 The first occurrence of each character is preserved.

---

### 🔹 17. Find First Non-Repeating Character

Find the first character that appears exactly once.

**Logic:**

Use two passes:

1. Traverse the string and count the frequency of every character.
2. Traverse the original string again.
3. Find the first character whose frequency is `1`.
4. Return that character.
5. If no such character exists, report that none was found.

```text
String: swiss

Frequency:
s → 3
w → 1
i → 1

First non-repeating character: w
```

⏱️ **Time:** O(n + 256)  
💾 **Space:** O(256)

💡 Frequency counting identifies unique characters, while the second traversal preserves the original order.

---

### 🔹 18. Find First Repeating Character

Find the character whose second occurrence appears first during traversal.

**Logic:**
- Create a visited array to track previously encountered characters.
- Traverse the string from left to right.
- Check whether the current character has already been visited.
- If it has, return that character.
- Otherwise, mark it as visited.
- If traversal finishes without finding a repeated character, report that none exists.

```text
String: programming

First repeating character: r
```

⏱️ **Time:** O(n)  
💾 **Space:** O(256)

💡 This approach finds the earliest second occurrence, not necessarily the first character in the original string that has a duplicate somewhere later.

---

# 🔄 String Manipulation

### 🔹 19. Reverse Words in a String

Reverse the order of words while keeping the characters within each word unchanged.

Example:

```text
Original:
I love embedded C

Result:
C embedded love I
```

Use the **reverse the entire string + reverse individual words** technique.

**Logic:**
1. Reverse the entire string.
2. Traverse the reversed string and identify individual words.
3. Reverse each word separately.
4. Continue until all words are processed.

```text
Step 1: Reverse entire string
C deddebme evol I

Step 2: Reverse individual words
C embedded love I
```

⏱️ **Time:** O(n)  
💾 **Space:** O(1)

---

### 🔹 20. Count Number of Words

Count the number of words in a string.

**Logic:**
- Initialize a word counter to zero.
- Maintain a flag to identify whether the current position is inside a word.
- Traverse the string.
- When a non-whitespace character is found while outside a word, increment the counter.
- Set the flag to indicate that a word has started.
- When whitespace is encountered, reset the flag.
- Continue until the end of the string.

```c
if (!isspace(ch) && !in_word)
{
    count++;
    in_word = 1;
}

if (isspace(ch))
{
    in_word = 0;
}
```

Example:

```text
String:  Embedded C Programming

Word count: 3
```

⏱️ **Time:** O(n)  
💾 **Space:** O(1)

💡 This approach handles multiple consecutive spaces, leading spaces, trailing spaces, tabs, and newlines.

---

# 🔤 Anagram Problems

### 🔹 21. Check Whether Two Strings Are Anagrams

Two strings are anagrams if they contain the same characters with the same frequencies, regardless of order.

Example:

```text
String 1: listen
String 2: silent

Result: Anagrams
```

**Logic:**
- Create a frequency array.
- Traverse the first string and increment the frequency of each character.
- Traverse the second string and decrement the frequency of each character.
- Check the frequency array.
- If every frequency is zero, the strings are anagrams.
- Otherwise, they are not anagrams.

```c
// First string
frequency[ch]++;

// Second string
frequency[ch]--;
```

⏱️ **Time:** O(n + m + 256)  
💾 **Space:** O(256)

💡 Case sensitivity and whitespace handling should be defined before comparing the strings.

---

# 🎯 Key Concepts to Remember

| Concept | Application |
|---|---|
| Pointer Arithmetic | String traversal and manipulation |
| Null Terminator (`'\0'`) | Identifying the end of a string |
| Two-Pointer Technique | Reversal and palindrome checking |
| Read/Write Pointers | Removing spaces and duplicates |
| Frequency Array | Character counting and anagrams |
| Hashing | Tracking character occurrences |
| In-place Modification | Reversing and modifying strings |
| Character Classification | Vowels, consonants, digits and spaces |
| Standard String Functions | `strlen()`, `strcpy()`, `strcmp()`, `strcat()` |
| Word Traversal | Reversing and counting words |

💡 **Interview Tip:** For every string problem, consider empty strings, single-character strings, uppercase/lowercase handling, spaces, special characters, and null termination.
