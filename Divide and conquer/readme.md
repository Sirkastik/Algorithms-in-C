# Divide and Conquer Algorithm

This is an algorithm that receives a base and an exponent and returns the base ^ exponent.

## **Steps :**

To find 'base' raised to the power of 'exponent':
1.  if (exponent == 0) result = 1; else if (exponent == 1) result = base; else ...
2. if ()
3. repeat step 1 and 2 recursively then multiply the result by itself

---

## **Pseudo-code**

```
// function to find the power of the base to the exponent
int calc_result (int base, int exponent) {
    if (exponent == 0) return 1;
    else if (exponent == 1) return base;
    else {
        if (exponent % 2 == 0)
            return calc_result(base, exponent / 2) * calc_result(base, exponent / 2);
        else
            return calc_result(base, exponent / 2) * calc_result(base, (exponent / 2) + 1);
    } 
}

int result = calc_result(base, exponent);

```