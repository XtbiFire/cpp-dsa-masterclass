/*
◆───────────────────────────────◆
004. What Is Time Complexity?
◆───────────────────────────────◆

💡 Remember

Time Complexity does NOT measure
actual execution time.

It measures how the number of
operations grows as input size (n)
increases.

◆───────────────────────────────◆

🎯 Goal

Understand what Time Complexity
really measures.

◆───────────────────────────────◆

📌 Simple Meaning

Time Complexity tells us how the
work done by an algorithm changes
when the input size increases.

◆───────────────────────────────◆

📌 Real Life Example

Reading 10 books takes less work
than reading 100 books.

As the number of books increases,
the work also increases.

The same idea applies to algorithms.

◆───────────────────────────────◆

📌 Key Points

✔ It measures growth of operations.

✔ It depends on input size (n).

✔ It does NOT measure seconds.

✔ It helps compare algorithms.

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }

    return 0;
}

/*

Output

1 2 3 4 5

Time Complexity : O(n)

Space Complexity : O(1)

◆───────────────────────────────◆

💼 Interview Note

Question:

What is Time Complexity?

Answer:

Time Complexity measures how the
number of operations grows as the
input size (n) increases.

◆───────────────────────────────◆

⚠️ Avoid These Mistakes

✘ Time Complexity is NOT execution time.

✘ A faster computer does not
  change Time Complexity.

✘ Do not confuse time with speed.

◆───────────────────────────────◆

🧠 Brain Booster

Question:

If n becomes twice as large,
will the number of operations
also increase?

✅ Yes.

The increase depends on the
algorithm's Time Complexity.

◆───────────────────────────────◆

📌 Quick Revision

Input Size (n)
      ↓
Operations
      ↓
Growth
      ↓
Time Complexity

*/