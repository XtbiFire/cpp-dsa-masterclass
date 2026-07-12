/*
◆───────────────────────────────◆
003. What Is Input Size (n)?
◆───────────────────────────────◆

💡 Remember

Input Size (n) is the amount of data
given to an algorithm.

As n increases, the work usually
increases too.

◆───────────────────────────────◆

🎯 Goal

Understand what "n" means before
learning Time Complexity.

◆───────────────────────────────◆

📌 Simple Meaning

The symbol "n" represents the size
of the input.

It tells us how much data an
algorithm has to process.

◆───────────────────────────────◆

📌 Real Life Example

If an array has 5 elements,

n = 5

If an array has 1000 elements,

n = 1000

◆───────────────────────────────◆

📌 Key Points

✔ n represents input size.

✔ n can be small or very large.

✔ Larger n usually means more work.

✔ Time Complexity depends on n.

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    cout << "Input Size (n) = " << n;

    return 0;
}

/*

Output

Input Size (n) = 5

Time Complexity : O(1)

Space Complexity : O(1)

◆───────────────────────────────◆

💼 Interview Note

Question:

What does "n" represent?

Answer:

"n" represents the size of the input
given to an algorithm.

◆───────────────────────────────◆

⚠️ Avoid These Mistakes

✘ n is not always the value of
  a variable.

✘ n does not always mean an array.

✘ Different problems can have
  different meanings of n.

◆───────────────────────────────◆

🧠 Brain Booster

Question:

If an array has 1,000,000 elements,
what is the value of n?

✅ n = 1,000,000

◆───────────────────────────────◆

📌 Quick Revision

Input Data
     ↓
Input Size (n)
     ↓
Algorithm
     ↓
Time Complexity

*/