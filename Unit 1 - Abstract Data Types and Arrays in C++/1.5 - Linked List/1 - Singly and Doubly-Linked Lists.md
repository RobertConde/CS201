# Singly and Doubly-Linked Lists

## Background

* A linked list models a sequence.
* A linked list is a chain of _node_ objects. Each object stores:
  * A single value in the sequence; this is the _payload_
  * A reference (pointer) to the node storing the next value in the sequence; this is the _successor_ reference.
* Optionally, a node may also have a reference to the node containing the previous value in the sequence. This is the
_predecessor_ reference.
* Types of Linked Lists:
  * Singly-Linked List: contains only the successor reference.
  * Doubly-Linked List: contains both the successor and the predecessor references. 
* The _head_ of a linked list is the node containing the first element of the sequence. The _tail_ of a linked list is
the node containing the last element of the sequence.

* Singly-Linked List:

![](https://learn.saylor.org/pluginfile.php/518270/mod_page/content/3/sll.png)

* Doubly-Linked List:

![](https://learn.saylor.org/pluginfile.php/518270/mod_page/content/3/dll.png)


## Characteristics

* General Characteristics
  * O(1) prepend and append operations.
  * O(1) remove first element.
  * O(1) remove last element for doubly-linked lists; O(N) for singly-linked lists.
  * O(N) get/set/insert/remove using an arbitrary index.
  * O(1) insert/remove given a pointer to a list node which is adjacent to the insertion and/or removal site.
  * O(N) to iterate through values from beginning of sequence to end.
  * O(N) to iterate backwards through values (end to beginning) for doubly-linked lists only.
* Linked lists are said to support a _sequential_ access for elements.
* Algorithms that _require_ random access to elements in the sequence should use an array-based sequence data structure
which supports get and set at an index in O(1) time.


## Implementation Issues

* Linked Lists can be somewhat tricky to implement correctly.
* The key to correctly implementing operations on a linked list is to preserve the fundamental invariants of the data
structure:
  * The linked list must keep track of which node contains the first and last values in the sequence.
  * For a node _N_ in the chain containing a value _V_ in the sequence, _N_'s successor reference must point to the node
  containing the successor to _V_ in the sequence.
  * Doubly-Linked Lists: For a node _N_ in the chain containing a value _V_ in the sequence, _N_'s predecessor reference
  must point to the node containing the predecessor to _V_ in the sequence.


## Termination

* The first and last nodes in a sequence are special cases:
  * the first value has no predecessor,
  * and the last value has no successor.
* A linked list implementation will require some form of _termination_ for the nodes storing the first and last values
in the sequence. There are two ways to implement this:
  1) Use `null` as a terminator. The head node's predecessor reference is and the tail node's successor reference is
  `null`. When the chain of nodes is terminated using `null`, the methods which implement the linked list operations
  must be very careful to check successors and predecessors to ensure that they are non-null before attempting to use
  them (by accessing the payload, following successor/predecessor links, etc.)
  ![](https://learn.saylor.org/pluginfile.php/518270/mod_page/content/3/dllNullTerm.png)

  2) Use _sentinel_ nodes. A sentinel node is a special node that does not contain an element of the sequence. Sentinel
  nodes are useful to eliminate some (all?) special cases that would otherwise arise when performing operations at the
  beginning and end of the linked list. For example, if the head node is preceded by a sentinel node, and the tail node
  is followed by a sentinel node, then all the nodes in the list which contain element values have predecessor and
  successor nodes. This can significantly reduce the complexity of implementing the linked list operations. Using
  sentinel nodes in a linked list creates a new invariant: the "head sentinel" must always be the predecessor of the
  head node, and the "tail sentinel" must always be the successor of the tail node.
  ![](https://learn.saylor.org/pluginfile.php/518270/mod_page/content/3/dllSentinelTerm.png)
