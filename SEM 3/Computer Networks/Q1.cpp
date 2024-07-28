#include <iostream>
using namespace std;
int main()
{
    int mSize;
    int message[255];
    cout << "Enter Message Size: ";
    cin >> mSize;
    cout << "Enter Message: ";
    for (int i = 0; i < mSize; i++)
        cin >> message[i];
    int gSize;
    int generator[64];
    cout << "Enter Generator Size: ";
    cin >> gSize;
    cout << "Enter Generator: ";
    for (int i = 0; i < gSize; i++)
        cin >> generator[i];
    if (!(generator[0] == 1 && generator[gSize - 1] == 1))
    {
        cerr << "\nERROR: MSB and LSB of the Generator must be 1\n";
        return -1;
    }
    cout << "\nSENDER\n======\n";
    cout << "Message: ";
    for (int i = 0; i < mSize; i++)
        cout << message[i];
    cout << endl;
    cout << "Generator: ";
    for (int i = 0; i < gSize; i++)
        cout << generator[i];
    cout << endl;
    int codeword[mSize + (gSize - 1)];
    for (int i = 0; i < mSize; i++)
        codeword[i] = message[i];
    for (int i = mSize; i < mSize + (gSize - 1); i++)
        codeword[i] = 0;
    int temp[mSize + (gSize - 1)];
    for (int i = 0; i < mSize + (gSize - 1); i++)
        temp[i] = codeword[i];
    for (int i = 0; i < mSize; i++)
    {
        int j = 0, k = i;
        if (temp[k] >= generator[j])
            while (j < gSize)
                temp[k++] ^= generator[j++];
    }
    int crc[64];
    for (int i = 0, j = mSize; i < (gSize - 1); i++, j++)
        crc[i] = temp[j];
    cout << "CRC: ";
    for (int i = 0; i < (gSize - 1); i++)
        cout << crc[i];
    cout << endl;
    for (int i = 0, j = mSize; i < (gSize - 1); i++, j++)
        codeword[j] = crc[i];
    cout << "Transmitted Codeword: ";
    for (int i = 0; i < mSize + (gSize - 1); i++)
        cout << codeword[i];
    cout << endl;
    cout << "\nNOISY CHANNEL SIMULATION\n========================\n";
    int nb, n;
    cout << "Enter Number of Bits to Flip: ";
    cin >> nb;
    if (nb > 0 && nb < mSize + (gSize - 1))
    {
        if (nb == 0)
            cout << "Codeword Not Changed.\n";
        for (int i = 0; i < nb; i++)
        {
            cout << "Enter Bit Position to Flip: ";
            cin >> n;
            if (n > 0 && n < mSize + (gSize - 1))
                codeword[n - 1] = codeword[n - 1] == 0 ? 1 : 0;
            else
                cout << "Invalid Position. Codeword Not Changed.\n";
        }
    }
    else
        cout << "Invalid Request. Codeword Not Changed.\n";
    cout << "\nRECEIVER\n========\n";
    cout << "Received Codeword: ";
    for (int i = 0; i < mSize + (gSize - 1); i++)
        cout << codeword[i];
    cout << endl;
    int temp2[mSize + (gSize - 1)];
    for (int i = 0; i < mSize + (gSize - 1); i++)
        temp2[i] = codeword[i];
    for (int i = 0; i < mSize; i++)
    {
        int j = 0, k = i;
        if (temp2[k] >= generator[j])
            while (j < gSize)
                temp2[k++] ^= generator[j++];
    }
    int rem[64];
    for (int i = mSize, j = 0; i < mSize + (gSize - 1); i++, j++)
        rem[j] = temp2[i];
    cout << "Remainder: ";
    for (int i = 0; i < (gSize - 1); i++)
        cout << rem[i];
    cout << endl;
    int flag = false;
    for (int i = 0; i < (gSize - 1); i++)
        if (rem[i] != 0)
            flag = true;
    // Declare Result
    cout << endl;
    if (!flag)
        cout << "TRANSMISSION OK!" << endl;
    else
        cout << "TRANSMISSION ERROR DETECTED!" << endl;
    return 0;
}
