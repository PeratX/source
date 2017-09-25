

int __fastcall BasicToggle::BasicToggle(int result, char a2)
{
  *(_BYTE *)result = a2;
  *(_BYTE *)(result + 1) = 1;
  *(_BYTE *)(result + 2) = 1;
  return result;
}


signed int __fastcall BasicToggle::getStateChange(BasicToggle *this, bool *a2)
{
  BasicToggle *v2; // r2@1
  signed int result; // r0@1

  v2 = this;
  *a2 = *(_BYTE *)this;
  result = 0;
  if ( *((_BYTE *)v2 + 1) )
  {
    *((_BYTE *)v2 + 1) = 0;
    result = 1;
  }
  return result;
}


signed int __fastcall BasicToggle::getStateChange(BasicToggle *this)
{
  BasicToggle *v1; // r1@1
  signed int result; // r0@1

  v1 = this;
  result = 0;
  if ( *((_BYTE *)v1 + 1) )
  {
    *((_BYTE *)v1 + 1) = 0;
    result = 1;
  }
  return result;
}


int __fastcall BasicToggle::setIsOn(int result, int a2)
{
  int v2; // r2@1

  v2 = *(_BYTE *)(result + 2);
  if ( a2 == *(_BYTE *)result )
  {
    if ( *(_BYTE *)(result + 2) )
      *(_BYTE *)(result + 2) = 0;
  }
  else
    *(_BYTE *)result = a2;
    if ( v2 )
      *(_WORD *)(result + 1) = 1;
    else
      *(_BYTE *)(result + 1) ^= 1u;
  return result;
}


int __fastcall BasicToggle::peek(BasicToggle *this)
{
  return *(_BYTE *)this;
}
