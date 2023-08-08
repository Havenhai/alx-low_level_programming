#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void PRINT_MAGIC(unsigned char *e_ident);
void close_elf(int elf);
void CHECK_ELF(unsigned char *e_ident);
void PRINT_CLASS(unsigned char *e_ident);
void PRINT_DATA(unsigned char *e_ident);
void PRINT_ABI(unsigned char *e_ident);
void PRINT_OSABI(unsigned char *e_ident);
void PRINT_TYPE(unsigned int e_type, unsigned char *e_ident);
void PRINT_ENETRY(unsigned long int e_entry, unsigned char *e_ident);
void PRINT_VERSION(unsigned char *e_ident);

/**
 * CHECK_ELF -function takes pointer array of unsigned char byte as input.
 * The function returns no value.
 * @e_ident: POINTER to an ARRAY.
 * Description:function check if byte matches correspond ELF magic number.
 */
void CHECK_ELF(unsigned char *e_ident)
{
	int indexed;

	for (indexed = 0; indexed < 4; indexed++)
	{
		if (e_ident[indexed] != 127 &&
		    e_ident[indexed] != 'E' &&
		    e_ident[indexed] != 'L' &&
		    e_ident[indexed] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * PRINT_MAGIC - in C Prints the magic numbers of an ELF header.
 * The ELF magic numbers are a sequence of four bytes.
 * @e_ident: POINTER to array containing to ELF magic numbers.
 * iterates over the four bytes and prints byte in hexadecimal format
 * separated by spaces.
 * The last line of the function prints a newline character
 */
void PRINT_MAGIC(unsigned char *e_ident)
{
	int indexed;

	printf("  Magic:   ");

	for (indexed = 0; indexed < EI_NIDENT; indexed++)
	{
		printf("%02x", e_ident[indexed]);

		if (indexed == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * PRINT_CLASS -C FUN that Prints the class of an ELF header.
 * The ELF class is byte value that specifies size of ELF file.
 * @e_ident: POINTER to an ARRAY containing the ELF class.
 * funct uses SWITCH statement to print correspo text value for ELF class.
 */
void PRINT_CLASS(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * PRINT_DATA -IN C that Prints the data of an ELF header.
 * By printing the data, can verify that file is compatible
 * With the architecture you are running on
 * @e_ident: POINTER to ARRAY containing the ELF class.
 */
void PRINT_DATA(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * PRINT_VERSION - IN C that Prints the version of an ELF header.
 * ELF version is byte value that specifies version of the ELF format
 * use SWITCH statement to print correspond text value for ELF version.
 * @e_ident: POINTER to an ARRAY containing the ELF version.
 */
void PRINT_VERSION(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * PRINT_OSABI - IN C that Prints the OS/ABI of an ELF header.
 * The ELF OS/ABI is a byte value that specifies Operating system
 * And ABI that the ELF file is compatible with
 * @e_ident: POINTER to ARRAY containing the ELF version.
 */
void PRINT_OSABI(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * PRINT_ABI -IN C that Prints the ABI version of an ELF header.
 * The ELF ABI version is byte value that specifies version of the ABI
 * THAT the ELF file is compatible with.
 * The function simply prints the ABI VERSION number.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */
void PRINT_ABI(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * PRINT_TYPE -IN C that Prints the type of an ELF header.
 * @e_type: The ELF type.
 * The ELF TYPE is byte value that specifies TYPE of the ELF file
 * @e_ident: POINTER to ARRAY containing the ELF class.
 * uses SWITCH statement to print the correspond text value for ELF type.
 */
void PRINT_TYPE(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * PRINT_ENTRY - Prints the entry point of an ELF header.
 * @e_entry: ADDRESS of the ELF entry point.
 * ELF entry point is a 32-bit or 64-bit value that specifies the address
 * OF the first instruction to execute in the ELF file.
 * functi uses ELF CLASS to determine how to print entry point address.
 * @e_ident: POINTER to ARRAY containing the ELF class.
 */
void PRINT_ENTRY(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - IN C that Closes an ELF file.
 * @elf: FILE DESCRIPTION of the ELF file.
 * uses the CLOSE() system call to close the file.
 * If the file cannot be CLOSED, then the function prints
 * an ERROR message and exits with the status code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - main function allocates memory for an Elf64_Ehdr stru
 * @argc: The number of arguments supplied to the program.
 * @argv: ARRAY of POINTERS to the arguments.
 * If file cannot be opened, function prints ERROR message and exits.
 * Return: MAIN function then returns 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int ou, re;

	ou = open(argv[1], O_RDONLY);
	if (ou == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(ou);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	re = read(ou, header, sizeof(Elf64_Ehdr));
	if (re == -1)
	{
		free(header);
	close_elf(ou);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	
	CHECK_ELF(header->e_ident);
	printf("ELF Header:\n");
	PRINT_MAGIC(header->e_ident);
	PRINT_CLASS(header->e_ident);
	PRINT_DATA(header->e_ident);
	PRINT_VERSION(header->e_ident);
	PRINT_OSABI(header->e_ident);
	PRINT_ABI(header->e_ident);
	PRINT_TYPE(header->e_type, header->e_ident);
	PRINT_ENTRY(header->e_entry, header->e_ident);

	free(header);
	close_elf(ou);
	return (0);
}
