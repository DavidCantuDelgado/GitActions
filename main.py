from colorama import init, Fore


def divide_numbers(a, b):    
    result = a / b
    return result    



def main():   

    # imprime el titulo del programa
    

    try:
        
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))
    
        result = divide_numbers(num1, num2)        
        
        print(f"Result: {result}")        

    except ValueError:
        print(f"Error: {ValueError}")
        return   




if __name__ == "__main__":
    main()