# Naive String Matching Algorithm with user input

def naive_string_match(text, pattern):
    n, m = len(text), len(pattern)
    indices = []
    for i in range(n - m + 1):
        if text[i:i+m] == pattern:
            indices.append(i)
    return indices

# Taking input from user
text = input("Enter the text: ")
pattern = input("Enter the pattern: ")

result = naive_string_match(text, pattern)

if result:
    print("Pattern found at indices:", result)
else:
    print("Pattern not found")

