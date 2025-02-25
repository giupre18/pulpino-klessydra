#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>  // Per PRIX32
#define READ_CSR(reg) ({ uint32_t value; asm volatile ("csrr %0, " #reg : "=r"(value)); value; })

#define PMP_REGIONS 8

// Definizione del tipo di indirizzamento
typedef enum { OFF, TOR, NA4, NAPOT } pmp_match_type;


// Funzione per leggere un registro PMP di configurazione (pmpcfgX)
uint32_t read_pmpcfg(int index) {
    uint32_t value;
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
        default: value = 0; break;
    }
    return value;
}


// Funzione per leggere un registro PMP address (pmpaddrX)
uint32_t read_pmpaddr(int index) {
    uint32_t value;
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
        default: value = 0; break;
    }
    return value;
}



// Funzione per determinare il tipo di matching
pmp_match_type get_match_type(uint8_t pmpcfg_in_field) {
    if ((pmpcfg_in_field & 0x18) == 0x18) { // pmpcfg_in_field(4) == 1 && pmpcfg_in_field(3) == 1
        return NAPOT;
    } else if ((pmpcfg_in_field & 0x10) == 0x10) { // pmpcfg_in_field(4) == 1 && pmpcfg_in_field(3) == 0
        return NA4;
    } else if ((pmpcfg_in_field & 0x08) == 0x08) { // pmpcfg_in_field(4) == 0 && pmpcfg_in_field(3) == 1
        return TOR;
    } else {
        return OFF;
    }
}

// Funzione per estrarre un campo pmpcfg da un array di registri
uint8_t extract_pmpcfg_in_field(uint32_t pmpcfg_in[], int segment_index) {
    int reg_index = segment_index / 4;
    int field_index = segment_index % 4;
    uint32_t pmpcfg_in_reg = pmpcfg_in[reg_index];

    switch (field_index) {
        case 0: return (uint8_t)(pmpcfg_in_reg & 0xFF);
        case 1: return (uint8_t)((pmpcfg_in_reg >> 8) & 0xFF);
        case 2: return (uint8_t)((pmpcfg_in_reg >> 16) & 0xFF);
        case 3: return (uint8_t)((pmpcfg_in_reg >> 24) & 0xFF);
        default: return 0; // Caso di errore, valore di default
    }
}


void process_pmp() {
    for (int i = 0; i < PMP_REGIONS; i++) {
        uint32_t pmpcfg_in_reg = read_pmpcfg(i / 4);
        uint8_t pmpcfg_in_field = (pmpcfg_in_reg >> (8 * (i % 4))) & 0xFF;
        pmp_match_type match_type = get_match_type(pmpcfg_in_field);

        uint32_t addr_start = 0, addr_end = 0;
        uint32_t pmpaddr = read_pmpaddr(i);

        if (match_type == TOR) {
            addr_start = (i == 0) ? 0 : (read_pmpaddr(i - 1) << 2);
            addr_end = pmpaddr << 2;
            printf("PMP %d: TOR, Start = 0x%08X, End = 0x%08X\n", i, addr_start, addr_end);
        } else if (match_type == NAPOT) {
            uint32_t napot_mask = pmpaddr ^ (pmpaddr + 1);
            uint32_t diff_napot_mask = (napot_mask + 1) << 2;
            uint32_t nand_result = pmpaddr & napot_mask;
            addr_start = (pmpaddr ^ nand_result) << 2;
            addr_end = addr_start + diff_napot_mask;
            printf("PMP %d: NAPOT, Start = 0x%08X, End = 0x%08X\n", i, addr_start, addr_end);
        } else if (match_type == NA4) {
            addr_start = pmpaddr << 2;
            addr_end = addr_start + 4;
            printf("PMP %d: NA4, Start = 0x%08X, End = 0x%08X\n", i, addr_start, addr_end);
        }
    }
}


int main() {
    printf("Reading PMP Configuration from CSR...\n");
    process_pmp();
    return 0;
}
