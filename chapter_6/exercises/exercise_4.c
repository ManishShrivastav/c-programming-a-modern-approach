

/*
4.Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)? 
(a) for (i = 0; i < 10; i++) ... 
(b) for (i = 0; i < 10; ++i) ... 
(c) for (i = 0; i++ < 10; ) ... 

=======>
        We compare how many times each loop runs and what values of i are used.

        (a) for (i = 0; i < 10; i++)

        i starts at 0
        loop runs while i is 0 to 9
        i is incremented after each iteration
        Runs 10 times (i = 0,1,2,3,4,5,6,7,8,9)

        (b) for (i = 0; i < 10; ++i)

        i starts at 0
        loop runs while i is 0 to 9
        i is incremented before next iteration, but in a for-loop increment part this makes no practical difference here
        Runs 10 times (i = 0 to 9)

        So (a) and (b) are equivalent.

        (c) for (i = 0; i++ < 10; )

        Condition uses i++
        This means:
        current value of i is compared to 10 first
        then i is incremented
        Step-by-step values checked:
        i = 0 → 0 < 10 true → i becomes 1
        i = 1 → 1 < 10 true → i becomes 2
        ...
        i = 9 → 9 < 10 true → i becomes 10
        i = 10 → 10 < 10 false → stop
        Loop runs 10 times, but i starts body at 1 instead of 0

        So (c) is NOT equivalent to (a) and (b) in terms of how i changes during execution.

        FINAL ANSWER:

        (c) is not equivalent to (a) and (b) because in (c) the condition uses i++ (post-increment), which increments i 
        during the condition check, causing i to start the loop body from 1 instead of 0, whereas 
        (a) and (b) increment i after the loop body and behave the same.
*/