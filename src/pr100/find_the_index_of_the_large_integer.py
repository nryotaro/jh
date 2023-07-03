# """
# This is ArrayReader's API interface.
# You should not implement it, or speculate about its implementation
# """
#class ArrayReader(object):
#	 # Compares the sum of arr[l..r] with the sum of arr[x..y]
#	 # return 1 if sum(arr[l..r]) > sum(arr[x..y])
#	 # return 0 if sum(arr[l..r]) == sum(arr[x..y])
#	 # return -1 if sum(arr[l..r]) < sum(arr[x..y])
#    def compareSub(self, l: int, r: int, x: int, y: int) -> int:
#
#	 # Returns the length of the array
#    def length(self) -> int:
#


class Solution:
    def getIndex(self, reader: 'ArrayReader') -> int:
        n = reader.length()

        l, y = 0, n-1
        while l != y:
            # print(l, y)
            length = y - l + 1
            if length % 2:
                r = l + (length-1) // 2 - 1
                x = r + 1
                compare = reader.compareSub(l, r, x, y-1)
                if compare == 1:
                    y = r
                elif compare == 0:
                    return y
                else:
                    l, y = x, y - 1
            else:
                r = l + length // 2 - 1
                compare = reader.compareSub(l, r, r+1, y)
                if compare == 1:
                    y = r
                else:
                    l = r + 1
        return l
