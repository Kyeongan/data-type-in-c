import sys

def main():
    # Displaying sizes of data types
    print("Size of Data Types in Python")
    print("===========================")
    print(f"Size of int = {sys.getsizeof(0)} Bytes")
    print(f"Size of float = {sys.getsizeof(0.0)} Bytes")
    print(f"Size of complex = {sys.getsizeof(complex(0, 0))} Bytes")
    print(f"Size of str = {sys.getsizeof('')} Bytes")
    print(f"Size of bool = {sys.getsizeof(True)} Bytes")
    print(f"Size of list = {sys.getsizeof([])} Bytes")
    print("\n")

    # Displaying ranges of numeric types
    print("The Range of Numeric Types in Python")
    print("=============================")
    print("Range of int: No fixed range, can grow as large as memory allows.")
    print("Range of float: From -1.8e308 to 1.8e308 (approximately)")
    print("Range of complex: Complex numbers are unbounded")
    print("Range of bool: Only two values: True and False")
    print("\n")

if __name__ == "__main__":
    main()