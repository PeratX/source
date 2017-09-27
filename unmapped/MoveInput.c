

signed int __fastcall MoveInput::allowPicking(MoveInput *this, float a2, float a3)
{
  return 1;
}


int __fastcall MoveInput::setJumping(int result, bool a2)
{
  *(_BYTE *)(result + 67) = a2;
  return result;
}
