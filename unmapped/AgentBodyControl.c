

_DWORD *__fastcall AgentBodyControl::AgentBodyControl(BodyControl *a1, Mob *a2)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)BodyControl::BodyControl(a1, a2);
  *result = &off_26EDC54;
  return result;
}


int __fastcall AgentBodyControl::clientTick(AgentBodyControl *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 1);
  *(_DWORD *)(result + 3412) = *(_DWORD *)(result + 124);
  return result;
}
