/*
◆───────────────────────────────◆
015. Average Case
◆───────────────────────────────◆

💡 Remember

Average Case represents the
expected performance of an
algorithm for typical inputs.

It lies between Best Case
and Worst Case.

◆───────────────────────────────◆

🎯 Goal

Understand how an algorithm
usually performs in real-world
situations.

◆───────────────────────────────◆

📖 Simple Meaning

Average Case measures the
expected number of operations
for a normal input.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine searching for a book
on a shelf.

Sometimes you find it early.

Sometimes you find it late.

Usually, you find it somewhere
in the middle.

◆───────────────────────────────◆

⭐ Key Points

✔ Represents normal performance.

✔ Lies between Best and Worst.

✔ More practical than Best Case.

✔ Depends on input distribution.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

int main()
{
    // Main Function

    int arr[] = {10, 20, 30, 40, 50};
    int target = 30;

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

The element is found after
checking some of the elements.

On average, about half of the
elements are examined.

◆───────────────────────────────◆

🧠 Code Explanation

Step 1: Create an array.

Step 2: Choose the target.

Step 3: Start Linear Search.

Step 4: Target is found near
the middle of the array.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is Average Case?

Answer:

Average Case is the expected
performance of an algorithm
for typical inputs.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Average Case is not always
the exact middle case.

✘ It depends on the input
distribution.

✘ Do not confuse it with
Best or Worst Case.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

For Linear Search, where is
the element usually found in
Average Case?

Answer:

Around the middle of the array,
after checking about half of
the elements.

◆───────────────────────────────◆

📝 Summary

Average Case represents the
performance most commonly seen
in practical situations.

◆───────────────────────────────◆

📌 Quick Revision

Target in Middle
        │
        ▼
Average Comparisons
        │
        ▼
Average Case
        │
        ▼
O(n)

◆───────────────────────────────◆

*/
