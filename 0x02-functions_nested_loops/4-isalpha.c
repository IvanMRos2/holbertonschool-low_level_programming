#include "main.h"                                                 
                                                                 
/**                                                               
 * main - Checks lowercase character
 *                                               
 * Return: 1 if c is lowercase or uppercase 0 if not      
 */                                                               
int _isalpha(int c)                                               

{                                                               
       if (((c >= 'a' && c <= 'z')) || ((c >= 'A') && (c <= 'Z')))                                 
                return(1);                                        
        else                                                      
		return(0);                                        

}
