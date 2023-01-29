# def add(beg,end):
#     return beg + end
#
# the_sum = add(12,14)
# print(the_sum)

def mer(num):
    i = 0
    result = 0
    while i <= 12:
        i += 1
        result += i
        num *= result
    return result

result = mer(8)
print(result)
