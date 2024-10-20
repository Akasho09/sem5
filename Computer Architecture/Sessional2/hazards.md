# hazard 
refers to a situation that causes a pipeline to stall or delay the execution of instructions. Hazards occur when there is a dependency between instructions, and the pipeline is unable to execute the dependent instruction until the previous instruction has completed its execution.
1. Data Hazard 
2. Structural Hazard
3. Control Hazards

# Data Hazards
Data hazards occur when the pipeline must be stalled because one step must wait for another to complete. 
eg add $s0, $t0, $t1
sub $t2, $s0, $t3

IF ID EX| MEM WB
   IF ID|-> EX MEM WB
# control hazard
The third type of hazard is called a control hazard, arising from the need to make a decision based on the results of one instruction while others are executing.
(also called a branch hazard) is a type of hazard in computer architecture that occurs when the processor encounters a branch instruction and cannot determine the next instruction to execute. This hazard arises in pipelined processors, where multiple instructions are processed simultaneously, and the correct path of execution depends on the outcome of a branch 
(e.g., an if or goto statement).
> Computers do indeed use `prediction` to handle branches. One simple approach is to predict always that branches will be untaken. When you’re right, the pipeline proceeds at full speed. Only when branches are taken does the pipeline stall.

eg { bnez R , 2000 } ==> Branch when value in R isnt equal to 0 
Consider a pipeline with `five` stages: 
Fetch (IF) Decode (ID) Execute (EX) Memory Access (MEM) Write Back (WB)
At WB we get the confirmation to branch or not , till then I2(4 Stages), I3(3 stages) ,I4(2 stages) & I5(1 stage) have alresdy executed.
Now if we have to branch , we have to flush out all these instructions.
We can Determine the if branch cond at Decode (ie move branch execution earlier ) and reduce the flush , `Stalling` the next instructions first stage.

**branch prediction** 
A method of resolving a branch hazard that assumes a given outcome for the branch and proceeds from that assumption rather than waiting to ascertain the actual outcome.

# Dynamic Branch Prediction 
dynamic branch Prediction of branches at runtime using runtime information.
One approach is to look up the address of the instruction to see if a branch was taken the last time this instruction was executed, and, if so, to begin fetching new instructions from the same place as the last time. This technique is called dynamic branch prediction. 
One implementation of that approach is a branch prediction buffer or branch history table. A branch prediction buffer is a small memory indexed by the lower portion of the address of the branch instruction. Th e memory contains a bit that says whether the branch was recently taken or not.

> Consider a loop branch that branches nine times in a row, then is not taken
once. What is the prediction accuracy for this branch, assuming the prediction
bit for this branch remains in the prediction buffer?  {80%}

Ideally, the accuracy of the predictor would match the taken branch frequency for
these highly regular branches. To remedy this weakness, 2-bit prediction schemes
are often used. In a 2-bit scheme, a prediction must be wrong twice before it is changed.
**Scheduling the branch delay slot.** The slot directly after a delayed branch instruction, which in the
MIPS architecture is filled by an instruction that does not affect the branch.

