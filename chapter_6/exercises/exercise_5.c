/*
5.Which one of the following statements is not equivalent to the other two (assuming that the
loop bodies are the same)?
    (a) while (i < 10) {...}
    (b) for (; i < 10;) {...}
    (c) do {...} while (i < 10);

=====>
    We compare how many times each loop runs and when the condition is checked.

    (a) while (i < 10) { ... }
    Condition is checked before every iteration
    If i >= 10 initially → loop runs 0 times
    Otherwise runs while i < 10

    (b) for (; i < 10;) { ... }
    This is exactly the same structure as a while loop
    Initialization: none
    Condition: i < 10
    Update: none

    So it behaves exactly like:
    while (i < 10) { ... }
    ✔ So (a) and (b) are equivalent

    (c) do { ... } while (i < 10);
    Condition is checked after the loop body executes
    So the loop body runs at least once, even if i >= 10

    Example:

    If i = 15
    body runs once
    then condition fails
    Key difference
    (a) and (b): may run 0 times
    (c): runs at least 1 time

    FINAL ANSWER
    (c) is not equivalent to (a) and (b) because it is a do-while loop, which executes the loop body at least once before checking the condition, 
    whereas (a) and (b) check the condition first and may not execute the loop body at all.

*/