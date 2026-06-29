DWORD WINAPI RefreshDesktop(LPVOID)
{
    while (TRUE)
    {
        Sleep(1000);
        SHChangeNotify(
            SHCNE_ASSOCCHANGED,
            SHCNF_IDLIST | SHCNF_FLUSH,
            NULL,
            NULL
        );
    }
    return 0;
}