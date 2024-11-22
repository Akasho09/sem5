# PDA 

## Examples 

### Change states 
![alt text](<Screenshot 2024-11-22 at 9.31.24 PM.png>)

δ (currentState , inputElement , topOfStackPopped ) ---> (finalState , pushElements );  == Production Rules 

# Conversion of CFG to PDA

## Steps to Convert a Context-Free Grammar (CFG) to a Push Down Automaton (PDA)
### Step 1: Ensure the CFG is in Chomsky Normal Form (CNF)
- A CFG is in CNF if all productions are of the form:
  - \( A \to BC \) (where \( B \) and \( C \) are non-terminal symbols).
  - \( A \to a \) (where \( a \) is a terminal symbol).
  - \( S \to \varepsilon \) (if the grammar allows the empty string).

### Step 2: Define PDA Components
- **States**: The PDA will have 3 states:
  1. \( q_0 \): Initial state.
  2. \( q_1 \): Intermediate state for processing input and stack.
  3. \( q_f \): Accepting state.
- **Stack Alphabet (\( \Gamma \))**: Includes all non-terminals and terminals from the CFG.
- **Input Alphabet (\( \Sigma \))**: The terminal symbols of the CFG.
- **Initial Stack Symbol (\( Z_0 \))**: Use a special start symbol (\( S \)) from the CFG.

### Step 3: Transition Rules
1. Start by pushing Start symbol.
-  Apply grammer rules (Expanding Non-Terminals);
2.  Matching Input Symbols
3. acept when the stack contains z0 only and the input is fully processed

### tabular approach to check if string is acceptable by PDA
Step	CurrentState	Input (Remaining)	Stack (Top to Bottom)	Transition Applied
![alt text](<Screenshot 2024-11-22 at 11.27.59 PM.png>)

## Advantages and Disadvantages of CFG to PDA Conversion

### Advantages
1. **Automated Construction**: Allows systematic conversion, ensuring correctness.
2. **Canonical Representation**: Provides a standard way to recognize CFLs using PDAs.
3. **Flexibility**: PDAs can be modified to accept strings by empty stack or final state.

### Disadvantages
1. **Complexity**: The resulting PDA may be harder to understand or implement due to indirect transitions.
2. **Stack Growth**: For deeply nested structures, the stack can grow large, making computation inefficient.
3. **Non-Determinism**: The PDA may require non-deterministic transitions, complicating simulation.
