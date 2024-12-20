Measuring Processor Performance :
1. Execution Time :
Total time to complete task.
2. CPU time :
Time taken by CPU to complete its task.

## "Amdahl's law is:"
used to find improvement in a computer system when only a part of it can be improved. 
S = 1 / (1 - P + (P / N)) 
= old execution time / new execution time.

Where:
- S is the speedup of the system
- P is the proportion of the system that can be improved  -- fraction enhanced .
- N is the number of processors in the system. --speedup in fraction -enhanced.

- Max SpeedUp of overall machine is 1/(1-F)

![alt text](<Screenshot 2024-11-23 at 2.29.09 PM.png>) 
![alt text](<Screenshot 2024-11-23 at 3.01.09 PM.png>) 
![alt text](<Screenshot 2024-11-23 at 3.01.07 PM.png>) 
![alt text](<Screenshot 2024-11-23 at 2.29.57 PM.png>) 
![alt text](<Screenshot 2024-11-23 at 2.53.01 PM.png>) 
![alt text](<Screenshot 2024-11-23 at 2.55.19 PM.png>) 
![alt text](<Screenshot 2024-11-23 at 2.57.46 PM.png>)

## "Parellelism" :
Parallel computing is a computing where the jobs are broken into discrete parts that can be executed concurrently. 
Instructions from each part execute simultaneously on different CPUs.

"Flynn's classification -"
1. Single-instruction, single-data (SISD) systems -
An SISD computing system is a UNIPROCESSOR machine which is capable of executing a single instruction, operating on a single data stream. 
In SISD, machine instructions are processed in a sequential manner and computers adopting this model are popularly called sequential computers. 
Most conventional computers have SISD architecture. All the instructions and data to be processed have to be stored in primary memory.
                           { Data stream --> PROCESSOR <---Instruction pool }
The speed of the processing element in the SISD model is limited(dependent) by the rate at which the computer can transfer information internally. 
Dominant representative SISD systems are IBM PC, workstations.

2. Single-instruction, multiple-data (SIMD) systems -
An SIMD system is a multiprocessor machine capable of executing the same instruction on all the CPUs but operating on different data streams.
                                             processor<--D
                     { Instruction    -->    processor<--A
                          pool }             processor<--T
                                             processor<--A

Machines based on an SIMD model are well suited to scientific computing since they involve lots of vector and matrix operations.
Dominant representative SIMD systems is Cray’s vector processing machine.

3. Multiple-instruction, single-data (MISD) systems –
An MISD computing system is a multiprocessor machine capable of executing different instructions on different PEs(processing elements) 
but all of them operating on the same dataset .
Example Z = sin(x)+cos(x)+tan(x).
The system performs different operations on the same data set. Machines built using the MISD model are not useful in most of the application, 
a few machines are built, but none of them are available commercially.

4. Multiple-instruction, multiple-data (MIMD) systems –
An MIMD system is a multiprocessor machine which is capable of executing multiple instructions on multiple data sets.
Each PE in the MIMD model has separate instruction and data streams; therefore machines built using this model are capable to any kind of application.


"ISA" (Instruction Set architecture) :
ISA describes CPU in terms of what assembly language programmer sees i.e
a). Instruction set and instruction format .
b). Memory model and addressing methods .
c). the programmer acessable methods .
also called Programmers Model of computer.
'Features' :
1. Instruction length ( word length).
2. No of instructions in instruction set.
3. CPU internal storage .