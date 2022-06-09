# Question: How do you check if one string is a scrambled version of another? JavaScript Summary

The JavaScript code provided defines a function, `isScramble`, that checks if one string is a scrambled version of another. The function takes two strings as arguments and initially checks if they are of equal length. If they are not, the function immediately returns `false` as unequal length strings cannot be scrambled versions of each other. If the strings are identical, the function returns `true` as a string is considered a scrambled version of itself. If neither of these conditions are met, the function proceeds to convert each string into an array of characters. These arrays are then sorted in order to allow for direct comparison. The function then iterates through the sorted arrays, comparing each corresponding character. If any pair of characters do not match, the function returns `false` as this indicates the strings are not scrambled versions of each other. If all characters match, the function returns `true`, confirming the strings are scrambled versions of each other. The function is then tested with three pairs of strings to demonstrate its functionality.

---

# TypeScript Differences

The TypeScript version of the solution is very similar to the JavaScript version. Both versions solve the problem by checking if the lengths of the two strings are equal, if the two strings are identical, and if the sorted characters of the two strings are equal. 

However, there are a few differences between the two versions:

1. TypeScript uses static typing: In the TypeScript version, the function `isScramble` has type annotations. The parameters `s1` and `s2` are explicitly declared as strings, and the function is declared to return a boolean. This is a feature of TypeScript that is not available in JavaScript. It helps catch errors at compile time, making the code safer and easier to understand.

2. Different methods to sort and compare strings: In the JavaScript version, the strings are converted into arrays of characters using `Array.from()`, sorted using `Array.sort()`, and compared using a for loop. In the TypeScript version, the strings are split into arrays of characters using `String.split('')`, sorted using `Array.sort()`, joined back into strings using `Array.join('')`, and compared using the equality operator `===`. This makes the TypeScript version slightly more concise.

3. Different number of test cases: The JavaScript version tests the function with three pairs of strings, while the TypeScript version tests it with two pairs of strings. This doesn't affect the functionality of the solution, but it's worth noting.

---

# C++ Differences

The C++ version of the solution uses a similar approach to the JavaScript version, but with some differences due to the language features and standard libraries available in C++.

In the C++ version, the `std::sort` function from the `<algorithm>` library is used to sort the strings. This is different from the JavaScript version, where the strings are first converted to arrays using `Array.from` and then sorted using the `sort` method of the `Array` object.

The C++ version also uses the `substr` method of the `std::string` object to create substrings for comparison. This is not present in the JavaScript version.

Another difference is in the way the C++ version handles user input and output. The `std::cin` and `std::cout` objects are used to read from and write to the console, respectively. In the JavaScript version, the function is tested with hard-coded string pairs and the results are logged to the console using `console.log`.

The C++ version also includes a recursive check for scrambled substrings. This is not present in the JavaScript version. This check allows the C++ version to handle cases where the strings can be divided into two non-empty substrings that are scrambled versions of each other.

In terms of language features, the C++ version uses the `bool` type for the return value of the `isScramble` function, while the JavaScript version uses the `boolean` type. The C++ version also uses the `!=` operator for inequality comparison, while the JavaScript version uses the `!==` operator.

---
