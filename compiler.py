
# Define the instruction set
INSTRUCTIONS = {
    'NOP': '0',
    'LDA': '1',
    'ADD': '2',
    'SUB': '3',
    'STA': '4',
    'LDI': '5',
    'JMP': '6',
    'JC' : '7',
    'JZ' : '8',
    'OUT': 'E',
    'HLT': 'F'
}

def assemble( instruction ):
    # Convert assembly instruction to machine code
    opcode = INSTRUCTIONS.get( instruction.split()[0], None ) # if instruction not found in dictionary None will be returned
    if opcode is None:
        raise ValueError(f"Unknown instruction: {instruction}")
    
    if len( instruction.split() ) == 1:
        return opcode + '0'
    
    operand = hex(int(instruction.split()[1]))[2:]

    return opcode + operand

def assemble_program( input_filename ):
    # Assemble the entire program
    with open(input_filename, 'r') as infile:
        assembly_code = infile.readlines()
    
    machine_code = []
    for line in assembly_code:
        machine_code.append(assemble(line))

    for code in machine_code:
        print(code)

if __name__ == "__main__":
    # Example input and output file names
    input_file = 'fibo.asm'

    # Assemble the program and write the output file
    assemble_program( input_file )