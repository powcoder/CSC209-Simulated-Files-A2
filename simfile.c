https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "file_ops.h"
#include "transactions.h"

/* Sample executable that runs a transaction file over a simulated file system
 */

int main(int argc, char *argv[]) {

	if (argc < 2) {
	    fprintf(stderr, "Usage: %s transaction_file\n\n", argv[0]);
	}

	process_transactions(argv[1]);
	return 0;
}
