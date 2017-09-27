

int __fastcall JavaUtil::getVM(JavaUtil *this)
{
  return dword_27C4B54;
}


int __fastcall JavaUtil::getActivityObject(JavaUtil *this)
{
  return dword_27C4B58;
}


int __fastcall JavaUtil::setActivityObject(int result)
{
  dword_27C4B58 = result;
  return result;
}


int __fastcall JavaUtil::setVM(int result)
{
  dword_27C4B54 = result;
  return result;
}
