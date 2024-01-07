#include "pipex.h"
#include <unistd.h>

 //todo $> ./pipex infile "ls -l" "wc -l" outfile (filter arguments, see if only cmd or also parameters)

char *tester(char **p, char *cmd)
{
    int i = -1;
    int len = 0;
    while(p[++i] != NULL)
    {
        len = ft_strlen(p[i]);
        ft_memmove(p[i] + len, cmd, len + 1);

        if (access(p[i], X_OK) == 0) {
            return (p[i]);
        }
    }
    perror("no path");
    exit(0);
}


// 

int	main(int ac, char **av, char **env)
{
    int len = 0;
    int i = -1;
    char **paths;
    char **args;
    


	int infile = open("infile.txt", O_RDONLY, 0777);
	int outfile = open("outfile.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
    dup2(infile, STDIN_FILENO);
    dup2(outfile, STDOUT_FILENO);
    args = ft_split(av[1], ' ');
    while (env[++i] != NULL)
    {
        if (!ft_strncmp(env[i], "PATH=", 5))
            paths = ft_split(env[i], ':');
    }

    i = 0;
    while (paths[i] != NULL)
        printf("%s\n", paths[i++]);

    i = 0;
    while (paths[i] != NULL)
    {
        len = ft_strlen(paths[i]);
        ft_memmove(paths[i++] + len, "/", 2);
    }
    i = 0;
    while (paths[i] != NULL)
        printf("%s\n", paths[i++]);
    char *path = tester(paths, args[0]);

    execve(path, args, env);
    close(infile);
    close(outfile);
}


// int	main(int ac, char **av, char **env)
// {
//     char **res = ft_split(av[1], ' ');
//     int i = 0;
//     while(res[i] != NULL)
//         printf("%s\n", res[i++]);
//     return 0;
// }

// "ls" "ls " "ls -l"

// until /0 = break, ' ' 