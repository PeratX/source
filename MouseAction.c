

int __fastcall MouseAction::MouseAction(int result, char a2, char a3, __int16 a4, __int16 a5, int a6)
{
  *(_BYTE *)(result + 8) = a2;
  *(_BYTE *)(result + 9) = a3;
  *(_WORD *)result = a4;
  *(_WORD *)(result + 2) = a5;
  *(_WORD *)(result + 6) = 0;
  *(_WORD *)(result + 4) = 0;
  *(_DWORD *)(result + 12) = a6;
  return result;
}


signed int __fastcall MouseAction::isButton(MouseAction *this)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = (unsigned __int8)(*((_BYTE *)this + 8) - 1);
  result = 0;
  if ( v1 < 3 )
    result = 1;
  return result;
}


int __fastcall MouseAction::MouseAction(int result, char a2, char a3, __int16 a4, __int16 a5, __int16 a6, __int16 a7, int a8, char a9)
{
  *(_BYTE *)(result + 8) = a2;
  *(_BYTE *)(result + 9) = a3;
  *(_WORD *)result = a4;
  *(_WORD *)(result + 2) = a5;
  *(_WORD *)(result + 4) = a6;
  *(_WORD *)(result + 6) = a7;
  *(_DWORD *)(result + 12) = a8;
  *(_BYTE *)(result + 16) = a9;
  return result;
}
