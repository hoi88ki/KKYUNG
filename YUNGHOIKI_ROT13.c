// Author: Ivan Yung Hoi Ki
// Date Created: 6 June 2015
// This program is used to perform ROT13 encryption
// ROT13 encryption is an encryption method which encryption and decryption is using the same program

#include <stdio.h>

char c;

int main(){
	do{
		// read char
		c = getc(stdin);
		// check whether the file ends
		if(feof(stdin))
			break;
		// encrypt all alphabet character accordingly
		if(((c >= 'A')&&(c <= 'M'))||((c>='a')&&(c<='m')))
			c += 13;
		else if (((c >= 'N')&&(c <= 'Z'))||((c>='n')&&(c<='z')))
			c -= 13;
		// print out the encrypted character
		printf("%c",c);
	}while(1);
	return 0;
}
