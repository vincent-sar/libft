# Detect leaks
```
#include <stdio.h>
#include <stdlib.h>

system("leaks a.out");  //Add this at the last line of main

```

or in compiler

```
 -fsanitize=address
```

# Function Tests
Mains to test function:
https://github.com/gatestan13/42_mains 

Test our function with all the below once done. Otherwise, it's called wasting evaluation points.
- https://github.com/alelievr/libft-unit-test 
- https://github.com/Tripouille/libftTester
- https://github.com/jtoty/Libftest

# Relevant Resources
1. Linkedlist Videos
- https://youtube.com/playlist?list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y
- CS50 Data Structures
- Helpful for bonus: https://www.youtube.com/watch?v=ADE1zCQs2Fk

2. Difference of memcpy and memmove
- https://fresh2refresh.com/c-programming/c-interview-questions-answers/what-is-the-difference-between-memcpy-ampersand-memmove-functions-in-c/#

3. What's size_t
- https://stackoverflow.com/a/2550799

4. GCC & Libraries
- https://randu.org/tutorials/c/libraries.php
- https://www.linuxtopia.org/online_books/an_introduction_to_gcc/index.html

5. Memory leaks
- https://stackoverflow.com/questions/8222286/
- how-to-avoid-memory-leak-during-development-in-c
https://stackoverflow.com/questions/5134891/how-do-i-use-valgrind-to-find-memory-leaks
https://heeris.id.au/2016/valgrind-gdb/
