# Integer Division Truncation in C
This example demonstrates an unexpected behavior in C with integer division. Integer division truncates (discards) the fractional part of the result. This can lead to subtle errors if not handled properly.

**Problem:**
In the provided code, the result of `10 / 5` is expected to be `2.0`. However, because both `x` and `y` are integers, the division is performed as integer division, resulting in a truncated integer value `2`, discarding the `.0`.

**Solution:**
To obtain a floating-point result, at least one of the operands must be a floating-point number. This can be achieved by casting one of the integers to a `float` or `double` before the division or using floating point literals.
