/*
◆───────────────────────────────◆
006. O(n) Linear Time
◆───────────────────────────────◆

💡 Remember

O(n) means the number of operations
grows linearly with the input size.

If the input doubles, the work
also roughly doubles.

◆───────────────────────────────◆

🎯 Goal

Understand why a single loop
usually has O(n) Time Complexity.

◆───────────────────────────────◆

📌 Simple Meaning

The algorithm processes every
input element one by one.

More input means more work.

◆───────────────────────────────◆

📌 Real Life Example

Imagine checking every student's
attendance in a class.

If there are 30 students, you check
30 names.

If there are 100 students, you check
100 names.

◆───────────────────────────────◆

📌 Key Points

✔ Depends on input size (n).

✔ Usually contains one loop.

✔ Operations increase with n.

✔ Faster than O(n²).

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

Reason

The loop runs n times.

As n increases, the number of
operations also increases.

◆───────────────────────────────◆

💼 Interview Note

Question:

Why is a single loop O(n)?

Answer:

Because the loop executes once
for each input element.

◆───────────────────────────────◆

⚠️ Avoid These Mistakes

✘ One loop is not always O(n).

✘ Ignore constants while finding
  Time Complexity.

✘ Focus on how operations grow.

◆───────────────────────────────◆

🧠 Brain Booster

Question:

If n becomes 10 times larger,
what happens to the work?

✅ The work also becomes about
10 times larger.

◆───────────────────────────────◆

📌 Quick Revision

Input Size ↑
      │
      ▼
Operations ↑
      │
      ▼
O(n)

*/
