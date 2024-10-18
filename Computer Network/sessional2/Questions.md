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

# In a TDM medium access control bus LAN, each station is assigned one time slot per cycle for transmission. Assume that the length of each time slot is the time to transmit 100 bits plus the end to end propagation delay. Assume a propagation speed of 2 * 10^8m/sec. The length of the LAN is 10 km with a bandwidth of 1 Mbps. Find the maximum number of stations that can be allowed in the LAN so that the throughput of each station can be 1/3 Mbps.

Propagation delay = (LAN length / Propation speed) = 1000/2*10^8 = 50 * 10^-6
Time to transmit 100 bits: 100bits/1Mbps = 100 * 10^-6 s ;
Total = 150 micros
In a whole cycle each user transmit for only 
Therefore efficiency is (100/150N)
Throughput of each station (100/150N)*1 Mbps = 2/3N Mbps
which is given as 1/3 Mbps = 2/3N => {N=2}

# Station A needs to send a message of 12 packets to station B using a sliding window (window size 4) and Go- back-N error control strategy. All packets are ready and immediately available for transmission. If every 4th packet that A transmits get lost (but no acknowledgement form B ever get lost), then what is the number of packets that A will transmit for sending the message to B?

Whole window gets discarded after 1 packet is lost = > But count them as being sent 
![alt text](image.png) 



1. Character count: 
The frame has 5 characters, so the character count is 5.
5=00000101
Transmitted bit sequence:
Count (5)+A+B+FLAG+ESC+FLAG
00000101 0100111111000011011111101111100001111110

2. Flag Bytes with Byte Stuffing :
Transmitted bit sequence:
FLAG+A+B+ESC+FLAG+ESC+ESC+FLAG
0111111001001111110000111111100001111110111110001111100001111110

3. Starting and Ending Flag Bytes with Bit Stuffing
Transmitted bit sequence:
FLAG+A+B+Bit-stuffed FLAG+ESC+Bit-stuffed FLAG+FLAG
011111100100111111000011011111001011111000011111001001111110
Bit stuffing rule: If 5 consecutive 1s appear in the data, a 0 is inserted after those 5 1s to avoid accidentally detecting a FLAG byte.

# A system is generating frame at the rate of 80Mbps, while the rate of the receiver is 8Mbps for sending acknowledgement. Size of the frame and acknowledgement are 500 bytes and 50 bytes respectively. The round trip delay is 100 μs. Calculate the throughput for stop and wait ARQ.

Total cycle time=50μs+100μs+50μs=200μs
Throughput= Useful frame transmission time/Total cycle time = 50/200= 0.25
Effective Throughput=0.25×80Mbps= {20Mbps}


# Suppose the data arrived at the receiver is FC6. Now, by using some error detecting technique, check whether the received data is error free or not. If not, then determine the original data.

1111 1100 0110
F    C    6
P0 = 4
P1 = 5 ==> wrong 
P2 = 2
P3 = 5 ==> wrong 
1010 ==> 10th is wrong 