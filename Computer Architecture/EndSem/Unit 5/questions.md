## 
1. Shared Memory Multiprocessors
`Characteristics`:
- Memory Model: All processors share a single, unified memory space.
- Communication: Processors communicate by reading and writing to shared variables in the global memory.
- Hardware Structure: Processors are connected to a central memory through a bus or interconnect.
- Programming Model: Easier to program due to the shared address space. Threads or processes can directly access shared variables.
- Synchronization: Achieved using locks, semaphores, or barriers to ensure proper access to shared data.
- Scalability: Limited scalability due to contention for the shared memory (memory bandwidth bottleneck).

2. Distributed Memory Processors
Characteristics:
Memory Model: Each processor has its own private memory, and no shared memory exists.
Communication: Processors communicate via explicit message passing using interconnects (e.g., Ethernet, InfiniBand).
Hardware Structure: Processors are connected through a network; each has its own local memory.
Programming Model: Requires explicit communication using message-passing libraries like MPI (Message Passing Interface).
Synchronization: Done through message exchanges and synchronization barriers.
Scalability: More scalable as adding processors doesn't create memory contention (only network contention).
![alt text](<Screenshot 2024-11-25 at 12.34.57 PM.png>)


Aspect	        Shared Memory	Distributed Memory
Memory Access        	Global memory shared by all	Private memory for each processor
Communication        	Implicit through memory	Explicit via message passing
Scalability	        Limited	Highly scalable
Programming	       Easier	More complex
Examples	       Multi-core CPUs	HPC Clusters, Supercomputers
Performance	       Fast access, bottlenecks possible	Slower communication, scalable


##
1. `Migration`
Definition: Migration refers to the process of moving a data block from one processor's cache to another processor's cache while ensuring consistency.
### Purpose:
- To allow a processor to have exclusive access to the most recent copy of the data in its cache.
- Reduces the need to repeatedly access the slower main memory
### How It Works:
- When a processor requests data, the data is moved to that processor's cache.
- The original copy in the previous cache (or memory) is invalidated to maintain coherence.
Example:
Processor 1 holds data X in its cache.
Processor 2 wants to write to X. The cache coherence protocol migrates X to Processor 2's cache and invalidates Processor 1's copy.

2. `Replication`
Definition: Replication refers to the process of creating multiple copies of a data block in the caches of different processors.
Purpose:
- To allow multiple processors to read the same data simultaneously without contention.
- Reduces latency by avoiding repeated access to the slower shared memory.
How It Works:
- When a processor requests data, the cache coherence protocol allows the data to be replicated in multiple caches (in the Shared (S) state in protocols like MSI or MESI).
- Writes to the replicated data are handled using invalidation or update mechanisms.
Example:
Data Y is read by both Processor 1 and Processor 2. A copy of Y is replicated in both caches in the shared state.

3. `Write Serialization`: 
Ensures that all processors observe writes to a memory location in the same order. This guarantees that the system has a consistent view of memory writes.

