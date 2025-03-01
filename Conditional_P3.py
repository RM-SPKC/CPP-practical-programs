print("\n\t\t\tConditional Statements")
print("\t\t\t-----------------------")
print("\n\nCheck Even or Odd number")
print("-----------------------")

num=int(input("Enter a number : "))
if num > 0:
    print("\n\tThe number is Positive.")

    # Nested if to check even or odd
    if num % 2 == 0:
        print("\n\tIt is an Even number.")
    else:
        print("\n\tIt is an Odd number.")
        
elif num < 0:
    print("\n\tThe number is Negative.")
else:
    print("\n\tThe number is Zero.")
       
