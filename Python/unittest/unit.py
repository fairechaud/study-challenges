import unittest 

def division(a, b): 
    result = a / b 
    return result 

class Testing(unittest.TestCase): 
    def test_result(self): 
        result = division(10, 5) 
        self.assertEqual(result, 2) 
        
    def test_error(self):
        with self.assertRaises(ZeroDivisionError) as e:
            division(10, 0)
        self.assertEqual(str(e.exception), "My Custom Error Text")

        
if __name__ == "__main__": unittest.main()