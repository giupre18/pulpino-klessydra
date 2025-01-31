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


    // Assembly per scrivere valori casuali nei registri CSR da 0x3B0 a 0x3EF
    __asm__ (
   
   


    "li  t1, 0x0F70447c\n"
    "csrw 0x3A1, t1\n"
    "li  t1, 0xfaAAAAAA\n"
    "csrw 0x3b7, t1\n"
    "li  t1, 0x8070807c\n"
    "csrw 0x3A1, t1\n"
    "li  t1, 0x0F825555\n"
    "csrw 0x3A1, t1\n"
    "li  t1, 0xAAAAAAAA\n"
    "csrw 0x3b7, t1\n"

    );

    return 0;
}

