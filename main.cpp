#include <iostream>

using namespace std;

void process(string eqn);

int main()
{
    cout << "Welcome to the Naturalanguage Program! " << endl;
    cout << "This program separates an equation into operators, variables and numerical constants. " << endl << endl;

    cout << "Enter an equation: "; string equation; cin >> equation;

    process(equation);

    return 0;
}

void process(string eqn)
{
    for(int count = 0; count < eqn.length(); count++)
    {
        if(eqn[count] == )
    }
}

bool isNumeric(string eqn)
{
    for(int count = 0; count < eqn.length(); count++)
    {
        if(eqn[count] == )

}

bool isAlpha(string eqn)
{
    for(int count = 0; count < eqn.length(); count++)
    {
        if(eqn[count] == )

}

bool isAlphanumeric(string eqn)
{
    for(int count = 0; count < eqn.length(); count++)
    {
        if( (eqn[count] > 48 && eqn[count] < 57) || (eqn[count] > )
    }
}
