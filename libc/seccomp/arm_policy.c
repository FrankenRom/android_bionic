// Autogenerated file - edit at your peril!!

#include <linux/filter.h>
#include <errno.h>

#include "seccomp_policy.h"
const struct sock_filter arm_filter[] = {
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 1, 0, 133),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 174, 67, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 77, 33, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 45, 17, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 26, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 11, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 6, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 3, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 2, 126, 125), //exit
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5, 125, 124), //read|write
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 7, 124, 123), //close
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 19, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 13, 122, 121), //execve|chdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 22, 121, 120), //lseek|getpid|mount
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 41, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 36, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 27, 118, 117), //ptrace
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 38, 117, 116), //sync|kill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 43, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 42, 115, 114), //dup
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 44, 114, 113), //times
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 60, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 54, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 51, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 46, 110, 109), //brk
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 53, 109, 108), //acct|umount2
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 57, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 55, 107, 106), //ioctl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 58, 106, 105), //setpgid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 66, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 64, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 62, 103, 102), //umask|chroot
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 65, 102, 101), //getppid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 74, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 68, 100, 99), //setsid|sigaction
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 76, 99, 98), //sethostname|setrlimit
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 124, 17, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 103, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 94, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 91, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 87, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 80, 93, 92), //getrusage|gettimeofday|settimeofday
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 89, 92, 91), //swapon|reboot
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 93, 91, 90), //munmap|truncate
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 96, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 95, 89, 88), //fchmod
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 98, 88, 87), //getpriority|setpriority
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 118, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 114, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 106, 85, 84), //syslog|setitimer|getitimer
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 117, 84, 83), //wait4|swapoff|sysinfo
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 121, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 119, 82, 81), //fsync
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 123, 81, 80), //setdomainname|uname
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 138, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 131, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 128, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 126, 77, 76), //adjtimex|mprotect
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 130, 76, 75), //init_module|delete_module
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 136, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 134, 74, 73), //quotactl|getpgid|fchdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 137, 73, 72), //personality
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 150, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 143, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 141, 70, 69), //setfsuid|setfsgid|_llseek
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 149, 69, 68), //flock|msync|readv|writev|getsid|fdatasync
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 172, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 164, 67, 66), //mlock|munlock|mlockall|munlockall|sched_setparam|sched_getparam|sched_setscheduler|sched_getscheduler|sched_yield|sched_get_priority_max|sched_get_priority_min|sched_rr_get_interval|nanosleep|mremap
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 173, 66, 65), //prctl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 290, 33, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 239, 17, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 213, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 197, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 191, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 183, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 182, 59, 58), //rt_sigaction|rt_sigprocmask|rt_sigpending|rt_sigtimedwait|rt_sigqueueinfo|rt_sigsuspend|pread64|pwrite64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 188, 58, 57), //getcwd|capget|capset|sigaltstack|sendfile
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 195, 57, 56), //ugetrlimit|mmap2|truncate64|ftruncate64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 199, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 198, 55, 54), //fstat64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 212, 54, 53), //getuid32|getgid32|geteuid32|getegid32|setreuid32|setregid32|getgroups32|setgroups32|fchown32|setresuid32|getresuid32|setresgid32|getresgid32
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 219, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 217, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 215, 51, 50), //setuid32|setgid32
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 218, 50, 49), //getdents64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 225, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 222, 48, 47), //mincore|madvise|fcntl64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 238, 47, 46), //readahead|setxattr|lsetxattr|fsetxattr|getxattr|lgetxattr|fgetxattr|listxattr|llistxattr|flistxattr|removexattr|lremovexattr|fremovexattr
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 256, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 248, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 241, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 240, 43, 42), //sendfile64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 243, 42, 41), //sched_setaffinity|sched_getaffinity
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 251, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 249, 40, 39), //exit_group
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 252, 39, 38), //epoll_ctl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 280, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 270, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 269, 36, 35), //set_tid_address|timer_create|timer_settime|timer_gettime|timer_getoverrun|timer_delete|clock_settime|clock_gettime|clock_getres|clock_nanosleep|statfs64|fstatfs64|tgkill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 271, 35, 34), //arm_fadvise64_64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 286, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 285, 33, 32), //waitid|socket|bind|connect|listen
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 289, 32, 31), //getsockname|getpeername|socketpair
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 350, 15, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 327, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 317, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 292, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 291, 27, 26), //sendto
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 298, 26, 25), //recvfrom|shutdown|setsockopt|getsockopt|sendmsg|recvmsg
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 322, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 319, 24, 23), //inotify_add_watch|inotify_rm_watch
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 326, 23, 22), //openat|mkdirat|mknodat|fchownat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 345, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 340, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 338, 20, 19), //fstatat64|unlinkat|renameat|linkat|symlinkat|readlinkat|fchmodat|faccessat|pselect6|ppoll|unshare
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 344, 19, 18), //splice|sync_file_range2|tee|vmsplice
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 348, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 347, 17, 16), //getcpu|epoll_pwait
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 349, 16, 15), //utimensat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 372, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 365, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 352, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 351, 12, 11), //timerfd_create
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 363, 11, 10), //fallocate|timerfd_settime|timerfd_gettime|signalfd4|eventfd2|epoll_create1|dup3|pipe2|inotify_init1|preadv|pwritev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 369, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 367, 9, 8), //recvmmsg|accept4
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 370, 8, 7), //prlimit64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983042, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 374, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 373, 5, 4), //clock_adjtime
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 378, 4, 3), //sendmmsg|setns|process_vm_readv|process_vm_writev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983045, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983043, 2, 1), //__ARM_NR_cacheflush
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 983046, 1, 0), //__ARM_NR_set_tls
BPF_STMT(BPF_RET|BPF_K, SECCOMP_RET_ALLOW),
};

const size_t arm_filter_size = sizeof(arm_filter) / sizeof(struct sock_filter);