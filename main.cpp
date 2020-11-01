#include "threadEbpfStarter.h"

int main(int argc, const char* argv[]) {
   if (argc < 3) return -1;

   ThreadEbpfStarter th_ebpf_starter(argc, argv);
   th_ebpf_starter.start();
   
   return 0;
}
