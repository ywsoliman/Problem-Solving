word = input().lower()
vowels = 'aeiouy'
for letter in word:
    if letter in vowels:
        word = word.replace(letter, '')
lastWord = ''
for letters in word:
    lastWord = lastWord + '.' + letters
print(lastWord)