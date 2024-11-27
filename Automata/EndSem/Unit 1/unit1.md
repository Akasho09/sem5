# Automata (plural of automaton) 
refers to abstract machines or mathematical models that are used to understand and simulate computational processes.

## Finite Automata (FA) 
A Finite Automaton is a mathematical model consisting of:
- A Finite Automaton is a 5-tuple:
**M = (Q, Σ, δ, q₀, F):**
- **Q**: A finite set of states.
- **Σ**: A finite set of input symbols (alphabet).
- **δ**: A transition function {δ= Q*Σ}
- **q₀**: The initial state (\( q₀ \in Q \)).
- **F**: A set of final (accepting) states (( F subseteq Q )).

## Strings, Alphabets, and Languages

- Alphabet (Σ): A finite, non-empty set of symbols, e.g., Σ = {a, b}.
- String: A sequence of symbols from an alphabet, e.g., abba from Σ = {a, b}.
- Language: A set of strings formed from an alphabet, e.g., {a, ab, aba} is a language.

## language is collection of strings

1. finite language
2. infinite language

## Graphs and Trees

- Graphs: Used to represent state transitions in automata. States are nodes, and transitions are edges labeled with input symbols.
- Trees: Often used in parsing and hierarchical representation, such as derivations in context-free grammars.

## State Tables and Diagrams

- State Table: A tabular representation of FA, showing current states, input symbols, and next states.

Current State	Input a	     Input b

q0	             q1	             q2

q1	             q2	             q0

q2	             q0	             q1

- State Diagram: A graphical representation of FA where circles denote states and arrows indicate transitions.

## Non-deterministic and Deterministic Finite Automata (NFA & DFA)

- Deterministic Finite Automata (DFA):

At most one transition for each input symbol.

Simple and easier to implement.

- Nondeterministic Finite Automata (NFA):

Can have multiple transitions for the same input symbol, including ε-transitions (without consuming input).

Easier to construct but harder to implement directly.

- Equivalence: Every NFA has an equivalent DFA.

- Epsilon NEA (NFA)
epsilon NFA 1s he NEA LJuch centoins epsilon moves
Null moves

## "kleen closure" :

L*:is Kleene Closure. L+: It is a Positive Closure => L* = εL+

- 𝚺(a+b)^* -->infinite language
- 𝚺^*=𝚺^+ + 𝚺^0(ε); (postive closure + sigma zero or epsilon) 


## State Equivalence
Two states in a finite automaton are equivalent if:
- Starting from these states, the automaton behaves identically for all possible input strings.
- Both states either always end in an accepting state or always in a non-accepting state.
Testing State Equivalence
1. Initial Partitioning:
Divide states into two groups:
Accepting states.
Non-accepting states.
2. Refinement:
Split the groups further by checking transitions under each input symbol.
States in the same group must transition to the same group for all inputs.

## Machine Equivalence
Two machines (finite automata, Mealy machines, or Moore machines) are equivalent if:
- They accept the same language (in case of finite automata).
- They produce the same output for the same input strings (in case of Mealy or Moore machines).

Testing Machine Equivalence
1. Language Equivalence for FA:
Convert both automata into minimized DFAs.
If the minimized DFAs are structurally identical, the machines are equivalent.
2. Output Equivalence for Mealy/Moore Machines:
Simulate both machines on all possible input strings.
Compare outputs for each input string.
Alternatively, convert a Mealy machine into an equivalent Moore machine (or vice versa) and compare.


![alt text](<Screenshot 2024-11-27 at 10.30.53 AM.png>)