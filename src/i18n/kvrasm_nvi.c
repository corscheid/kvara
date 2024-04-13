// Default kvrasm assembler English strings.
#define BRK "FTG" // ftang (stop), stops evaluation of the current vector
#define LIT "LFK" // lefkoytongay (actual), puts an element in the stack
#define LIT2 "LFK2"
#define INC "SG1" // sung (add) 1, increment
#define POP "ATF" // 'aku ta fäpa (remove from top), pops an element from the stack
#define NIP "ATM" // 'aku ta muvea klltseng (remove from second position), removes second element from the stack
#define SWP "YOA" // yoa (in exchange for), swap the two top elements
#define ROT "MÌN" // mìn (turn, rotate), rotate top 3 elements on the stack
#define DUP "NFN" // ngop fäpat nìmun (create top again), duplicate top element in the stack
#define OVR "MIF" // muve io fäpa (second over top) over, copy second element to the top of the stack
#define EQU "NLU" // nìno lu (thoroughly is), equal
#define NEQ "KLU" // ke lu (not is), not equal
#define GTH "ALT" // apxa lu to (large is than), greater than
#define LTH "HLT" // hì'i lu to (small is than), less than
#define JMP "SPÄ" // spä (jump), jump, to label
#define JCN "STX" // spä txo (jump if), jump conditional
#define JSR "SNT" // spä nopx tätxaw (jump stow return) jump stash return, subroutine call
#define STH "NPX" // nopx (stow, put away), stash, moves top element from working stack and puts it in the return stack
#define LDZ "KNK" // kanom ke'ut (get nothing), load zero (from zero-page)
#define STZ "SWK" // sweyn ke'ut (store nothing), store zero
#define LDR "LDR" // load relative
#define STR "STR" // store relative
#define LDA "LDA" // load absolute
#define STA "STA" // store absolute
#define DEI "DEI" // device input
#define DEO "DEO" // device output
#define ADD "ADD" // addition
#define SUB "SUB" // substraction
#define MUL "MUL" // multiplication
#define DIV "DIV" // division
#define AND "AND" // bitwise AND
#define ORA "ORA" // bitwise OR
#define EOR "EOR" // bitwise exclusive OR (XOR)
#define SFT "SFT" // bitwise shift
#define ERROR_ASM "%s: %s in @%s, %s:%d.\n"
#define RETURN_MODE 'r' // return, acts in the return stack instead of the working stack
#define KEEP_MODE 'k'   // keep, copies the elements in the stack and operates on the copies, this consumes the copies, not the original elements
#define COMMENT_INCOMPLETE "Comment incomplete"
#define TOKEN_TOO_LONG "Token too long"
#define MACROS_LIMIT_EXCEEDED "Macros limit exceeded"
#define MACRO_IS_INVALID "Macro is invalid"
#define MACRO_IS_DUPLICATE "Macro is duplicate"
#define MACRO_NESTED "Macro nested"
#define LABELS_LIMIT_EXCEEDED "Labels limit exceeded"
#define LABEL_INVALID "Label invalid"
#define LABEL_DUPLICATE "Label duplicate"
#define REFERENCES_LIMIT_EXCEEDED "References limit exceeded"
#define PADDING_INVALID "Padding invalid"
#define WRITING_ZERO_PAGE "Writing zero-page"
#define WRITING_OUTSIDE_MEMORY "Writing outside memory"
#define WRITING_REWIND "Writing rewind"
#define HEXADECIMAL_INVALID "Hexadecimal invalid"
#define STRING_INVALID "String invalid"
#define SOURCE_MISSING "Source missing"
#define DEPRECATED_RUNE_USE "Deprecated rune %s, use =%s\n"
#define INCLUDE_MISSING "Include missing"
#define OUTPUT_EMPTY "Output empty"
#define LABEL_UNKNOWN "Label unknown"
#define RELATIVE_REFERENCE_TOO_FAR "Relative reference too far"
#define OUTPUT_FILE_INVALID "Output file invalid"
#define UNUSED_LABEL "-- Unused label: %s\n"
#define ASSEMBLED_IN_BYTES_USED_LABELS_MACROS "Assembled %s in %d bytes(%.2f%% used), %d labels, %d macros.\n"
#define SYMBOLS_FILE_INVALID "Symbols file invalid"
#define ON_RESET "on-reset"
#define KVRASM_KVARA_ASSEMBLER_DATE "kvrasm - Kvara Assembler, 12 Apr 2024.\n"
#define USAGE "usage"
#define EXAMPLE "kvrasm [-v] input.kvr output.rom"