# Libft
in this project I m trying to redo a set of functions from the libc. these function have the
same prototypes and implement the same behaviors as the originals. They comply
with the way they are defined in their man. The only difference will be their names. They
will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen...
In part II I m also trying to develop set of functions that are either not in the libc,
or that are part of it but in a different form.
and in the bonus part.

## using makefile:
to compile all the medatory functions into object files then archive them to a libft.a static library use the command:
> make

or you can use:
> make all

for the bonus part use:
> make bonus

to delete the object files you can use:
>make clean

and to the delete the object files and the library you can use:
> make fclean 

rebuilding the library will be done if you use:
> make re
