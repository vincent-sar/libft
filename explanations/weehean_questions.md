1. When do we calloc?
> Can I calloc with string?

2. If I...
```
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
```

Wouldn't that end up 2x stdio, 2x stdlib.
I.e. worse for headers? 

You said do one by one so I did.

3. How do you compile/debug the main file into the ft?


4. ft_lstlast
```
if (!lst)
	return (0);
while (lst)
	lst = lst->next;
return (lst);
```
This should be unnecessary right? Because if it doesn't exist, it would technically be null already.

So return (lst) handled it.

Hmm. Any case we need a failsafe check?

