#include "simshell.h"

/**
  * _getenv - Retrieves the value of an environment variable
  * @name: The name of the environment variable
  *
  * Return: The value of the environment variable, or NULL if not found
  */
char *_getenv(const char *name)
{
	int i = 0;
	char *env_var = NULL;

	while (environ[i])
	{
		if (_strncmp(name, environ[i], _strlen(name)) == 0)
		{
			env_var = _strdup(environ[i]);
			while (*env_var != '=')
				env_var++;

			++env_var;
			return (env_var);
		}
		i++;
	}

	return (NULL);
}
