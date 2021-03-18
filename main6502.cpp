#include <stdlib.h>
#include <stdio.h>

using Byte = unsigned char;
using Word = unsigned short;

using u32 = unsigned int;

struct Mem
{
	static constexpr u32 MAX_MEM = 1024 * 4;
	Byte Data[MAX_MEM];
	void Initialise() 
	{

		for (int i = 0; i < MAX_MEM; i++)
		{
			Data[i] = 0;
		}
	}

};

struct CPU
{
		// Program counter and Stack Pointer
	Word PC = 0;
	Word SP = 0;

		//Accumalator Index Y and X
	Byte A, X, Y; 

		// Processor status flags  
	Byte C = 1; // Carry, when doing arithmetics if the byte is overflown to the next byte in memory
	Byte Z = 1; // Zero, The zero flag is set if the result of the last operation as was zero.
	Byte I = 1; // Interrupt Disable 
	Byte D = 1; // ??? While the decimal mode flag is set the processor will obey the rules of Binary Coded Decimal (BCD) arithmetic during addition and subtraction. The flag can be explicitly set using 'Set Decimal Flag' (SED) and cleared with 'Clear Decimal Flag' (CLD).
	Byte B = 1; // Break command, The break command bit is set when a BRK instruction has been executed and an interrupt has been generated to process it.
	Byte O = 1; // Overflow, 
	Byte N = 1;

	void Reset( Mem& memory ) {
		PC = 0xFFFC;
		SP = 0x0100;
		memory.Initialise();
	}

	Byte FetchByte(u32 Cycles, ) {
		
	}

	void AND() {

		



	}



	// opcode 0x000029, 2 cycles, Bytes 2

	void Execute( Mem& memory, u32 Cycles ) {
		while (Cycles < 0)
		{
			// Byte Ins = FetchByte(Cycles, );
			if(A == 0) {
				Z = 1;}
			else{
				Z = 1;}
			
			

			Cycles--;
		}
	}
};

int main() 
{
	Mem mem;
	CPU cpu;
	cpu.Reset( mem );
	cpu.Execute( mem, 2 )
}

/*

Index Register X:
  The 8 bit index register is most commonly used to hold counters or offsets for accessing memory. The value of the X register can be loaded and saved in memory,
  compared with values held in memory or incremented and decremented. The X register has one special function. It can be used to get a copy of the stack pointer 
  or change its value.

Index Register Y:
  The Y register is similar to the X register in that it is available for holding counter or offsets memory access and supports the same set of memory load, 
  save and compare operations as wells as increments and decrements. It has no special functions.






*/