Here is a TypeScript console application that checks if one string is a scrambled version of another:

```typescript
function isScramble(s1: string, s2: string): boolean {
    if (s1.length !== s2.length) {
        return false;
    }
    if (s1 === s2) {
        return true;
    }
    let s1Chars = s1.split('').sort().join('');
    let s2Chars = s2.split('').sort().join('');
    return s1Chars === s2Chars;
}

console.log(isScramble('abc', 'bca')); // true
console.log(isScramble('abc', 'def')); // false
```

This application defines a function `isScramble` that takes two strings as input and returns a boolean indicating whether one string is a scrambled version of the other. The function first checks if the lengths of the two strings are equal. If they are not, it returns false. If the two strings are identical, it returns true. Otherwise, it sorts the characters in each string and compares the sorted strings. If the sorted strings are equal, it returns true; otherwise, it returns false. The application then tests the function with two pairs of strings and logs the results to the console.