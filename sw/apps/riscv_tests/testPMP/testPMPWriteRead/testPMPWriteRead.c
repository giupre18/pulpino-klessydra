// Copyright 2017 ETH Zurich and University of Bologna.
// Copyright and related rights are licensed under the Solderpad Hardware
// License, Version 0.51 (the “License”); you may not use this file except in
// compliance with the License.  You may obtain a copy of the License at
// http://solderpad.org/licenses/SHL-0.51. Unless required by applicable law
// or agreed to in writing, software, hardware and materials distributed under
// this License is distributed on an “AS IS” BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

int main() {



    __asm__ (
   
   
    "addi sp, sp, -12\n"
    "sw t0, 0(sp) \n"         
    "sw t1, 4(sp)  \n"        
    "sw t2, 8(sp)   \n"      
    
    "li t1, 0x65  \n"         
    "li t0, 0x00101100  \n"   
    "sw t1, 0(t0)\n"         
    "lw t2, 0(t0) \n"        
    


    "lw t2, 8(sp) \n"         
    "lw t1, 4(sp)   \n"       
    "lw t0, 0(sp)  \n"        
    "addi sp, sp, 12  \n"    


                 
      
    );

    return 0;
}

