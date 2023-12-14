import pytest
from ..main import divide_numbers

def test_divide_numbers():
    assert divide_numbers(10, 2) == 5
    assert divide_numbers(25, 5) == 5
    assert divide_numbers(0, 5) == 0
    assert divide_numbers(-8, 4) == -2
    assert divide_numbers(4, 8) == 0.5
    assert divide_numbers(7, 3) == 2.3333333333333335
    assert divide_numbers(15, 0) == "Error: ZeroDivisionError"

if __name__ == "__main__":
    pytest.main()