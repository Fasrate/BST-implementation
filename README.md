# BST-implementation
General purpose Binary Search Tree library.

include BST.h

To construct a Binary Search tree you need to specify the data type of inserted values.
Functions avilable in BST are:-
1.insert(val);
2.search(val);
3.preorder();
4.inorder();
5.postorder();

Example usage:

    BST<int>bst;
    
    bst.insert(1);
    bst.insert(2);
    bst.insert(3);
    bst.insert(4);
    
    bst.preorder();
    bst.inorder();
    bst.postorder();
    
