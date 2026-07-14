/*
◆───────────────────────────────◆
014. Worst Case
◆───────────────────────────────◆

💡 Remember

Worst Case is the maximum amount
of work an algorithm performs.

It represents the least favorable
situation.

◆───────────────────────────────◆

🎯 Goal

Understand when an algorithm
performs its slowest.

◆───────────────────────────────◆

📖 Simple Meaning

Worst Case happens when the
algorithm checks every possible
element before finishing.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine searching your favorite
book on the last shelf.

You must check every shelf
before finding it.

◆───────────────────────────────◆

⭐ Key Points

✔ Slowest possible case.

✔ Maximum operations.

✔ Very important for analysis.

✔ Helps predict the upper limit.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

int main()
{
    // Main Function

    int arr[] = {10, 20, 30, 40, 50};
    int target = 50;

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

Time  : O(n)
Space : O(1)

Reason:

The algorithm checks every
element until the last one.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1: Create an array.

Step 2: Choose the target.

Step 3: Compare each element.

Step 4: Target is found at
the last position.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is the Worst Case?

Answer:

Worst Case is the situation where
an algorithm performs the maximum
number of operations.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Worst Case does not mean
the algorithm is bad.

✘ Do not confuse it with
Average Case.

✘ Always analyze total operations.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

When does Linear Search have
O(n) Time Complexity?

Answer:

When the required element is
at the last position or
is not present.

◆───────────────────────────────◆

📝 Summary

Worst Case represents the maximum
work an algorithm may perform.

◆───────────────────────────────◆

📌 Quick Revision

Target at Last
        │
        ▼
Maximum Comparisons
        │
        ▼
Worst Case
        │
        ▼
O(n)

◆───────────────────────────────◆

*/
