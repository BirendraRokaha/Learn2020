# Here we create a linked list
# We also add a few ways of inserting an elment in a linked list

# Node is a data type that contains data and pointers
# These are the building blocks of Linked List

class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

# Linked list class contains the actual data structure and all the functions that are used to process a Linked List

class LinkedList(object):
    def __init__(self):
        self.head = None

#   Create a head node if there is none
#   Add a new node to the end of the list
    def append(self,data):
        #creating a new node
        new_node = Node(data)

       # If there is no head node then create head node as new_node
        if self.head is None:
            self.head = new_node
            return
        last_node = self.head

        # Same as while last_node.next is None
        while last_node.next:
            last_node = last_node.next

        last_node.next = new_node

    # Print all the nodes in the Linked list
    def print_list(self):
        cur_node = self.head

        while cur_node:
            print(cur_node.data)
            cur_node = cur_node.next

    # Add a node in the befening of the Llist
    def prepend(self,data):
        new_node = Node(data)
        # set new node.next as head
        new_node.next = self.head
        # set the head as the new Node
        self.head = new_node

    # add an element after the required element
    def insert_after(self, prev_node , data):

        if not prev_node:
            print('The node cannot be found')
            return

        new_node = Node(data)

        new_node.next = prev_node.next

        prev_node.next = new_node


example_list = LinkedList()

example_list.append("A")
example_list.append("B")
example_list.append("C")
example_list.append("D")
example_list.append("E")

#example_list.prepend("F")

example_list.insert_after(example_list.head.next , "F")

example_list.print_list()


