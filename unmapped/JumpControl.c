

int __fastcall JumpControl::tick(JumpControl *this)
{
  JumpControl *v1; // r4@1
  int result; // r0@1

  v1 = this;
  j_Mob::setJumping(*((Mob **)this + 1), *((_BYTE *)this + 8));
  result = 0;
  *((_BYTE *)v1 + 8) = 0;
  return result;
}


int __fastcall JumpControl::getJumpType(JumpControl *this)
{
  return 0;
}


int __fastcall JumpControl::jump(int result)
{
  *(_BYTE *)(result + 8) = 1;
  return result;
}


signed int __fastcall JumpControl::getJumpPower(JumpControl *this)
{
  return 1054280253;
}


int __fastcall JumpControl::JumpControl(int result, int a2)
{
  *(_DWORD *)result = &off_271A530;
  *(_DWORD *)(result + 4) = a2;
  *(_BYTE *)(result + 8) = 0;
  return result;
}


int __fastcall JumpControl::getJumpDelay(JumpControl *this)
{
  return 0;
}
