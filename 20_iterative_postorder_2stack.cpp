//left->right->root
//using 2 stacks
//st1 , st2

/*
root 1in st1
push root in st2, pop from st1
push left and then right in st1
push st1.top() in st2, pop from st1
take the top's left and right ,REPEAT
when st1.empty() => stop
pop from st2 to get postorder
*/