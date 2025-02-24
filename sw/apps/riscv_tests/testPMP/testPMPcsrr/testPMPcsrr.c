#include <stdio.h>
#include <stdint.h>

// Funzione per leggere un CSR PMP Configuration (PMPCFG)
static inline uint32_t read_pmpcfg(uint32_t index) {
    uint32_t value = 0;
    switch (index) {
        case 0: asm volatile ("csrr %0, 0x3A0" : "=r"(value)); break;
        case 1: asm volatile ("csrr %0, 0x3A1" : "=r"(value)); break;
        case 2: asm volatile ("csrr %0, 0x3A2" : "=r"(value)); break;
        case 3: asm volatile ("csrr %0, 0x3A3" : "=r"(value)); break;
        case 4: asm volatile ("csrr %0, 0x3A4" : "=r"(value)); break;
        case 5: asm volatile ("csrr %0, 0x3A5" : "=r"(value)); break;
        case 6: asm volatile ("csrr %0, 0x3A6" : "=r"(value)); break;
        case 7: asm volatile ("csrr %0, 0x3A7" : "=r"(value)); break;
        case 8: asm volatile ("csrr %0, 0x3A8" : "=r"(value)); break;
        case 9: asm volatile ("csrr %0, 0x3A9" : "=r"(value)); break;
        case 10: asm volatile ("csrr %0, 0x3AA" : "=r"(value)); break;
        case 11: asm volatile ("csrr %0, 0x3AB" : "=r"(value)); break;
        case 12: asm volatile ("csrr %0, 0x3AC" : "=r"(value)); break;
        case 13: asm volatile ("csrr %0, 0x3AD" : "=r"(value)); break;
        case 14: asm volatile ("csrr %0, 0x3AE" : "=r"(value)); break;
        case 15: asm volatile ("csrr %0, 0x3AF" : "=r"(value)); break;
    }
    return value;
}

