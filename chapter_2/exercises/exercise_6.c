/*
Why is it not a good idea for an identifier to contain more than one adjacent underscore (as
in current___balance, for example)?

    Using more than one adjacent underscore in an identifier (such as current___balance) is generally discouraged because:

    1. Poor readability
    Multiple underscores make identifiers harder to read and easy to miscount. For example:
        current___balance
        can easily be confused with:
        current__balance or  current_balance

    2. Typing mistakes
    It increases the chance of errors when typing or debugging code because programmers may accidentally add or omit underscores.

    3. Reserved identifiers in C/C++
    In C and especially C++, identifiers containing multiple underscores or beginning with underscores may conflict with names
    reserved for the compiler or standard library implementation.

    Examples of reserved-style names:
    __value
    _Data

    4. Bad coding style
    Clean and simple names improve maintainability. Most coding standards recommend:
        lowercase letters
        single underscores between words

    Example:
    current_balance    instead of:    current___balance

    So, adjacent underscores should be avoided to keep code readable, maintainable, and safe from naming conflicts.
*/