# Switching 

is the process of transferring data packets from one device to another in a network, or from one network to another, using specific devices called switches.

Switching takes place at the Data Link layer of the OSI Model.

"A switch" is a hardware device in a network that connects other devices, like computers and servers. It helps multiple devices share a network without their data interfering with each other.

# Process of Switching

The switching process involves the following steps:

- Frame Reception: The switch receives a data frame or packet from a computer connected to its ports.
- MAC Address Extraction: The switch reads the header of the data frame and collects the destination MAC Address from it.
- MAC Address Table Lookup: Once the switch has retrieved the MAC Address, it performs a lookup in its Switching table to find a port that leads to the MAC Address of the data frame.
- Forwarding Decision and Switching Table Update: If the switch matches the destination MAC Address of the frame to the MAC address in its switching table, it forwards the data frame to the respective port. However, if the destination MAC Address does not exist in its forwarding table, it follows the flooding process, in which it sends the data frame to all its ports except the one it came from and records all the MAC Addresses to which the frame was delivered. This way, the switch finds the new MAC Address and updates its forwarding table.
- Frame Transition: Once the destination port is found, the switch sends the data frame to that port and forwards it to its target computer/network

# Message Switching: 

This is an older switching technique that has become obsolete. In message switching technique, the entire data block/message is forwarded across the entire network thus, making it highly inefficient.

store and forward mechanism.

# Circuit Switching:

On Physical Layer.

In this type of switching, a connection is established between the source and destination beforehand. This connection receives the complete bandwidth of the network until the data is transferred completely.

Total Time = SetupTime + TransmissionTime (Message/Bandwidth) + PropagationDelay(Distance/velocity) + TearDownTime(To free the resources)

# Packet Switching: 

This technique requires the data to be broken down into smaller components, data frames, or packets. These data frames are then transferred to their destinations according to the available resources in the network at a particular time.

- On Data Link and Network Layer.
- store and forward mechanism.

Total Time = n(no of switches used)*TransmissionTime (Message/Bandwidth) + PropagationDelay(Distance/velocity)

1. Datagram Packet Switching: => On Network Layer

In Datagram Packet switching, each data frame is taken as an individual entity and thus, they are processed separately. Here, no connection is established before data transmission occurs. Although this approach provides flexibility in data transfer, it may cause a loss of data frames or late delivery of the data frames.

2. Virtual-Circuit Packet Switching: => On Data Link Layer

In Virtual-Circuit Packet switching, a logical connection between the source and destination is made before transmitting any data. These logical connections are called virtual circuits. Each data frame follows these logical paths and provides a reliable way of transmitting data with less chance of data loss.

# ALOHA

Aloha is a type of Random access protocol it was developed at the University of Hawaii in early 1970, it is a LAN-based protocol this type there are more chances of occurrence of collisions during the transmission of data from any source to the destination, Aloha has two types one Pure Aloha and another Slotted Aloha.

Vulnerable Period in ALOHA :

In ALOHA, the vulnerable period is the time during which a transmitted packet is susceptible to collision with other packets.

- Aggregate transmission rate (Poisson arrival rate) = 500 Frames/second.

=> G= 500*Tt = 25 

# PURE ALOHA

Vulnerable time = 2 * Tt(Transmission Time)

Efficency = G*e^-2G.

For Max Efficency = d(n)/dG=0 ==> G=1/2 ==> If half of the station will traansmit data => min collision or max efficency=18.4%(1/2e)

# Slotted ALOHA

Every onre can transmit at the begining og the Transmission.

Vulnerable time = Tt(Transmission Time)

Efficency = G*e^-G.

For Max Efficency = d(n)/dG=0 ==> G=1 ==> min collision or max efficency=36.8%(1/e)

