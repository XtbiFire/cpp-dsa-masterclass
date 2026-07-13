/*
◆───────────────────────────────◆
008. O(n log n) Linearithmic Time
◆───────────────────────────────◆

💡 Remember

O(n log n) combines Linear Time
and Logarithmic Time.

It is one of the most efficient
complexities for sorting.

◆───────────────────────────────◆

🎯 Goal

Understand why some algorithms
are faster than O(n²) but slower
than O(n).

◆───────────────────────────────◆

📌 Simple Meaning

The algorithm processes all
elements, but each step also
divides the work into smaller parts.

◆───────────────────────────────◆

📌 Real Life Example

Imagine checking answer sheets.

First, divide them into small groups.

Then, check every sheet in each group.

You process all sheets, but dividing
them makes the work more organized.

◆───────────────────────────────◆

📌 Key Points

✔ Faster than O(n²).

✔ Slower than O(n).

✔ Used in efficient sorting.

✔ Works well for large data.

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 8;

    while (n > 1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "* ";
        }

        cout << endl;

        n /= 2;
    }

    return 0;
}

/*

Output

* * * * * * * *
* * * *
* *
*

Time Complexity : O(n log n)

Space Complexity : O(1)

Reason

The outer loop reduces the work
by half each time.

The inner loop processes multiple
elements.

Together they represent O(n log n).

◆───────────────────────────────◆

💼 Interview Note

Question:

Name two algorithms with
O(n log n) Time Complexity.

Answer:

Merge Sort and Heap Sort are
classic examples of O(n log n).

◆───────────────────────────────◆

⚠️ Avoid These Mistakes

✘ O(n log n) is NOT equal to O(n²).

✘ Do not confuse log n with n.

✘ Not every nested loop is O(n²).

◆───────────────────────────────◆

🧠 Brain Booster

Question:

Which is faster for large inputs?

O(n²) or O(n log n)

✅ O(n log n)

It grows much more slowly than
O(n²).

◆───────────────────────────────◆

📌 Quick Revision

Linear Work
      +
Logarithmic Growth
      │
      ▼
O(n log n)

*/