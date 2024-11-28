# TURING MACHINES & COMPUTABILITY: 

# **Introduction to Turing Machines (TM)**  

A Turing Machine (TM) is a theoretical computational model introduced by Alan Turing. It consists of:  

- **Input tape** divided into cells, each holding a symbol.  
- **Finite control** representing the current state.  
- **Tape head** to read and write symbols and move left or right.  
- Defined by a **transition function**, \( \delta(q, X) = (q', Y, D) \), where \( q, q' \) are states, \( X, Y \) are tape symbols, and \( D \) is the direction of the head.  

TMs can perform any computation that a modern computer can, given sufficient time and memory.  

---

# **Computing with Turing Machines**  

TMs compute functions by transitioning through states based on the input tape symbols and the defined transition function.  

- The computation begins in the initial state with the input on the tape.  
- It halts when it enters a final state or when no transition is possible.  
- TMs can solve problems like string recognition, arithmetic computations, and function evaluation.  

---

# **Non-deterministic Turing Machines (NDTM)**  

A Non-deterministic TM can explore multiple computational paths simultaneously.  

- Transition functions allow multiple possible moves for a given state and input.  
- A string is accepted if any computational path reaches an accepting state.  
- NDTMs are as powerful as deterministic TMs (can simulate one another), but NDTMs can sometimes solve problems faster.  

---

# **Context-Sensitive Languages (CSLs) and Linear Bounded Automaton (LBA)**  

- **CSLs**: A class of languages defined by context-sensitive grammars, where every production rule satisfies \( |\alpha| \leq |\beta| \).  
- **LBA**: A restricted TM with a tape bounded by the length of the input.  
    - Recognizes all CSLs.  
    - Limited computational power compared to a standard TM but more efficient.  

---

### Church's Thesis
Definition: Church's Thesis (or Church-Turing Thesis) asserts that any function that can be effectively computed (intuitively, by an algorithm) can be computed by a Turing Machine.
Implications:
Equates computability with what Turing Machines can achieve.
Forms the basis of modern computational theory.
- Unproven Hypothesis: While widely accepted, it is not formally provable since it relies on the informal notion of "effective computability."
---

# **Universal Turing Machines (UTMs)**  

Definition: A Universal Turing Machine is a Turing Machine that can simulate any other Turing Machine. It achieves this by taking as input the description of a machine and the input for that machine.
Significance:
Demonstrates the versatility of Turing Machines.
Forms the theoretical basis for general-purpose computers.

---

# **Primitive Recursive Functions**  

- A class of functions built from basic functions 
(zero(A constant function that always outputs zero, regardless of the input), 
successor (A unary function that outputs the successor of its input)
, projection (Extracts the k-th argument from an n-tuple of inputs)) using composition and primitive recursion.  
- Examples: Addition, multiplication, factorial.  
- These functions are computable but do not include all computable functions (e.g., Ackermann's function).  

---

# **Halting Problem of the Turing Machine**  

The **Halting Problem** asks:  

> Does a given TM halt on a particular input?  

---
n
# **Unsolvable Problems about Turing Machines**  

1. **Halting Problem**: As mentioned above.  
2. **Equivalence Problem**: Determining if two TMs compute the same function.  
3. **Language Emptiness**: Determining if a TM accepts no strings.  
4. **Language Containment**: Determining if the language of one TM is a subset of another.  

These problems are undecidable due to the inherent limitations of computation.  

---

# **The Class P and NP Languages**  

- **P**: Class of problems solvable by deterministic polynomial-time algorithms.  
- **NP**: Class of problems verifiable by deterministic polynomial-time algorithms (or solvable by NDTMs in polynomial time).  

---

# **NP Completeness**  

A problem is **NP-complete** if:  

1. It belongs to NP.  
2. Every other NP problem can be reduced to it in polynomial time.  

- If one NP-complete problem is solved in polynomial time, all NP problems can be solved in polynomial time.  

---

# **Some NP-Complete Problems**  

1. **Boolean Satisfiability Problem (SAT)**  
2. **Traveling Salesman Problem (Decision Version)**  
3. **Knapsack Problem**  
4. **Graph Coloring**  
5. **Hamiltonian Cycle Problem**  

---

# **Class NP-Hard and Some NP-Hard Problems**  

- **NP-Hard**: A problem is NP-Hard if every NP problem reduces to it in polynomial time, but it may not be in NP itself.  
- **Examples**:  

  1. **Halting Problem**  
  2. **Optimization Version of Traveling Salesman Problem**  
  3. **Generalized Chess**  

---

![alt text](<Screenshot 2024-11-26 at 7.48.32 PM.png>)
![alt text](<Screenshot 2024-11-26 at 7.31.48 PM.png>)
![alt text](<Screenshot 2024-11-26 at 6.31.58 PM.png>)