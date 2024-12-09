## Suppose nodes A and B are attached to opposite ends of the cable with propagation delay of 12.5 ms. Both nodes attempt to transmit at t=0. Frames collide and after the first collision, A draws k=0 and B draws k=1 in the exponential backoff protocol. Ignore the jam signal. At what time (in seconds), is A's packet completely delivered at B if the bandwidth of the link is 10 Mbps and the packet size is 1000 bits?
Solution-
Given-

Propagation delay = 12.5 ms
Bandwidth = 10 Mbps
Packet size = 1000 bits
 

Time At Which Collision Occurs-
 

Collision occurs at the mid way after time

= Half of Propagation delay

= 12.5 ms / 2

= 6.25 ms

Thus, collision occurs at time t = 6.25 ms.
Time At Which Collision is Discovered-

Collision is discovered in the time it takes the collided signals to reach the nodes

= Half of Propagation delay

= 12.5 ms / 2

= 6.25 ms

Thus, collision is discovered at time t = 6.25 ms + 6.25 ms = 12.5 ms.

 

Scene After Collision-
 

After the collision is discovered,

Both the nodes wait for some random back off time.
A chooses k=0 and then waits for back off time = 0 x 25 ms = 0 ms.
B chooses k=1 and then waits for back off time = 1 x 25 ms = 25 ms.
From here, A begins retransmission immediately while B waits for 25 ms.
 

Waiting Time For A-
 

After winning the back off race, node A gets the authority to retransmit immediately.
But node A does not retransmit immediately.
`It waits for the channel to clear from the last bit aborted by it on discovering the collision.`
Time taken by the last bit to get off the channel = Propagation delay = 12.5 ms.
So, node A waits for time = 12.5 ms and then starts the retransmission.
Thus, node A starts the retransmission at time t = 12.5 ms + 12.5 ms = 25 ms.
 

Time Taken in Delivering Packet To Node B-
 

Time taken to deliver the packet to node B

= Transmission delay + Propagation delay

= (1000 bits / 10 Mbps) + 12.5 ms

= 100 μs + 12.5 ms

= 0.1 ms + 12.5 ms

= 12.6 ms
> Thus, At time t = 25 ms + 12.6 ms = 37.6 ms, the packet is delivered to node B

## Each Station Throughput  = 500/5000 = 100bit/sec therefore for N station = N * 100 bits / sec Throughput of slotted aloha = .368 * 100Kbps Therefore .368*100*10^3 = N*100 N= 368

Each Station Throughput  = 500/5000 = 100bit/sec
therefore for N station = N * 100 bits / sec

Throughput of slotted aloha = .368 * 100Kbps

Therefore .368*100*10^3 = N*100
N= 368

## In a TDM medium access control bus LAN, each station is assigned one time slot per cycle for transmission.
Assume that the length of each time slot is the time to transmit 100 bits plus the end to end propagation delay.
Assume a propagation speed of 2 * 108m/sec. The length of the LAN is 10 km with a bandwidth of 1 Mbps. Find
the maximum number of stations that can be allowed in the LAN so that the throughput of each station can be
1/3 Mbps.

![alt text](<Screenshot 2024-12-09 at 5.24.58 PM.png>)

## Consider a network using the pure ALOHA medium access control protocol, where each frame is of length 500 bits. The channel transmission rate is 1 Mbps. The aggregate number of transmission across all the nodes (including new frame transmissions and retransmitted frames due to collisions) is modelled as a Poisson process with a rate of 500 frames per second. Find the throughput of the network?

![alt text](<Screenshot 2024-12-09 at 7.39.43 PM.png>)