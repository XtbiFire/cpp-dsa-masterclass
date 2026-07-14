/*
◆───────────────────────────────◆
005. O(1) Constant Time
◆───────────────────────────────◆

💡 Remember

O(1) means the number of operations
always remains constant.

It does not depend on the input
size (n).

◆───────────────────────────────◆

🎯 Goal

Understand why some operations
always take constant work.

◆───────────────────────────────◆

📌 Simple Meaning

No matter how large the input is,
the algorithm performs the same
number of operations.

◆───────────────────────────────◆

📌 Real Life Example

You pick the first book from a shelf.

Whether the shelf has 10 books or
10,000 books, you still pick only
the first one.

◆───────────────────────────────◆

📌 Key Points

✔ Constant number of operations.

✔ Independent of input size.

✔ One of the fastest complexities.

✔ Performance remains the same.

*/

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    cout << arr[0];

    return 0;
}

/*

Output

10

Time Complexity : O(1)

Space Complexity : O(1)

Reason

Only one element is accessed.

The number of operations does
not change with input size.

◆───────────────────────────────◆

💼 Interview Note

Question:

Why is array indexing O(1)?

Answer:

Because the memory address of any
index can be calculated directly
without checking other elements.

◆───────────────────────────────◆

⚠️ Avoid These Mistakes

✘ O(1) does not mean one second.

✘ O(1) does not mean one operation.

✘ O(1) means constant growth.

◆───────────────────────────────◆

🧠 Brain Booster

Question:

If an array has 1,000,000 elements,
is arr[0] still O(1)?

✅ Yes.

Only one element is accessed,
regardless of array size.

◆───────────────────────────────◆

📌 Quick Revision

Input Size ↑
      │
      ▼
Operations Stay Same
      │
      ▼
O(1)

*/
