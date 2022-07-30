class Solution:
    def isValid(self, s: str) -> bool:
        char_stack = []
        
        if not s:
            return True

        for char in s:
            if char == '(' or char == '{' or char == '[':
                char_stack.append(char)
            else:
                top_char = ""

                if char_stack:
                    top_char = char_stack.pop()
                else:
                    return False

                if (char == ')' and top_char != '(') or (char == '}' and top_char != '{') or (char == ']' and top_char != '['):
                    return False

        if char_stack:
            return False
        else:
            return True

