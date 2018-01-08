# how to manupulate a loop with i and j


def forLoops(Arr):
    size = len(Arr)
    sum = 0
    #i starts from 0 to size
    for i in range (0, size):
        #j starts from i to size,
        #  bubble sort uses this method
        for j in range ( i, size-1 ):
            if ( Arr[i]>Arr[j]):
                temp = Arr[i]
                Arr[i]= Arr[j]
                Arr[j] = temp
    # -------------------------------------------------------------------
    for i in range(0,size+1):
        count = 0
        # method continuously checks for first few elements
        # j is only allowed to have a max value of i so as elements of i will shrink, j will expand
        for j in range(0,i):
            count = count + 1
            # print Arr[j]
        # print  '---'
    # ---------------------------------------------------------------

    # in this example i starts from begining and j from end
    # it is very  handy for solutions like palendrome
    for i in range (0, size-1):
        for j in range (size-1,i,-1):
            print Arr[j]


A = [-2, 5, -3, 6, 11, 23]

forLoops(A)