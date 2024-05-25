# LinkedList

Linked list setup

Create a c++ class called linked list
  This class will represent a doubly linked list
  What fields will this class have?
  What will be the relationship between this class and node?
Public methods:
  constructor - takes in a size, creates an empty list of that size
  Destructor - deletes the list and frees all memory
  Add to index - takes in index x and element e, puts e at x, then puts the old x at x + 1, etc...
  Remove from index - takes in index x, deletes x, then puts the old x + 1 at x, x + 2 at x + 1, etc...
  Modify index - takes in index x and element e, and changes the old x to the new element
  Get element at index x - this should be easy man
  Add to start - easy
  Add to end - easy
  Print list - format it nicely, do "Element at index x: e\n" - CODE THIS FIRST SO YOU CAN USE IT TO CHECK YOUR LIST
  

Create a c++ class called node
  This class will represent a single node
  What fields will this class have?
Public methods:
  constructor
  Destructor
  Set next
  Set prev
  Set value
  Get next
  Get prev
  Get value

Create an example program that uses the linked list class
