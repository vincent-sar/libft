# MAKEFILE
1. Better practice to name the fts one by one in makefile.
> * wildcare, it's stated it's forbidden on page 2. 
> CC is defined, implicit would've defaulted to cc. So CC = cc - it's extra stuff.

2. I do a lot of unneccessary stuff with RM = rm -f redefining it.
> ${AR} = implicit variable can just use it.
#1: ${AR} -rcs ${NAME} ${OBJS} @ under name
#2: AR = ar -rcs @ the top
> ${RM} = already 

3. For directory: 
-I ${INCS} > For include header 
-L is what I wanted if I put header separately.

If touch clean [make a clean file]
> clean: by itself won't run d 
> So need phony

4. Bonus 

SRCS_BONUS = 
OBJS_BONUS = ${SRCS_BONUS:.c=.o}

bonus: ${NAME} ${OBJS_BONUS}
	   ${AR} -rcs ${NAME} ${OBJS_BONUS}

5. Spend time understanding this, important to get it right in subsequent project:
https://www.gnu.org/software/make/manual/html_node/Implicit-Variables.html

6. Read up on: 
.PHONY: clean norm

7. Good to list out the variables one by one
```
ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_lstadd_back.c \
ft_lstadd_front.c \
ft_lstclear.c \
ft_lstdelone.c \
ft_lstiter.c \
ft_lstlast.c \
ft_lstmap.c \
ft_lstnew.c \
ft_lstsize.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c
```

# General Code Feedback
1. Use strchr for instr.
> Need to invert them 

2. ft_atoi > literally says return i 
> Yet I returned long 

3. memcmp has gotten the wrong set of memory
> Can just do count-- until zero.

4. for ft_count_words, use 
static int ft_count_words 
> This function will only be known by ft_split
> Other functions can't call it 

5. If you know the string won't be changed, use const in it. 

# Specific Code Feedback

ft_atoi
- Let's get a ft_isspace 
- *str is always better than str[i] 
- ++str is more efficient than str++;
> https://stackoverflow.com/questions/15778806/why-is-i-more-efficient-than-i

ft_calloc 
> Need to handle overflow in manual

ft_isalnum
> Reoptimize ft_isalpha & ft_isdigit

ft_itoa
> can get a lot more elegant

ft_lstmap 
> Cloning = do copying 1 million time, then do additional things
>> 2 rounds of loop, highly inefficient 
> do something, create new node, add to list

memchr | memcpy
> Think about how to reduce casting 

itoa and atoi 
> Handle overflow without long 

ft_split 
> Could have removed some things 
> Write function in recursive manner [resize it every round]
> Use ft_substr & ft_strdup

strchr 
> *str != '\0' < explicit it 

strlcat 
> avoid index access 

strrchr
> Dunnid len 
> Could be implemented by strchr

--

putnbr after submitting libft can just do itoa 

# Header

1. Parameter name doesn't matter, but still good to still have parameter name

2. #include <unistd.h>
> Can put it in cuz our import of header uses it

3. Rule of thumb is #include when can put in .c, put there.

4. gcc covers more ground than cc:
>  gcc = command that you'd use to run the complier from Gnu Complier collection (GCC). And to make things weird, Apple links gcc to clang, which is the compiler that comes with Apple. On linux cc will call gcc, but on some systems cc is not even available.
