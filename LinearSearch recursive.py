#Linear Search using recursion in py

def LinearSearch(arr,key):
    if len(arr)==0:
        return False
    if arr[0]==key:
        return True
    else:
        return LinearSearch(arr[1:],key)
   
arr=[4,6,4,2020,3]
print(LinearSearch(arr,2020))
