# GENERAL
## Return Const Char
We typecast [const char*] with [return (char *)str] because...
> - return (str) > if no casting can't compile 
> - returning 'const char *' from a function with result type 'char *' discards qualifiers

## Malloc
```
char *str;
str = malloc(sizeof(char) * n);
```
This will do, don't need to recast because in most latest version of C it's already re-casted.

# BETTER LOOP

```
while (--n > 0)
while (n-- > 0)
```
Is a good way to bypass the need for having another size_t

```
d1[i] = s1[i--];
```
DO NOT DO THIS MAGIC VOODOO SHIT IT FUCKS THINGS UP. Have it in the while loop

# LIBFT MAIN FUNCTIONS
## ft_atoi

Real life version = convert only one 1 +-.

## ft_memcmp

strncmp > But, it's with memory. 
Once again with memory, don't need to ensure it terminates,
we may need to chek across allocation.

## ft_striteri & ft_strmapi

If it's a striteri - notice function parameter = address.
> Cuz address, so we know it modifies the source.

However, in strmapi - it's not address
> So we return the value

## ft_putnbr_fd
My very elegant code then I realized "fuck, cannot malloc"
```
void ft_putnbr_fd(int n, int fd)
{
	char *str;
	
	str = ft_itoa(n);
	ft_putstr_fd(str, fd);
}
```

# LINKED LISTS

In final exam, I took hours for a linkedlist question because I didn't know whether to put * or not. I guess a very simple guide is:
```
- For all individual linkedlist component it's a (t_list *node) because it points to an address.
- Then, any content change use node->content = something.
- When parameter is (t_list *lst): lst = first element address; &lst = 2d array's address if it's first element.
> while (lst) { lst = lst->next; }
- When parameter is (t_list **lst): *lst = first element address; lst = 2d array's address. 
> while (*lst) { *lst = *lst->next; }
```

## ft_lstadd_front
Need failsafe check - if either is blank. 
Blank new do nothing; blank list make *lst = new;

## ft_lstlast
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

## ft_is 

Swapping it into direct return value.

## ft_strncmp

```
if (lhs[i] == '\0' && rhs[i] == '\0')
```

Helps to avoid when the string is longer.