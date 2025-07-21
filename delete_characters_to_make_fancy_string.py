class Solution:
    def makeFancyString(self, s: str) -> str:
        answer = []
        repeat_count = 0
        prev_char = ''
        for char in s:
            if prev_char is char:
                repeat_count += 1
                if repeat_count < 2:
                    answer.append(char)
            else:
                repeat_count = 0
                answer.append(str(char))
                prev_char = char

        return ''.join(answer)
