/*
◆───────────────────────────────◆
013. Best Case
◆───────────────────────────────◆

💡 Remember

Best Case is the minimum amount
of work an algorithm performs.

It represents the most favorable
situation.

◆───────────────────────────────◆

🎯 Goal

Understand when an algorithm
performs its fastest.

◆───────────────────────────────◆

📖 Simple Meaning

Best Case happens when the desired
result is found immediately.

The algorithm finishes with
minimum work.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine finding your favorite
book on the first shelf.

You do not need to search
any further.

◆───────────────────────────────◆

⭐ Key Points

✔ Fastest possible case.

✔ Minimum operations.

✔ Rare in real-world situations.

✔ Used to understand the lower limit.

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

▶ Execution Output

Element Found

⚙ Complexity

Time  : O(1)

Space : O(1)

Reason:

The element is found in the
very first comparison.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1: Create an array.

Step 2: Choose the target.

Step 3: Compare the first element.

Step 4: Target is found immediately.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is the Best Case?

Answer:

Best Case is the situation where
an algorithm completes its task
using the fewest operations.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Best Case does not happen
every time.

✘ Do not confuse Best Case
with Average Case.

✘ Performance may change with
different inputs.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

When does Linear Search have
O(1) Time Complexity?

Answer:

When the required element is
found at the first position.

◆───────────────────────────────◆

📝 Summary

Best Case represents the fastest
possible execution of an algorithm.

◆───────────────────────────────◆

📌 Quick Revision

Target Found First

        ↓

Minimum Comparisons

        ↓

Best Case

        ↓

O(1)

◆───────────────────────────────◆

*/