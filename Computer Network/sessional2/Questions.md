# Design a TST (Time-Space-Time) switch with 36 inputs and 36 outputs. Assume that 25% of the users are usually active at a time. Calculate minimum number of cross points needed in this scenario. Compare this scenario with the situation when only one cross bar switch is used for all input and output connections.
Stage 1 - Time Switch (Input side):

Each input can use up to 9 active time slots (since 25% users are active).
Each input switch connects 9 active slots to a space switch (instead of all 32 slots).
Total crosspoints for Time Switches:

𝑁
×
9
=
36
×
9
=
324
 
crosspoints
N×9=36×9=324crosspoints
Stage 2 - Space Switch:

A space switch connects active channels from input to output.
There are 9 active inputs from each input line to connect to any of the 36 outputs.
The required crosspoints for the space switch:
9
×
36
=
324
 
crosspoints
9×36=324crosspoints
Stage 3 - Time Switch (Output side):

Similar to the input side, we need 36 time switches, each with 9 active channels.
Total crosspoints for Time Switches (Output side):

𝑁
×
9
=
36
×
9
=
324 crosspoints
N×9=36×9=324crosspoints
Total Crosspoints for TST Switch:

324
+
324
+
324
=
972
 
crosspoints
324+324+324=972crosspoints
Single Crossbar Switch Calculation:
A single crossbar switch must connect all 36 inputs to all 36 outputs directly.
Crosspoints required for a single crossbar switch:
36
×
36
=
1296
 
crosspoints
36×36=1296crosspoints