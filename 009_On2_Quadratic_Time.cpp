/*
◆───────────────────────────────◆
009. O(n²) Quadratic Time
◆───────────────────────────────◆

💡 Remember

O(n²) means the work grows much
faster as the input size increases.

It usually happens when one loop
runs inside another loop.

◆───────────────────────────────◆

🎯 Goal

Understand why nested loops often
lead to Quadratic Time Complexity.

◆───────────────────────────────◆

📌 Simple Meaning

For every element, the algorithm
checks all other elements.

As the input grows, the work
increases very quickly.

◆───────────────────────────────◆

📌 Real Life Example

Imagine every student in a class
shakes hands with every other
student.

More students mean many more
handshakes.

◆───────────────────────────────◆

📌 Key Points

✔ Usually uses nested loops.

✔ Slower than O(n log n).

✔ Performance drops for large inputs.

✔ Common in simple sorting algorithms.

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

/*

Output

* * *
* * *
* * *

Time Complexity : O(n²)

Space Complexity : O(1)

Reason

Both loops run n times.

Total operations become
n × n = n².

◆───────────────────────────────◆

💼 Interview Note

Question:

Why do nested loops usually have
O(n²) Time Complexity?

Answer:

Because each iteration of the outer
loop executes the entire inner loop.

◆───────────────────────────────◆

⚠️ Avoid These Mistakes

✘ Every nested loop is NOT always O(n²).

✘ Count how many times the loops
  actually run.

✘ Focus on total operations,
  not just the number of loops.

◆───────────────────────────────◆

🧠 Brain Booster

Question:

If n becomes 10 times larger,
how much does the work increase?

✅ About 100 times.

Because:

10² = 100

◆───────────────────────────────◆

📌 Quick Revision

Outer Loop
     ×
Inner Loop
     │
     ▼
n × n
     │
     ▼
O(n²)

*/