#include "simshell.h"

/**
  * signal_handler - Handles the signals
  * @sig_id: The identifier of the signal to handle
  *
  * Return: Nothing to return
  */
void signal_handler(int sig_id)
{
	if (sig_id == SIGINT)
		write(STDOUT_FILENO, "\n($) ", 5);
}
