s=list(input("Enter the sentence:").split())
words={}
for i in s:
    words[i]=words.get(i,0)+1
print(words)
