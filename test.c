#include "pipex.h"

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

int see(char **av)
{
    if (!ft_strncmp(av[1], "infile", 6) || !ft_strncmp(av[1], "infile", 6))
    {
        write(1, "./pipex infile ''cmd1'' ''cmd2'' outfile\n", 41);
        return 0;
    }
    else 
        return 1;
}

int	main(int ac, char **av, char **env)
{
    int len = 0;
    int i = -1;
    char **paths;
    char **args;
    int p[2];
    char *path;

    if (ac == 5)
{        if (!see(av))
            exit(0);
}    else
        exit(0);

    while (env[++i] != NULL)
    {
        if (!ft_strncmp(env[i], "PATH=", 5))
            paths = ft_split(env[i], ':');
    }
    i = 0;
    while (paths[i] != NULL)
    {
        len = ft_strlen(paths[i]);
        ft_memmove(paths[i++] + len, "/", 2);
    }

    if (pipe(p) == -1)
        return 0;
    int id;
    id = fork();
    if (id == 0)
    {
    	int infile = open("infile.txt", O_RDONLY, 0777);
        dup2(infile, STDIN_FILENO);
        dup2(p[1], STDOUT_FILENO);
        args = ft_split(av[2], ' ');
        path = tester(paths, args[0]);
        close(p[0]);
        execve(path, args, env);
    }
    else if (id != 0)
    {
        wait(NULL);
        int outfile = open("outfile.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
        dup2(p[0], STDIN_FILENO);
        dup2(outfile, STDOUT_FILENO);
        args = ft_split(av[3], ' ');
        path = tester(paths, args[0]);
        close(p[1]);
        execve(path, args, env);
        close(outfile);
    }
    close(p[1]);
    close(p[0]);
}
