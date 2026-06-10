/*
16.
(C99) Assume that the following macro definitions are in effect:

#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

What will the following line look like after macro expansion?

IDENT(foo)
*/

// ========================================>

/*
After macro expansion, the line `IDENT(foo)` will look like this:
```c
_Pragma("ident \"foo\"")
```
This is because the `IDENT(x)` macro expands to `PRAGMA(ident #x)`, and the `PRAGMA(x)` 
macro further expands to `_Pragma(#x)`. The `#x` in the `IDENT` macro converts the 
argument `foo` into a string literal, resulting in `_Pragma("ident \"foo\"")`.
*/
