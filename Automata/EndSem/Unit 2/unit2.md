## Regular Expression (RE) 
is a compact way of representing patterns in strings. It defines a regular language, which can be recognized by a finite automaton.

## Ardens Theorem
![alt text](<Screenshot 2024-11-21 at 7.04.16 PM.png>)
![alt text](<Screenshot 2024-11-21 at 7.06.05 PM.png>)

## Pumping Lemma 
- The Pumping Lemma is a fundamental tool in formal language theory, used to prove that certain languages are not regular
- finite lang is always regular.
- If a lang is infinite then there exists some +ve integer int n : any string w belonging to L has length >= n.
then w = xyz 
1. for each i>=0 , xy^iz belongs to L.
2. |y|>0
3. |xy|<=n

## Regular expression to DFA Conversion
break expression by multiplication.

## (a+b)^*=??


### number of 0s is a multiple of 3
1*|(1*01*01*01)*