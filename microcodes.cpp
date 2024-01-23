#include <iostream>
#include <bitset>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const int length = 16;
    
    bitset<length> HLT(pow(2, 15));
    bitset<length> MI(pow(2, 14) );
    bitset<length> RI(pow(2, 13));
    bitset<length> RO(pow(2, 12));
    bitset<length> IO(pow(2, 11));
    bitset<length> II(pow(2, 10));
    bitset<length> AI(pow(2, 9));
    bitset<length> AO(pow(2, 8));
    bitset<length> EO(pow(2, 7));
    bitset<length> SU(pow(2, 6));
    bitset<length> BI(pow(2, 5));
    bitset<length> OI(pow(2, 4));
    bitset<length> CE(pow(2, 3));
    bitset<length> CO(pow(2, 2));
    bitset<length> J(pow(2, 1));
    bitset<length> FI(pow(2,0))
    
    bitset<length> data[] = {
        // FIRST Z0-C0
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 0000 - NOP
        MI|CO, RO|II|CE, MI|IO, RO|AI, 0, 0, 0, 0,          // 0001 - LDA
        MI|CO, RO|II|CE, IO|MI, RO|BI, EO|AI, 0, 0, 0,      // 0010 - ADD
        MI|CO, RO|II|CE, IO|MI, RO|BI, EO|AI|SU, 0, 0, 0,   // 0011 - SUB
        MI|CO, RO|II|CE, IO|MI, AO|RI, 0, 0, 0, 0,          // 0100 - STA
        MI|CO, RO|II|CE, IO|AI, 0, 0, 0, 0, 0,              // 0101 - LDI
        MI|CO, RO|II|CE, IO|J, 0, 0, 0, 0, 0,               // 0110 - JMP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 0111 - JC
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1000 - JZ
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1001 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1010 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1011 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1100 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1101 - NOP
        MI|CO, RO|II|CE, AO|OI, 0, 0, 0, 0, 0,              // 1110 - OUT
        MI|CO, RO|II|CE, HLT, 0, 0, 0, 0, 0,                // 1111 - HLT
        // SECOND Z0-C1
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 0000 - NOP
        MI|CO, RO|II|CE, MI|IO, RO|AI, 0, 0, 0, 0,          // 0001 - LDA
        MI|CO, RO|II|CE, IO|MI, RO|BI, EO|AI, 0, 0, 0,      // 0010 - ADD
        MI|CO, RO|II|CE, IO|MI, RO|BI, EO|AI|SU, 0, 0, 0,   // 0011 - SUB
        MI|CO, RO|II|CE, IO|MI, AO|RI, 0, 0, 0, 0,          // 0100 - STA
        MI|CO, RO|II|CE, IO|AI, 0, 0, 0, 0, 0,              // 0101 - LDI
        MI|CO, RO|II|CE, IO|J, 0, 0, 0, 0, 0,               // 0110 - JMP
        MI|CO, RO|II|CE, J|IO, 0, 0, 0, 0, 0,                  // 0111 - JC
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1000 - JZ
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1001 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1010 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1011 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1100 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1101 - NOP
        MI|CO, RO|II|CE, AO|OI, 0, 0, 0, 0, 0,              // 1110 - OUT
        MI|CO, RO|II|CE, HLT, 0, 0, 0, 0, 0,                // 1111 - HLT
        // THIRD Z1-C0
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 0000 - NOP
        MI|CO, RO|II|CE, MI|IO, RO|AI, 0, 0, 0, 0,          // 0001 - LDA
        MI|CO, RO|II|CE, IO|MI, RO|BI, EO|AI, 0, 0, 0,      // 0010 - ADD
        MI|CO, RO|II|CE, IO|MI, RO|BI, EO|AI|SU, 0, 0, 0,   // 0011 - SUB
        MI|CO, RO|II|CE, IO|MI, AO|RI, 0, 0, 0, 0,          // 0100 - STA
        MI|CO, RO|II|CE, IO|AI, 0, 0, 0, 0, 0,              // 0101 - LDI
        MI|CO, RO|II|CE, IO|J, 0, 0, 0, 0, 0,               // 0110 - JMP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 0111 - JC
        MI|CO, RO|II|CE, J|IO, 0, 0, 0, 0, 0,               // 1000 - JZ
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1001 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1010 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1011 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1100 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1101 - NOP
        MI|CO, RO|II|CE, AO|OI, 0, 0, 0, 0, 0,              // 1110 - OUT
        MI|CO, RO|II|CE, HLT, 0, 0, 0, 0, 0,                // 1111 - HLT
        // FOURTH Z1-C1
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 0000 - NOP
        MI|CO, RO|II|CE, MI|IO, RO|AI, 0, 0, 0, 0,          // 0001 - LDA
        MI|CO, RO|II|CE, IO|MI, RO|BI, EO|AI, 0, 0, 0,      // 0010 - ADD
        MI|CO, RO|II|CE, IO|MI, RO|BI, EO|AI|SU, 0, 0, 0,   // 0011 - SUB
        MI|CO, RO|II|CE, IO|MI, AO|RI, 0, 0, 0, 0,          // 0100 - STA
        MI|CO, RO|II|CE, IO|AI, 0, 0, 0, 0, 0,              // 0101 - LDI
        MI|CO, RO|II|CE, IO|J, 0, 0, 0, 0, 0,               // 0110 - JMP
        MI|CO, RO|II|CE, J|IO, 0, 0, 0, 0, 0,               // 0111 - JC
        MI|CO, RO|II|CE, J|IO, 0, 0, 0, 0, 0,               // 1000 - JZ
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1001 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1010 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1011 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1100 - NOP
        MI|CO, RO|II|CE, 0, 0, 0, 0, 0, 0,                  // 1101 - NOP
        MI|CO, RO|II|CE, AO|OI, 0, 0, 0, 0, 0,              // 1110 - OUT
        MI|CO, RO|II|CE, HLT, 0, 0, 0, 0, 0,                // 1111 - HLT
    };
    
    for ( int i = 0; i < 128; i++ ) {
        cout << hex << setw(4) << setfill('0') << data[i].to_ulong() << "  ";
        if ( (i+1) % 8 == 0 )
            cout << endl;
    }
    
    
    
    return 0;
}