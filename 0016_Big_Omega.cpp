/*
◆───────────────────────────────◆
016. Big Omega (Ω)
◆───────────────────────────────◆

💡 Remember

Big Omega (Ω) represents the
best-case performance of an
algorithm.

It tells us the minimum amount
of work an algorithm will do.

◆───────────────────────────────◆

🎯 Goal

Understand why Big Omega is
called the Lower Bound of an
algorithm.

◆───────────────────────────────◆

📖 Simple Meaning

Big Omega tells us the minimum
number of operations required.

The algorithm cannot perform
better than this limit.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine searching for your
friend in a classroom.

If your friend is sitting in
the first seat, you find them
immediately.

This is the best possible case.

◆───────────────────────────────◆

⭐ Key Points

✔ Represents Best Case.

✔ Shows the minimum work.

✔ Called Lower Bound.

✔ Written as Ω (Omega).

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

int main()
{
    // Main Function

    int arr[] = {10, 20, 30, 40, 50};
    int target = 10;

    // Linear Search
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target)
        {
            cout << "Element Found";
            break;
        }
    }

    return 0;
}

/*

◆───────────────────────────────◆

▶ Execution Output

Element Found

⚙ Complexity

Time  : Ω(1)

Space : O(1)

Reason:

The target is found in the
first comparison.

This is the minimum work
possible.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1: Create an array.

Step 2: Select the target.

Step 3: Compare the first element.

Step 4: Target is found
immediately.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What does Big Omega (Ω)
represent?

Answer:

Big Omega represents the
best-case or minimum number
of operations an algorithm
can perform.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Big Omega is not Worst Case.

✘ Ω and O are different.

✘ Lower Bound means minimum
possible work.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

For Linear Search, when is
Time Complexity Ω(1)?

Answer:

When the required element is
found at the first position.

◆───────────────────────────────◆

📝 Summary

Big Omega (Ω) represents the
minimum work performed by an
algorithm in the best case.

◆───────────────────────────────◆

📌 Quick Revision

Best Case
      │
      ▼
Minimum Operations
      │
      ▼
Lower Bound
      │
      ▼
Ω(1)

◆───────────────────────────────◆

*/