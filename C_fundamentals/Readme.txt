# C Fundamentals — Coding Problems

## 1. Swap Two Numbers

### Logic

Store one value in a temporary variable and exchange the two values.
This avoids losing either of the original values.

```c
int temp = a;
a = b;
b = temp;
```

---

## 2. Find Largest of Two Numbers

### Logic

Compare the two numbers using `if-else`.
The greater value is the largest.

```c
if (a > b)
    printf("%d", a);
else
    printf("%d", b);
```

---

## 3. Check Even or Odd

### Logic

A number is even if it is completely divisible by 2.
Use the remainder operator `%` to check divisibility.

```c
if (num % 2 == 0)
    printf("Even");
else
    printf("Odd");
```

---

## 4. Check Positive, Negative or Zero

### Logic

Compare the number with zero.
`> 0` means positive, `< 0` means negative, otherwise it is zero.

```c
if (num > 0)
    printf("Positive");
else if (num < 0)
    printf("Negative");
else
    printf("Zero");
```

---

## 5. Factorial of a Number

### Logic

Factorial is the product of all integers from 1 to `n`.
Use a loop to repeatedly multiply the result by the current number.

```c
int factorial = 1;

for (int i = 1; i <= n; i++)
    factorial *= i;

printf("%d", factorial);
```

---

## 6. Fibonacci Series

### Logic

Each Fibonacci number is the sum of the previous two numbers.
Maintain two variables and calculate the next value without using an array.

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

---

## 7. Check Prime Number

### Logic

A prime number has exactly two factors: 1 and itself.
Check divisibility from 2 up to `sqrt(n)`; if any number divides it, it is not prime.

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

if (is_prime)
    printf("Prime");
else
    printf("Not Prime");
```

---

## 8. Print Prime Numbers in a Range

### Logic

Check every number in the given range using a prime-checking function.
Print the number if the function confirms that it is prime.

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

## 9. Reverse an Integer

### Logic

Extract the last digit using `% 10` and add it to the reversed number.
Remove the last digit using `/ 10` and repeat until the number becomes zero.

```c
int reverse = 0;

while (num)
{
    reverse = reverse * 10 + num % 10;
    num /= 10;
}

printf("%d", reverse);
```

---

## 10. Check Palindrome Number

### Logic

A number is a palindrome if it reads the same forwards and backwards.
Reverse the number and compare it with the original number.

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

---

## 11. Count Number of Digits

### Logic

Repeatedly divide the number by 10 until it becomes zero.
Each division removes one digit, so the number of iterations is the digit count.

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

printf("%d", count);
```

---

## 12. Sum of Digits

### Logic

Extract each digit using `% 10` and add it to `sum`.
Remove the extracted digit using `/ 10` and continue until zero.

```c
int sum = 0;

while (num)
{
    sum += num % 10;
    num /= 10;
}

printf("%d", sum);
```

---

## 13. Product of Digits

### Logic

Extract each digit using `% 10` and multiply it with `product`.
Initialize `product` to 1 because 1 is the multiplicative identity.

```c
int product = 1;

while (num)
{
    product *= num % 10;
    num /= 10;
}

printf("%d", product);
```

---

## 14. Armstrong Number

### Logic

Count the number of digits, then raise every digit to that digit count and add the results.
If the sum equals the original number, it is an Armstrong number.

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

---

## 15. Find GCD

### Logic

Use the Euclidean algorithm: repeatedly replace `(a, b)` with `(b, a % b)`.
When `b` becomes zero, `a` contains the GCD.

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

---

## 16. Find LCM

### Logic

LCM can be calculated using the relationship between LCM and GCD.
Divide first to reduce overflow risk, then multiply by the other number.

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

int lcm = (a / gcd(a, b)) * b;

printf("LCM = %d", lcm);
```

Formula:

```text
LCM(a, b) = (a × b) / GCD(a, b)
```

---

## 17. Calculate Power of a Number

### Logic

Multiply the base by itself `exponent` times.
Initialize the result to 1 because multiplying by 1 does not change the value.

```c
int result = 1;

for (int i = 0; i < exponent; i++)
{
    result *= base;
}

printf("%d", result);
```

Example:

```text
2^5 = 2 × 2 × 2 × 2 × 2 = 32
```

---

## 18. Check Leap Year

### Logic

A year divisible by 400 is a leap year, or it must be divisible by 4 but not by 100.
This handles century years such as 1900 and 2000 correctly.

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

---

## 19. Generate Multiplication Table

### Logic

Use a loop from 1 to 10 and multiply the given number by the loop counter.
Print the result for each multiplication.

```c
for (int i = 1; i <= 10; i++)
{
    printf("%d x %d = %d\n",
           num, i, num * i);
}
```

Example:

```text
5 x 1  = 5
5 x 2  = 10
5 x 3  = 15
...
5 x 10 = 50
```
