/*
◆───────────────────────────────◆
012. O(n!) Factorial Time
◆───────────────────────────────◆

💡 Remember

O(n!) means the number of operations
grows as n factorial (n!).

It becomes impossible to run for
large input sizes.

◆───────────────────────────────◆

🎯 Goal

Understand why Factorial Time is
the slowest common Time Complexity.

◆───────────────────────────────◆

📖 Simple Meaning

The algorithm tries every possible
arrangement or order.

The number of possibilities grows
extremely fast.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine arranging students in
a single line.

2 Students → 2 Ways

3 Students → 6 Ways

4 Students → 24 Ways

More students create many more
possible arrangements.

◆───────────────────────────────◆

⭐ Key Points

✔ Tries every possible arrangement.

✔ Extremely slow for large inputs.

✔ Common in permutation problems.

✔ Slower than O(2ⁿ).

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

void arrange(int n)
{
    // Base Case
    if (n == 1)
        return;

    // Recursive Calls
    for (int i = 0; i < n; i++)
    {
        arrange(n - 1);
    }
}

int main()
{
    // Main Function

    arrange(4);

    return 0;
}

/*

▶ Execution Output

(No visible output)

⚙ Complexity

Time  : O(n!)

Space : O(n)

Reason:

Each level creates multiple
recursive calls.

The total number of possible
arrangements becomes n!.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1: Function starts with n.

Step 2: Loop runs n times.

Step 3: Each iteration calls
the function again.

Step 4: Total work grows as n!.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Where is O(n!) commonly used?

Answer:

It is commonly used in permutation
and brute-force problems.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ O(n!) is much slower than O(2ⁿ).

✘ Avoid it for large inputs.

✘ Do not confuse n! with n².

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which grows faster?

O(2ⁿ) or O(n!)

Answer:

✅ O(n!)

Factorial growth becomes much
larger than exponential growth.

◆───────────────────────────────◆

📝 Summary

O(n!) checks every possible
arrangement and becomes extremely
slow as n increases.

◆───────────────────────────────◆

📌 Quick Revision

All Arrangements

        ↓

n × (n-1) × (n-2)...

        ↓

n!

        ↓

O(n!)

◆───────────────────────────────◆

*/
