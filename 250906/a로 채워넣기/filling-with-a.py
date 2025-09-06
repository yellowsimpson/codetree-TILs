text = input()

leng = len(text)

text = text[:1] + 'a' + text[2:]
text = text[:leng - 2] + 'a' + text[leng - 1:]


print(text)