## Difference Between `strncpy` and `strlcpy`

### `strncpy`
1. Copies up to `n` bytes from the source string.  
2. Does **NOT** guarantee a null-terminator if the source string length is greater than or equal to `n`.  
3. Does **NOT** return the full length of the source string.

### `strlcpy`
1. Always adds a null-terminator if `size > 0`.  
2. Takes the full buffer size into account to avoid overflow.  
3. Returns the full length of the source string, even if the copy is truncated.