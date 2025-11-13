# Naive String Matching Algorithm in Python

def naive_string_match(text, pattern):
    n, m = len(text), len(pattern)
    for i in range(n - m + 1):
        if text[i:i+m] == pattern:
            print("Pattern found at index", i)

# Example
text = "AABAACAADAABAABA"
pattern = "AABA"
naive_string_match(text, pattern)
