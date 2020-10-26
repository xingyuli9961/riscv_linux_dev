# riscv_linux_dev

This is the list of files that I modified:

// The changes as listed in the KUTRACE repo for x86
1. arch/x86/entry/common.c
2. arch/x86/Kconfig
3. arch/x86/kernel/acpi/cstate.c
4. arch/x86/kernel/apic/apic.c
5. arch/x86/kernel/irq.c
6. arch/x86/kernel/irq_work.c
7. arch/x86/kernel/smp.c
8. arch/x86/mm/fault.c
9. arch/x86/mm/tlb.c
10. drivers/acpi/acpi_pad.c
11. drivers/acpi/processor_idle.c
12. drivers/idle/intel_idle.c
13. include/linux/kutrace.h
14. kernel/kutrace/kutrace.c
15. kernel/kutrace/Makefile
16. kernel/Makefile
17. kernel/sched/core.c
18. kernel/softirq.c

// The changes I made for the compatability of riscv kernel
19. arch/riscv/Kconfig
// Modified registers and macros that are specific for riscv
20. arch/riscv/kernel/irq.c
21. arch/riscv/kernel/smp.c
22. arch/riscv/mm/fault.c
// Still in progress: fix the entry.S file to trace all the syscalls and add kutrace_control syscall
23. arch/riscv/kernel/entry.S
