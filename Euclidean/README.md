# Euclid's Algorithm

This is an algorithm to find the Greatest Common Divisor (GCD) of two numbers.

## **Steps :**

To find the GCD of two given numbers :
1.  Find the larger of the two numbers.
2.  Set the larger as the dividend and the smaller one as the divisor.
3.  If the divisor is 0, return the GCD as the dividend, else, divide the dividend by the divisor to find the remainder.
4.  Set the divisor as the new dividend and the remainder as the divisor.
5.  Repeat steps 3 and 4 recursively.


To find the GCD of two numbers 'a' and 'b':
1. a > b.
2. if (b == 0), return a ; else remainder = a % b, a = b and b = remainder.
3. repeat step 2 recursively.

---

## **Pseudo-code**

```
//GCD of a and b where a > b pseudo code

<!-- recursive -->
calc_gcd (a, b) {
    if (b == 0) return a
    else return calc_gcd(b, a % b)
}

<!-- iterative -->
calc_gcd (a, b) {
    while (b > 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

```
