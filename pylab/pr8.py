upper_limit = int(input("Enter the upper limit: ")) 
 for num in range(1, upper_limit + 1): 
sum_of_digits = 0 
 temp = num 
 while temp > 0: 
 sum_of_digits += temp % 10 
 temp //= 10 #
 if sum_of_digits > 1: 
is_prime = True 
 for i in range(2, int(sum_of_digits ** 0.5) + 1): 
 if sum_of_digits % i == 0: 
 is_prime = False 
 break
 if is_prime: 
 print(f"The sum of digits of {num} is {sum_of_digits} and it is prime.") 
