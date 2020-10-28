#include <iostream>
#include "eBPF.h"

int main () {
   eBPF ebpf;
   ebpf.read_code();
   ebpf.find_loops();
   ebpf.find_unexecuted_nodes();
   return 0;
}
