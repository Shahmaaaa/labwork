numbers=[-70,15,8,3,4,-9,0,-2]
positivenumbers=[num for num in numbers if num>0]
print("positive numbers :",positivenumbers)
N=5
squares=[num**2 for num in range(1,N+1)]
print("squares of first N numbers :",squares)
word="helloworld"
vowels=[char for char in word if char in 'aeiou']
print("vowels in the words :",vowels)
word="hello"
ordinalvalue=[ord(char) for char in word]
print("ordinal values of each character:",ordinalvalue)
