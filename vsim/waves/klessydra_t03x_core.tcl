

add wave -group "Core" -radix hexadecimal sim:/tb/top_i/core_region_i/CORE/RISCV_CORE/*
add wave -group "Core" -radix hexadecimal sim:/tb/top_i/core_region_i/CORE/RISCV_CORE/CSR/*
add wave -group "Core" -radix hexadecimal sim:/tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/*
add wave -group "Core" -radix hexadecimal sim:/tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/*
add wave -group "Core" -radix hexadecimal sim:/tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/*
#add wave -group "Core" -radix hexadecimal sim:/tb/top_i/core_region_i/CORE/RISCV_CORE/DBG/*


#add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/instr_rvalid_effettivo
#add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/instr_rvalid_pmp
#add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/data_rvalid_o
add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/instr_addr_o
#add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/pmpcfg_in
#add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/pmpaddr_in
add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/data_addr_o
add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/data_addr_pmp
#add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/instr_gnt_i
#add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/data_rdata_i
add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/data_we_pmp
add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/data_we_o
add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/instr_gnt_pmp
add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/instr_gnt_effettivo
add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/addr_start_debug
add wave -group PMP -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/PMP/addr_end_debug




#add wave -group CSR -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/CSR/instr_rvalid_i
add wave -group CSR -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/CSR/MTVEC
add wave -group CSR -radix decimal     tb/top_i/core_region_i/CORE/RISCV_CORE/CSR/MCYCLE
add wave -group CSR -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/CSR/PCER
add wave -group CSR -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/CSR/MSTATUS
add wave -group CSR -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/CSR/MESTATUS
add wave -group CSR -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/CSR/MCAUSE
add wave -group CSR -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/CSR/MEPC
add wave -group CSR -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/CSR/MIP
add wave -group CSR -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/CSR/MIRQ
add wave -group CSR -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/CSR/MHARTID
add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/CSR/pmpaddr
add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/CSR/pmpcfg

add wave -group Pipe -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/set_except_condition
add wave -group Pipe -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/ls_except_data

add wave -group Prg_Ctr -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/taken_branch
add wave -group Prg_Ctr -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/ls_except_condition
add wave -group Prg_Ctr -radix hexadecimal     tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/set_branch_condition

add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/instr_rvalid_IE
add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/instr_req_o
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/pmpcfg
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/irq_pending
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/set_branch_condition
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/set_except_condition
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/set_mret_condition
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/set_wfi_condition
add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/clk_i
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/rst_ni
add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/pc
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/instr_addr_o
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/instr_gnt_i
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/instr_rvalid_i
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/CSR/harc_to_csr
add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/regfile
add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/harc_IF
add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/harc_ID
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/harc_IE
add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/harc_WB
add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/harc_EXEC
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/WB_RD_EN
add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/pc_IE
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/RS1_Addr_IE
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/RS2_Addr_IE
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/RD_Addr_IE
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/instr_word_IE
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/RS1_Data_IE
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/RS2_Data_IE
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/RD_Data_IE
#add wave -group Debug -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/WB_RD

#add wave -group Imm -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/S_Imm_IE
#add wave -group Imm -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/I_Imm_IE
#add wave -group Imm -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/SB_Imm_IE
#add wave -group Imm -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/CSR_ADDR_IE


#add wave -group PC -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/clk_i
#add wave -group PC -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/taken_branch_pc_lat
add wave -group PC -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/PC_offset
add wave -group PC -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/relative_to_PC
add wave -group PC -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/incremented_pc
#add wave -group PC -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/mepc_incremented_pc
#add wave -group PC -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/mepc_interrupt_pc
#add wave -group PC -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/boot_pc
add wave -group PC -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/pc
add wave -group PC -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/served_except_condition
add wave -group PC -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/served_mret_condition
add wave -group PC -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/served_irq
add wave -group PC -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Prg_Ctr/pc_IF
add wave -group PC -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/pc_ID
add wave -group PC -radix hexadecimal tb/top_i/core_region_i/CORE/RISCV_CORE/Pipe/pc_IE


power add -in -inout -internal -out tb/top_i/core_region_i/CORE/RISCV_CORE/*

#run 100000 ns

power report -all -bsaif test.saif

#quit -sim
#quit
