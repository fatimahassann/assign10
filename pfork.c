#include<pfork.h>

long pfork()
{
	return syscall(440);
}

int set_pfork_status(int pfork_status)
{

	return syscall(441);
}

int get_pfork_status()
{
	return syscall(442);
}

pid_t get_pfork_sibling_status()
{
	return syscall(443);
}

pid_t pfork_who()
{
	return syscall(444);
}
