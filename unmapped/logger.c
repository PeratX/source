

void __fastcall logger::initializeCrashLogWriter(logger *this)
{
  logger::initializeCrashLogWriter(this);
}


void __fastcall logger::initializeCrashLogWriter(logger *this)
{
  void *v1; // r0@2

  if ( !byte_27C58B8 )
  {
    v1 = dlsym((void *)0xFFFFFFFF, "__android_log_buf_write");
    byte_27C58B8 = 1;
    dword_27C58BC = (int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))v1;
  }
}


int __fastcall logger::writeToCrashLog(logger *this, const char *a2)
{
  int result; // r0@2

  if ( dword_27C58BC )
    result = dword_27C58BC(4, 7, "google-breakpad", this);
  else
    result = _android_log_write(7, "google-breakpad", this);
  return result;
}
