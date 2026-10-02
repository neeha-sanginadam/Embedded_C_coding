# 🧩 C Fundamentals

> Core C programming problems to build strong problem-solving fundamentals for Embedded C interviews.


# 1️⃣ Swap Two Numbers

### 💡 Logic

Store one value in a temporary variable and exchange the two values.

```c
int temp = a;
a = b;
b = temp;
```

---

# 2️⃣ Find Largest of Two Numbers

### 💡 Logic

Compare the two numbers using `if-else`. The greater value is the largest.

```c
if (a > b)
    printf("%d", a);
else
    printf("%d", b);
```

---

# 3️⃣ Check Even or Odd

### 💡 Logic

A number is even if it is completely divisible by `2`. Use `%` to check the remainder.

```c
if (num % 2 == 0)
    printf("Even");
else
    printf("Odd");
```

---

# 4️⃣ Check Positive, Negative or Zero

### 💡 Logic

Compare the number with zero. A value greater than zero is positive, less than zero is negative, otherwise it is zero.

```c
if (num > 0)
    printf("Positive");
else if (num < 0)
    printf("Negative");
else
    printf("Zero");
```

---

# 5️⃣ Factorial of a Number

### 💡 Logic

Factorial is the product of all integers from `1` to `n`. Use a loop to repeatedly multiply the result.

```c
int factorial = 1;

for (int i = 1; i <= n; i++)
    factorial *= i;
```

Example:

```text
5! = 5 × 4 × 3 × 2 × 1 = 120
```

---

# 6️⃣ Fibonacci Series

### 💡 Logic

Each Fibonacci number is the sum of the previous two numbers. Maintain two variables to generate the next number without an array.

```c
int first = 0;
int second = 1;

for (int i = 0; i < n; i++)
{
    printf("%d ", first);

    int next = first + second;
    first = second;
    second = next;
}
```

Example:

```text
0 1 1 2 3 5 8 13 21 34
```

---

# 7️⃣ Check Prime Number

### 💡 Logic

A prime number has exactly two factors: `1` and itself. Check divisibility only up to `sqrt(n)`.

```c
int is_prime = 1;

if (n < 2)
    is_prime = 0;

for (int i = 2; i <= n / i; i++)
{
    if (n % i == 0)
    {
        is_prime = 0;
        break;
    }
}
```

---

# 8️⃣ Print Prime Numbers in a Range

### 💡 Logic

Check every number in the given range using a prime-checking function. Print the number if it is prime.

```c
int prime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

for (int i = start; i <= end; i++)
{
    if (prime(i))
        printf("%d ", i);
}
```

---

# 9️⃣ Reverse an Integer

### 💡 Logic

Extract the last digit using `% 10` and add it to the reversed number. Remove the last digit using `/ 10`.

```c
int reverse = 0;

while (num)
{
    reverse = reverse * 10 + num % 10;
    num /= 10;
}
```

Example:

```text
1234 → 4321
```

---

# 🔟 Check Palindrome Number

### 💡 Logic

A number is a palindrome if it reads the same forwards and backwards. Reverse the number and compare it with the original.

```c
int original = num;
int reverse = 0;

while (num)
{
    reverse = reverse * 10 + num % 10;
    num /= 10;
}

if (original == reverse)
    printf("Palindrome");
else
    printf("Not Palindrome");
```

Example:

```text
121 → Palindrome
123 → Not Palindrome
```

---

# 1️⃣1️⃣ Count Number of Digits

### 💡 Logic

Repeatedly divide the number by `10`. Each division removes one digit.

```c
int count = 0;

if (num == 0)
{
    count = 1;
}
else
{
    while (num)
    {
        count++;
        num /= 10;
    }
}
```

Example:

```text
123456 → 6 digits
```

---

# 1️⃣2️⃣ Sum of Digits

### 💡 Logic

Extract each digit using `% 10` and add it to `sum`. Remove the extracted digit using `/ 10`.

```c
int sum = 0;

while (num)
{
    sum += num % 10;
    num /= 10;
}
```

Example:

```text
1234 → 1 + 2 + 3 + 4 = 10
```

---

# 1️⃣3️⃣ Product of Digits

### 💡 Logic

Extract each digit using `% 10` and multiply it with `product`. Initialize `product` to `1`.

```c
int product = 1;

while (num)
{
    product *= num % 10;
    num /= 10;
}
```

Example:

```text
1234 → 1 × 2 × 3 × 4 = 24
```

---

# 1️⃣4️⃣ Armstrong Number

### 💡 Logic

Count the digits and raise every digit to that count. If the sum equals the original number, it is an Armstrong number.

```c
int temp = num;
int digits = 0;
int sum = 0;

while (temp)
{
    digits++;
    temp /= 10;
}

temp = num;

while (temp)
{
    int digit = temp % 10;
    int power = 1;

    for (int i = 0; i < digits; i++)
        power *= digit;

    sum += power;
    temp /= 10;
}

if (sum == num)
    printf("Armstrong");
else
    printf("Not Armstrong");
```

Example:

```text
153 = 1³ + 5³ + 3³
    = 153
```

---

# 1️⃣5️⃣ Find GCD

### 💡 Logic

Use the Euclidean algorithm and repeatedly replace `(a, b)` with `(b, a % b)`. When `b` becomes `0`, `a` is the GCD.

```c
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}
```

Example:

```text
GCD(48, 18)

48 % 18 = 12
18 % 12 = 6
12 % 6  = 0

GCD = 6
```

**Complexity:** `O(log(min(a, b)))`

---

# 1️⃣6️⃣ Find LCM

### 💡 Logic

LCM can be calculated using the relationship between LCM and GCD. Divide first to reduce the possibility of integer overflow.

```c
int lcm = (a / gcd(a, b)) * b;
```

Formula:

```text
LCM(a, b) = (a × b) / GCD(a, b)
```

Example:

```text
GCD(12, 18) = 6

LCM = (12 / 6) × 18
    = 36
```

---

# 1️⃣7️⃣ Calculate Power of a Number

### 💡 Logic

Multiply the base by itself `exponent` times. Initialize the result to `1`.

```c
int result = 1;

for (int i = 0; i < exponent; i++)
{
    result *= base;
}
```

Example:

```text
2⁵ = 2 × 2 × 2 × 2 × 2 = 32
```

**Complexity:** `O(exponent)`

---

# 1️⃣8️⃣ Check Leap Year

### 💡 Logic

A year divisible by `400` is a leap year. Otherwise, it must be divisible by `4` but not by `100`.

```c
if ((year % 400 == 0) ||
    (year % 4 == 0 && year % 100 != 0))
{
    printf("Leap Year");
}
else
{
    printf("Not a Leap Year");
}
```

Examples:

```text
2024 → Leap Year
2000 → Leap Year
1900 → Not a Leap Year
2023 → Not a Leap Year
```

---

# 1️⃣9️⃣ Generate Multiplication Table

### 💡 Logic

Run a loop from `1` to `10` and multiply the given number by the loop counter.

```c
for (int i = 1; i <= 10; i++)
{
    printf("%d x %d = %d\n",
           num, i, num * i);
}
```

Example:

```text
5 × 1  = 5
5 × 2  = 10
5 × 3  = 15
...
5 × 10 = 50
```

---

## 📊 C Fundamentals Progress

```text
[████████████████████] 19 / 19

Status: ✅ Completed
```

