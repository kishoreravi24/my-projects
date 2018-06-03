import numpy as np
#importing numerical science in python as numpy
#input 
x=np.array([[0,1,1],[1,1,0],[1,0,0],[0,0,1]])
#output
y=np.array([0,0,1,1]).T
#defining
def neural(x,deriv=False):
    if(deriv==True):
        return x*(1-x)
    return 1/(1+np.exp(-x))
    np.random.seed(1)
#synopsis act for connection between nodes
syn0=2*np.random.random((3,4))-1
#looping
for i in range(10000):
    l0=x
    l1=neural(np.dot(l0,syn0))
#error
    l1_error=y-l1
#delta
    l1_delta=l1_error*neural(l1,True)
#update
    syn0 += np.dot(l0.T,l1_delta)
#return
print("output:")
print(l1)