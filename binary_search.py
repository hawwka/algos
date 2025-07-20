def binary_search(list, item):
    low = 0
    high = len(list)

    while low <= high:
        mid = (low + high) // 2

        if list[mid] == item:
            return mid
        elif list[mid] > item:
            high = mid - 1
        else: 
            low = mid + 1



print(binary_search([1,2,3,4,5,6,7], 4)) 
