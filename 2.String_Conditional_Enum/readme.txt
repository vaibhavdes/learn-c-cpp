

***** Required for Bitwise Operator | Program Number 6 *****

Numbers Binary Pattern Explanation 

In AND operation resultant bit is 1 if and only if both bits are 1; if any of the bit is 0, resultant bit will be 0.

  12 --->  0000 0000 0000 1100    
& 5 ---->  0000 0000 0000 0101 
___________________________________________
4    ----> 0000 0000 0000 0100 

In OR operation resultant bit is 0 if and if both bits are 0; if any of the bit is 1, resultant bit will be 1. 
   12 ---> 0000 0000 0000 1100   
|   5 ---> 0000 0000 0000 0101 
_________________________________
  13       0000 0000 0000 1101  


In XOR operation resultant bit is 0 if and if both bits are 0 or 1 ; if any of the bit is 1, resultant bit will be 1.

12 --->0000 0000 0000 1100  
^5 --->0000 0000 0000 0101 
______________________________________________
9 ---> 0000 0000 0000 1001  

 In NOT operation, each bit is inverted i.e. 0 to 1 and 1 to 0.  

   ~ 12 0000 0000 0000 1100 
   FFF3 1111 1111 1111 0011  
_________________________________________
                       
In Left Shift operator each bit is shifted to left, and zero is padded to right side. Here shifting is done two times 
5  0000 0000 0000 0101 (<< 2)
___________________________________________
20 0000 0000 0001 0100  

In Right  Shift operator each bit is shifted to right, and zero is padded to left side for unsigned numbers,
 while copy of right most bit (MSB) is padded to left side for signed numbers

5  0000 0000 0000 0101 (>>1)
__________________________________________________
2  0000 0000 0000 0010 




                                 -5;              00000000 00000101
	                      1s complements            11111111 11111010
		       +                                                      1
		 __________________________________________
    		                2s                        11111111 11111011


