

int __fastcall Goal::setRequiredControlFlags(int result, int a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}


int __fastcall Goal::isTargetGoal(Goal *this)
{
  return 0;
}


signed int __fastcall Goal::canInterrupt(Goal *this)
{
  return 1;
}


_QWORD *__fastcall Goal::Goal(_QWORD *result)
{
  *result = (unsigned int)&off_26EDCF4;
  return result;
}
