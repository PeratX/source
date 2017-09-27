

signed __int64 __fastcall ClassID::getNextID(ClassID *this)
{
  return (*(_QWORD *)&dword_28261C8)++ + 1LL;
}
