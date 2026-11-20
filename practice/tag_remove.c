#include <stdio.h>
#include <string.h>

// Yeh function string ke andar se <tag> hatakar sirf asli text nikalega
void fun1(char *string)
{
    int in = 0;    // Yeh ek switch hai: 0 matlab 'copy mat karo' (tag ke andar hain), 1 matlab 'copy karo' (tag ke bahar hain)
    int index = 0; // Yeh batata hai ki saaf kiya hua text string ke kaunse dabbe (position) mein likhna hai

    // 'i' ek reader hai jo shuru se aakhir tak ek-ek character ko padhega
    for (int i = 0; i < strlen(string); i++)
    {
        // Jaise hi '<' dikhe, samajh jao tag shuru ho gaya
        if (string[i] == '<')
        {
            in = 0;   // Switch OFF kar do (ab kuch copy nahi karna)
            continue; // Is '<' ko chhod kar agle character par badh jao
        }
        // Jaise hi '>' dikhe, samajh jao tag khatam ho gaya
        else if (string[i] == '>')
        {
            in = 1;   // Switch ON kar do (ab aage ka asli text copy karna hai)
            continue; // Is '>' ko chhod kar agle character par badh jao
        }

        // Agar switch ON hai (yaani hum tag ke bahar hain)
        if (in == 1)
        {
            string[index] = string[i]; // Kaam ka character uthao aur shuruat ke dabbon mein chipkate jao
            index++;                   // Likhne wale dabbe ko ek kadam aage badhao
        }
    }

    // Sabse zaroori line: Jahan asli text khatam hua, wahan '\0' (Stop Sign) laga do
    // Taaki aage bacha hua purana kachra (<jshfyhf>) print na ho
    string[index] = '\0';
}

int main()
{
    // Yeh hamari original string hai jismein faltu ke tags lage hain
    char string[] = "<jgfydf> karan is a good boy<jshfyhf>";

    fun1(string); // Function ko string bheji taaki woh iski safai kar de

    printf("%s", string); // Saaf ki hui string print kar do (Output:  karan is a good boy)
    return 0;
}
