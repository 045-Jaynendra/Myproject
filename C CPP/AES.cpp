#include <bits/stdc++.h>
#include "openSSL/aes.h"
using namespace std;
string Encrypt(char *Key, char *Msg, int size)
{
    static char *Res;
    static const char *const lut = "0123456789ABCDEF";
    string output;
    AES_KEY enc_key;
    Res = (char *)malloc(size);
    AES_set_encrypt_key((unsigned char *)Key, 128, &enc_key);
    for (int vuelta = 0; vuelta <= size; vuelta += 16)
    {
        AES_ecb_encrypt((unsigned char *)Msg + vuelta, (unsigned char *)Res + vuelta, &enc_key, AES_ENCRYPT);
    }
    output.reserve(2 * size);
    for (size_t i = 0; i < size; ++i)
    {
        const unsigned char c = Res[i];
        output.push_back(lut[c >> 4]);
        output.push_back(lut[c & 15]);
    }
    free(Res);
    return output;
}
char *Decrypt(char *Key, char *Msg, int size)
{
    static char *Res;
    AES_KEY dec_key;
    Res = (char *)malloc(size);
    AES_set_decrypt_key((unsigned char *)Key, 128, &dec_key);
    for (int vuelta = 0; vuelta <= size; vuelta += 16)
    {
        AES_ecb_encrypt((unsigned char *)Msg + vuelta, (unsigned char *)Res + vuelta, &dec_key, AES_DECRYPT);
    }
    return (Res);
}
int main(int argc, char const *argv[])
{
    char key[16];
    char message[128];
    char enc_message[128];
    string s_key = "THIS_IS_THE_KEY_";
    string s_message = "Hello World !!!";
    memset(key, 0, sizeof(key));
    strcpy(key, s_key.c_str());
    memset(message, 0, sizeof(message));
    strcpy(message, s_message.c_str());
    string response = Encrypt(key, message, sizeof(message));
    cout << "This is the Encrypted Message: " << response << endl;
    memset(enc_message, 0, sizeof(enc_message));
    strcpy(enc_message, response.c_str());
    Decrypt(key, enc_message, sizeof(enc_message));
    return 0;
}