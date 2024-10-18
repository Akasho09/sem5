## Data Link Layer
- Network layer is responsible for source to source but DLL decides which next route it will reach first (switching) or hop to hop delivery.
- Flow control Flow control refers to a set of procedures used to restrict the amount of data that the sender can send before waiting for acknowledgment.
- Error control in hop to hop not source to destination (CRC)
- Acesses Control (ALOHA etc) => which devices send messages at what time.

# Framing
Frames are the units of digital transmission, particularly in computer networks and telecommunications. Frames are comparable to the packets of energy called photons in the case of light energy. Frame is continuously used in Time Division Multiplexing process. 

# Bit Stuffing and Byte Stuffing
Example of bit stuffing – 
Bit sequence: 110101111101011111101011111110 (without bit stuffing) 
Bit sequence: 110101111100101111101010111110110 (with bit stuffing) 
After 5 consecutive 1-bits, a 0-bit is stuffed.


## Error detection and Correction
1. Single bit error  e.g 1011 => 0011
2. Burst Error  >=2error  e.g 1011 => 0010   => 4 bit error between 1->4

# Detection 
1. Simple Parity or VRC(Vertical Redundancy Check) (Even , Odd) => Detects all single bit errors in data  or odd number of changes.
Hamming distance(d) = XOR of any 2 valid codes (eg 1000 & 0000 ) , is min 2 for all cases.
Can detect => d-1 errors 
2. 2D Parity Check or LRC (Longitudnal) => Multiple parity , table 
3. Check Sum
4. Cyclic Redundancy Check (CRC) => 
CRC uses Generator Polynomial which is available on both sender and receiver side. 
An example generator polynomial is of the form like x^3 + x + 1. This generator polynomial represents key 1011. Another example is x^2 + 1 that represents key 101. 
- Total bits send = n+k (n : Number of bits in data to be sent from sender side.  k : Number of bits in the key obtained from generator polynomial.)
Divide Data word by Generator poly and append the remainder to the data word => new valid data word , which when divide by geberator poly gives remainder =0 

# Correction
1. Hamming Codes :
- All the bit positions that are a power of 2 are marked as parity bits (1, 2, 4, 8, etc).
The number of data bits = 7
The number of redundant bits = 4
The total number of bits = 7+4=>11
The redundant bits are placed at positions corresponding to power of 2 that is 1, 2, 4, and 8
|d3|d2|d1|p2|d0|p1|p0|
|7 |6 |5 |4 |3 |2 |1 |
- p2 = bits 4, 5, 6, 7 
- p1 bit is calculated using parity check at all the bits positions whose binary representation includes a 1 in the second position from the least significant bit. R2: bits 2,3,6,7,10,11 
- p0 bit is calculated using parity check at all the bits positions whose binary representation includes a 1 in the least significant position. 
p0: bits 1, 3, 5, 7, 9, 11
if any of the parity is not even => error
error will be at p2p1p0 (eg 110=>6th bit is error) 

## Flow Control Protocols types

# Stop and Wait ARQ Protocol
Stop and Wait ARQ (Alternating Bit Protocol) is a data transmission protocol used for reliable data transfer over noisy channels or links. It ensures that information is not lost due to dropped packets and that packets are received in the correct order.
2 Sequence numbers 0 & 1 => 
- Sender sends Frame 0 , recives Ack1 => Senders send Frame 1 , recieves Ack0 => loop
- if Frame 0 is lost => Sender waits till Timeout and restarts and Sends again Frame 0
- if Ack1 is lost => Sender waits and again sends same frame but reciever discards because has seq no = 1  , now sender again sends .
Efficency = 1/(1+2x) x=Tp/Tt => Propagation delay (Tp) ,Tt(Transmission Time)

# Go-Back-N Automatic Repeat Request (ARQ) 
is a data link layer protocol used for data flow control purposes. It is a sliding window protocol, where multiple frames are sent from the sender to the receiver at once, depending on the window size (N). The protocol ensures reliable data transfer by retransmitting lost or corrupted frames.
Sender winndow size = 2^m -1 where m is the number of bits required to represent the sequence number.
Reciever window size = 1
- if Ack2 is lost => Sender send next seq no (ie Frame 2) if it gets Ack3 from return => reciever has recived frame 1 also.
- if Frame1 is lost => reciever will discard Frame2 also bcx its size=1 which is on seq no1
Inorder bvx reciever size =1 
Efficency = (2^k -1)/(1+2x)

# Selective Repeat ARQ (Automatic Repeat Request)
Sender winndow size = 2^(m-1) and Reciever also , where m is the number of bits required to represent the sequence number.
Out of order also excepted ie window size is 123 therefore anyone between 123 will be recieved.
Reciever window keeps sliding forward.
- If 2 is recieved and 1 has still not come => it will send NAK 1(Negative Acknowledgement 1).



### Remaining
checksum
HDLC
