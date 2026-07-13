/*
◆───────────────────────────────◆
010. O(n³) Cubic Time
◆───────────────────────────────◆

💡 Remember

O(n³) means operations grow as
n × n × n.

It becomes very slow when input
size increases.

◆───────────────────────────────◆

🎯 Goal

Understand why three nested loops
create Cubic Time Complexity.

◆───────────────────────────────◆

📖 Simple Meaning

When three loops run inside each
other, the work increases very fast.

◆───────────────────────────────◆

🌍 Real Life Example

Imagine a Tournament.

Players  
            │  
            ▼  
   ┌──────────────┐  
   │ Comparisons  │  
   └──────────────┘  
            │  
  ┌─────────┼─────────┐  
  ▼         ▼         ▼

Player1   Player2   Player3

More players create many more
comparisons.

◆───────────────────────────────◆

⭐ Key Points

✔ Usually comes from three nested loops.

✔ Operations grow very quickly.

✔ Not suitable for large inputs.

✔ Slower than O(n²).

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

int main()
{
// Main Function

int n = 2;  

// Three Nested Loops  
for (int i = 1; i <= n; i++)  
{  
    for (int j = 1; j <= n; j++)  
    {  
        for (int k = 1; k <= n; k++)  
        {  
            // Print Combination  
            cout << "* ";  
        }  

        cout << endl;  
    }  

    cout << endl;  
}  

return 0;

}

/*

▶ Execution Output






⚙ Complexity

Time  : O(n³)
Space : O(1)

Reason:

Three loops run n times each.

Total operations:

n × n × n = n³

◆───────────────────────────────◆

🧠 Code Explanation

Step 1: Create input size n.

Step 2: First loop runs n times.

Step 3: Second loop runs inside
the first loop.

Step 4: Third loop runs inside
both loops.

Step 5: Total work becomes n³.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why is three nested loop O(n³)?

Answer:

Because every loop runs n times,
so total operations become n³.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Every three loops are not always O(n³).

✘ Always count actual operations.

✘ Do not judge complexity by code length.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

If n becomes 10 times larger,
how much work increases?

Answer:

1000 times because 10³ = 1000.

◆───────────────────────────────◆

📝 Summary

O(n³) grows very fast and is usually
avoided for large input sizes.

◆───────────────────────────────◆

📌 Quick Revision

Three Nested Loops

↓  

 n × n × n  

    ↓  

   O(n³)

◆───────────────────────────────◆

*/