// Funzione per leggere un CSR PMP Address (PMPADDR)
static inline uint32_t read_pmpaddr(uint32_t index) {
    uint32_t value = 0;
    switch (index) {
        case 0: asm volatile ("csrr %0, 0x3B0" : "=r"(value)); break;
        case 1: asm volatile ("csrr %0, 0x3B1" : "=r"(value)); break;
        case 2: asm volatile ("csrr %0, 0x3B2" : "=r"(value)); break;
        case 3: asm volatile ("csrr %0, 0x3B3" : "=r"(value)); break;
        case 4: asm volatile ("csrr %0, 0x3B4" : "=r"(value)); break;
        case 5: asm volatile ("csrr %0, 0x3B5" : "=r"(value)); break;
        case 6: asm volatile ("csrr %0, 0x3B6" : "=r"(value)); break;
        case 7: asm volatile ("csrr %0, 0x3B7" : "=r"(value)); break;
        case 8: asm volatile ("csrr %0, 0x3B8" : "=r"(value)); break;
        case 9: asm volatile ("csrr %0, 0x3B9" : "=r"(value)); break;
        case 10: asm volatile ("csrr %0, 0x3BA" : "=r"(value)); break;
        case 11: asm volatile ("csrr %0, 0x3BB" : "=r"(value)); break;
        case 12: asm volatile ("csrr %0, 0x3BC" : "=r"(value)); break;
        case 13: asm volatile ("csrr %0, 0x3BD" : "=r"(value)); break;
        case 14: asm volatile ("csrr %0, 0x3BE" : "=r"(value)); break;
        case 15: asm volatile ("csrr %0, 0x3BF" : "=r"(value)); break;
        case 16: asm volatile ("csrr %0, 0x3C0" : "=r"(value)); break;
        case 17: asm volatile ("csrr %0, 0x3C1" : "=r"(value)); break;
        case 18: asm volatile ("csrr %0, 0x3C2" : "=r"(value)); break;
        case 19: asm volatile ("csrr %0, 0x3C3" : "=r"(value)); break;
        case 20: asm volatile ("csrr %0, 0x3C4" : "=r"(value)); break;
        case 21: asm volatile ("csrr %0, 0x3C5" : "=r"(value)); break;
        case 22: asm volatile ("csrr %0, 0x3C6" : "=r"(value)); break;
        case 23: asm volatile ("csrr %0, 0x3C7" : "=r"(value)); break;
        case 24: asm volatile ("csrr %0, 0x3C8" : "=r"(value)); break;
        case 25: asm volatile ("csrr %0, 0x3C9" : "=r"(value)); break;
        case 26: asm volatile ("csrr %0, 0x3CA" : "=r"(value)); break;
        case 27: asm volatile ("csrr %0, 0x3CB" : "=r"(value)); break;
        case 28: asm volatile ("csrr %0, 0x3CC" : "=r"(value)); break;
        case 29: asm volatile ("csrr %0, 0x3CD" : "=r"(value)); break;
        case 30: asm volatile ("csrr %0, 0x3CE" : "=r"(value)); break;
        case 31: asm volatile ("csrr %0, 0x3CF" : "=r"(value)); break;
        case 32: asm volatile ("csrr %0, 0x3D0" : "=r"(value)); break;
        case 33: asm volatile ("csrr %0, 0x3D1" : "=r"(value)); break;
        case 34: asm volatile ("csrr %0, 0x3D2" : "=r"(value)); break;
        case 35: asm volatile ("csrr %0, 0x3D3" : "=r"(value)); break;
        case 36: asm volatile ("csrr %0, 0x3D4" : "=r"(value)); break;
        case 37: asm volatile ("csrr %0, 0x3D5" : "=r"(value)); break;
        case 38: asm volatile ("csrr %0, 0x3D6" : "=r"(value)); break;
        case 39: asm volatile ("csrr %0, 0x3D7" : "=r"(value)); break;
        case 40: asm volatile ("csrr %0, 0x3D8" : "=r"(value)); break;
        case 41: asm volatile ("csrr %0, 0x3D9" : "=r"(value)); break;
        case 42: asm volatile ("csrr %0, 0x3DA" : "=r"(value)); break;
        case 43: asm volatile ("csrr %0, 0x3DB" : "=r"(value)); break;
        case 44: asm volatile ("csrr %0, 0x3DC" : "=r"(value)); break;
        case 45: asm volatile ("csrr %0, 0x3DD" : "=r"(value)); break;
        case 46: asm volatile ("csrr %0, 0x3DE" : "=r"(value)); break;
        case 47: asm volatile ("csrr %0, 0x3DF" : "=r"(value)); break;
        case 48: asm volatile ("csrr %0, 0x3E0" : "=r"(value)); break;
        case 49: asm volatile ("csrr %0, 0x3E1" : "=r"(value)); break;
        case 50: asm volatile ("csrr %0, 0x3E2" : "=r"(value)); break;
        case 51: asm volatile ("csrr %0, 0x3E3" : "=r"(value)); break;
        case 52: asm volatile ("csrr %0, 0x3E4" : "=r"(value)); break;
        case 53: asm volatile ("csrr %0, 0x3E5" : "=r"(value)); break;
        case 54: asm volatile ("csrr %0, 0x3E6" : "=r"(value)); break;
        case 55: asm volatile ("csrr %0, 0x3E7" : "=r"(value)); break;
        case 56: asm volatile ("csrr %0, 0x3E8" : "=r"(value)); break;
        case 57: asm volatile ("csrr %0, 0x3E9" : "=r"(value)); break;
        case 58: asm volatile ("csrr %0, 0x3EA" : "=r"(value)); break;
        case 59: asm volatile ("csrr %0, 0x3EB" : "=r"(value)); break;
        case 60: asm volatile ("csrr %0, 0x3EC" : "=r"(value)); break;
        case 61: asm volatile ("csrr %0, 0x3ED" : "=r"(value)); break;
        case 62: asm volatile ("csrr %0, 0x3EE" : "=r"(value)); break;
        case 63: asm volatile ("csrr %0, 0x3EF" : "=r"(value)); break;
    }
    return value;
}

int main() {
    printf("=== Lettura dei registri PMP Configuration (PMPCFG) ===\n");
    for (uint32_t i = 0; i < 16; i++) {
        uint32_t value = read_pmpcfg(i);
        printf("PMPCFG[%d] = 0x%08X\n", i, value);
    }

    printf("\n=== Lettura dei registri PMP Address (PMPADDR) ===\n");
    for (uint32_t i = 0; i < 64; i++) {  // PMPADDR arriva fino a 64 registri
        uint32_t value = read_pmpaddr(i);
        printf("PMPADDR[%d] = 0x%08X\n", i, value);
    }

    return 0;
}
