#include "text_formatter.h"
int main()
{
    setlocale(LC_CTYPE, "rus");
    fin.open(filename, ios::binary);
    while (!fin.eof())
    {
        char ch;
        fin.get(ch);
        if (!fin.eof()) textIn += ch;
    }
    fin.close();


    auto it = textIn.begin();
    textOut.insert(textOut.begin(), symbolsMatrix[1].begin(), symbolsMatrix[1].end());
    textOut.append(" ");
    while (it != textIn.end())
    {
        textOut.append(1, *it);
        if (textOut.back() == '.' || textOut.back() == '!' || textOut.back() == '?' || textOut.back() == ',')
        {
            int randNum = rand() % (randEnd - randStart + 1) + randStart;
            textOut.append(" ");
            textOut.append(symbolsMatrix[randNum].begin(), symbolsMatrix[randNum].end());
            textOut.append(" ");
        }
        ++it;
    }
    
    if (textOut == "OwO ")
    {
        cout << "Введи свой текст в файл \"textToFormat.txt\" UwU" << endl;
        int a;
        cin >> a;
        return 0;
    }

    fout.open(filename, ios::binary);
    for (char ch : textOut)
    {
        fout.put(ch);
    }
    cout << "Все готово! OwO" << endl;
    int a;
    cin >> a;
    return 0;
}