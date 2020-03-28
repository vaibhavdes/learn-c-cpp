

# POSTFIX TO PREFIX

	2*4-1*3+5			24*13*-5+
				
			2 is read ..its operand push on stack	
	4		4 is read..its operand push on stack	
	2		* is read...its oeprator --- pop() twice	
			------1st pop() ----4 ------------------right	
			------2nd pop()---2 -------left operand	
			*24----prefix as operand to another operator so push	
				
	3		1 is read ..its operand push on stack	
	1		3 is read ..its operand push on stack	
	*24		* is read...its opeprator --- pop() twice	
			------1st pop() ----3 ------------------right	
			------2nd pop()---1 -------left operand	
			*13----prefix as operand to another operator so push	
				
			- is read...its opeprator --- pop() twice	
	*13		------1st pop() ---- *13 ------------------right	
	*24		------2nd pop()---*24 -------left operand	
			-*24*13----prefix as operand to another operator so push	
				
			5 is read ..its operand push on stack	
	5		+ is read...its opeprator --- pop() twice	
	'-*24*13		------1st pop() ---- 5 ------------------right	
			------2nd pop()---     -*24*13              -------left operand	
			+-*24*135                      ---prefix as operand to another operator so push	
				
				
			if postfix string is finished then pop element from stack is prefix of given postfix	
	'+-*24*135			
