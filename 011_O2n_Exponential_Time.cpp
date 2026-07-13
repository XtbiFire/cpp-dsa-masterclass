/*
◆───────────────────────────────◆
011. O(2ⁿ) Exponential Time
◆───────────────────────────────◆

💡 Remember

O(2ⁿ) means the number of operations
doubles as the input size increases.

It becomes extremely slow for
large inputs.

◆───────────────────────────────◆

🎯 Goal

Understand why Exponential Time
grows much faster than Polynomial
Time.

◆───────────────────────────────◆

📖 Simple Meaning

Each increase in input size creates
many new possibilities.

The work doubles again and again.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a Light Switch.

Each switch has two choices.

        ON      OFF
         │        │
         └──┬─────┘
            ▼

1 Switch  → 2 Ways

2 Switches → 4 Ways

3 Switches → 8 Ways

More switches create exponentially
more combinations.

◆───────────────────────────────◆

⭐ Key Points

✔ Work doubles repeatedly.

✔ Extremely slow for large inputs.

✔ Common in brute-force solutions.

✔ Slower than O(n³).

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

void print(int n)
{
    // Base Case
    if (n == 0)
        return;

    // Recursive Calls
    print(n - 1);
    print(n - 1);
}

int main()
{
    // Main Function

    print(3);

    return 0;
}

/*

▶ Execution Output

(No visible output)

⚙ Complexity

Time  : O(2ⁿ)

Space : O(n)

Reason:

Each function call creates
two more function calls.

The number of calls doubles
at every level.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1: Function starts with n.

Step 2: It calls itself twice.

Step 3: Each new call again
creates two more calls.

Step 4: Total calls grow
exponentially.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why is this recursion O(2ⁿ)?

Answer:

Because every function call
creates two new recursive calls,
doubling the total work.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ O(2ⁿ) is not O(2 × n).

✘ Small inputs hide the true cost.

✘ Avoid brute-force when a better
algorithm exists.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

If n increases from 5 to 10,
does the work only double?

Answer:

No.

The work grows exponentially,
becoming much larger.

◆───────────────────────────────◆

📝 Summary

O(2ⁿ) grows extremely fast and
becomes impractical for large inputs.

◆───────────────────────────────◆

📌 Quick Revision

Recursive Calls

       ↓

Two Calls Each Time

       ↓

2 × 2 × 2 ...

       ↓

O(2ⁿ)

◆───────────────────────────────◆

*/