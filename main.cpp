#include <iostream>
#include "eBPF.h"

int main () {
   eBPF ebpf;
   ebpf.read_code();
   ebpf.print_grafo();
   ebpf.verify();
   return 0;
}
