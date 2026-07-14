/*
◆───────────────────────────────◆
007. O(log n) Logarithmic Time
◆───────────────────────────────◆

💡 Remember

O(log n) means the input size
becomes smaller after each step.

The algorithm does not check
every element.

◆───────────────────────────────◆

🎯 Goal

Understand why dividing the search
space makes an algorithm faster.

◆───────────────────────────────◆

📌 Simple Meaning

Instead of checking one by one,
the algorithm removes half of the
remaining data in every step.

◆───────────────────────────────◆

📌 Real Life Example

Imagine searching a word in a
dictionary.

You do not read every page.

You open the middle page and
keep removing half of the pages
until you find the word.

◆───────────────────────────────◆

📌 Key Points

✔ Search space becomes half.

✔ Very efficient for large data.

✔ Binary Search uses O(log n).

✔ Faster than O(n).

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 16;

    while (n > 1)
    {
        cout << n << " ";
        n /= 2;
    }

    return 0;
}

/*

Output

16 8 4 2

Time Complexity : O(log n)

Space Complexity : O(1)

Reason

The value becomes half after
every iteration.

So, the number of iterations
grows logarithmically.

◆───────────────────────────────◆

💼 Interview Note

Question:

Which famous algorithm has
O(log n) Time Complexity?

Answer:

Binary Search is the most common
example of O(log n).

◆───────────────────────────────◆

⚠️ Avoid These Mistakes

✘ O(log n) does not mean the
algorithm is using logarithms.

✘ Halving the data is the key idea.

✘ Binary Search works only on
sorted data.

◆───────────────────────────────◆

🧠 Brain Booster

Question:

If n = 16, how many times can
you divide it by 2 until 1?

✅ 16 → 8 → 4 → 2 → 1

Only a few steps are needed.

◆───────────────────────────────◆

📌 Quick Revision

Input Size
      │
      ▼
Half Every Step
      │
      ▼
Few Operations
      │
      ▼
O(log n)

*/
