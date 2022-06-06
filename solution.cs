Here is a JavaScript console application that checks if one string is a scrambled version of another:

```javascript
function isScramble(str1, str2) {
    if (str1.length !== str2.length) {
        return false;
    }
    if (str1 === str2) {
        return true;
    }
    let str1CharList = Array.from(str1);
    let str2CharList = Array.from(str2);

    str1CharList.sort();
    str2CharList.sort();

    for (let i = 0; i < str1CharList.length; i++) {
        if (str1CharList[i] !== str2CharList[i]) {
            return false;
        }
    }
    return true;
}

console.log(isScramble('abc', 'cba')); // true
console.log(isScramble('abc', 'def')); // false
console.log(isScramble('abc', 'abcd')); // false
```

This application defines a function `isScramble` that takes two strings as arguments. It first checks if the lengths of the strings are equal. If they are not, it returns `false`. If the strings are identical, it returns `true`. It then converts each string into an array of characters, sorts the arrays, and compares the sorted arrays. If the sorted arrays are identical, it returns `true`; otherwise, it returns `false`. The application then tests the function with three pairs of strings.