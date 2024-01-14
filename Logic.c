#include <stdio.h>
int evaluateExpression(int p, int q, int r, char *expression) 
{
    int result = 0;
    int index = 0;
    while (expression[index] != '\0') {
        if (expression[index] == 'p') {
            result = p;
        } else if (expression[index] == 'q') {
            result = q;
        } else if (expression[index] == 'r') {
            result = r;
        } else if (expression[index] == '|') {
            result = result || (expression[index + 1] == 'p' ? p : (expression[index + 1] == 'q' ? q : r));
            index++;  // Skip the next variable
        } else if (expression[index] == '&') {
            result = result && (expression[index + 1] == 'p' ? p : (expression[index + 1] == 'q' ? q : r));
            index++;  // Skip the next variable
        } else if (expression[index] == '!') {
            result = !result;
        }
        index++;
    }
    return result;
}
int main() 
{
    int tautology = 0;
    int contradiction = 0;
    int p, q, r;
    printf("Enter a logical expression using p, q, r: ");
    char expression[100];
    scanf("%s", expression);
    printf("\nTruth Table:\n");
    printf(" p  q  r  Expression\n");
    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            for (r = 0; r <= 1; r++) {
                int result = evaluateExpression(p, q, r, expression);
                printf(" %d | %d | %d | %d\n", p, q, r, result);
                if (result == 1) {
                    tautology++;
                } else {
                    contradiction++;
                }
            }
        }
    }
    if (tautology == 8) 
    {
        printf("\nThe expression is a tautology.\n");
    } 
    else if (contradiction == 8) 
    {
        printf("\nThe expression is a contradiction.\n");
    } 
    else 
    {
        printf("\nThe expression is a contingency.\n");
    }
    return 0;
}
