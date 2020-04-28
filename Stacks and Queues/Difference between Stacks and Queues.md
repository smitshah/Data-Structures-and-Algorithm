# Difference between Stacks and Queues

| Stack | Queues |
| --------- | --------- |
| Works on Last In First Out (LIFO) principle. | Works on First In First Out (FIFO) principle. |
| Requires only one reference pointer. | Requires two reference pointers. |
| It is primarily a vertical representation of data items. | It is a horizontal representation of data items. |
| Contains TOP as its reference for data processing. | Contains REAR and FRONT as its reference for data processing. |
| The data items are inserted and deleted from the same end. | The data items in a queue are inserted and deleted from different ends. |
| The element to be inserted first is removed last. | The element to be inserted first is removed first. |
| To check if a stack is empty, "TOP == -1" condition is used. | To check if a queue is empty, "FRONT == -1 || FRONT == REAR + 1" condition is used. |
| The insertion and deletion operations occur at the TOP end of a Stack. | The insertion operation occurs at REAR end and the deletion operation occurs at FRONT end. |
| A Stack data structure is not necessarily an ordered collection of data items. | A Queue data structure is an ordered collection of data. |
| To check if a stack is full, "TOP == MAX – 1" condition is used. | To check if a queue is full, "REAR == MAX – 1" condition is used. |
| It cannot be divided into sub sections and it doesn’t have extensions. | It can be divided into sub sections and it has the extensions like Double Ended Queue, Simple Queue, Priority Queue and Circle Queue. |
| Used in infix, postfix, prefix conversions, scheduling algorithms, depth first search and evaluation of an expression. | It offers services in operations research, transportation and computer science that involves persons, data, events and objects to be stored for later processing. |
