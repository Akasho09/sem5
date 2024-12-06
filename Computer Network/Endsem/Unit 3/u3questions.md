## (a) The following character encoding is used in a data link protocol:
A:01001111; B:11000011; FLAG: 01111110; ESC: 11111000
Show the bit sequence transmitted (in binary) for the five-character frame: A B FLAG ESC
FLAG when each of the following framing methods are used:
i) Character Count
ii) Flag bytes with byte stuffing
iii) Starting and ending flag bytes, with bit stuffing

(6)

(b) A system is generating frame at the rate of 80Mbps, while the rate of the receiver is 8Mbps
for sending acknowledgement. Size of the frame and acknowledgement are 500 bytes and
50 bytes respectively. The round trip delay is 100 μs. Calculate the throughput for stop and
wait ARQ.

![alt text](<Screenshot 2024-12-06 at 6.23.05 PM.png>)


## A system is generating frame at the rate of 80Mbps, while the rate of the receiver is 8Mbps for sending acknowledgement. Size of the frame and acknowledgement are 500 bytes and 50 bytes respectively. The round trip delay is 100 μs. Calculate the throughput for stop and wait ARQ.

Total cycle time=50μs+100μs+50μs=200μs
Throughput= Useful frame transmission time/Total cycle time = 50/200= 0.25
Effective Throughput=0.25×80Mbps= {20Mbps} = 2500bytes/s.

## Suppose the data arrived at the receiver is FC6. Now, by using some error detecting technique, check whether the received data is error free or not. If not, then determine the original data.

1111 1100 0110
F    C    6
P0 = 4
P1 = 5 ==> wrong 
P2 = 2
P3 = 5 ==> wrong 
1010 ==> 10th is wrong 

## In a TDM medium access control bus LAN, each station is assigned one time slot per cycle for transmission. Assume that the length of each time slot is the time to transmit 100 bits plus the end to end propagation delay. Assume a propagation speed of 2 * 10^8m/sec. The length of the LAN is 10 km with a bandwidth of 1 Mbps. Find the maximum number of stations that can be allowed in the LAN so that the throughput of each station can be 1/3 Mbps.

Propagation delay = (LAN length / Propation speed) = 1000/2*10^8 = 50 * 10^-6
Time to transmit 100 bits: 100bits/1Mbps = 100 * 10^-6 s ;
Total = 150 micros
Let there are maximum N number of station then Length of cycle is N*150us
In a whole cycle each user transmit for 10us only 
Therefore efficiency is (100/150N)
Throughput of each station (100/150N)*1 Mbps = 2/3N Mbps
which is given as 1/3 Mbps = 2/3N => {N=2}
https://www.youtube.com/watch?v=9A9uAJHHlHo


## AT Mbps satellite link connects two ground stations. The altitude of the satellite is 56,504 (+3)
Km and speed of the signal is 3*10 8 m/sec. What should be the packet size for a channe
utlization of 25% fora satellite link using Go- Back-127 sliding window protocol
ChatGPT said:
ChatGPT


![alt text](<Screenshot 2024-12-06 at 7.32.57 PM.png>)

## Consider a selective repeat sliding window protocol that uses a frame size ofl KB to send
data on a 1.5 Mbps link with a one-way laiency of 50 msec. To achieve a link utulization ot
U0, Caleulate the minimum number of bits required to represent the sequence number
ficld?
![alt text](<Screenshot 2024-12-06 at 7.40.20 PM.png>)
