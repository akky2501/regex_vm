#ifndef REGEX_VM
#define REGEX_VM

#include <stdbool.h>
#include <stddef.h>

// ワークスペースを確保するかどうか
#define USE_BUF_FLAG 1

typedef char char_type; // 文字を表す型

typedef unsigned short vm_addr_type; // アドレスの型
typedef unsigned char  vm_code_type; // バイトコードの型

typedef struct {
	size_t code_size,opcode_size;
	vm_code_type* code;
	vm_addr_type* buf;
} RegexVMCode;



RegexVMCode compileRegex(char_type* str);

void freeRegex(RegexVMCode vc);

bool isMatch(RegexVMCode vc,char* str);

char* topMatch(RegexVMCode vc,char* str);



#endif // REGEX_VM
