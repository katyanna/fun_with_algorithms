#1. Given a string containing just the characters '(', ')', '{', '}', '[' and ']', 
#determine if the input string is valid. 
#An input string is valid if:
#Open brackets must be closed by the same type of brackets.
#Open brackets must be closed in the correct order.
#Note that an empty string is also considered valid.
#Example-1 :  Input: "()[]{}"
#Output: true
#Example-2:    Input: "([)]"
#Output: false

def valid_brackets(sequence):
    open_brackets = ["(", "[", "{"]
    brackets_map = {")": "(", "]": "[", "}": "{"}
    temp = []

    for bracket in sequence:
        if bracket in open_brackets:
            temp.append(bracket)
        elif not temp or temp.pop() != brackets_map[bracket]:
            return False
    return not temp 

a = "()[]{}"
print(valid_brackets(a))

b = "([)]"
print(valid_brackets(b))

