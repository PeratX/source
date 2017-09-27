

int __fastcall AppLifecycleContext::setHasWindowFocus(int result, bool a2)
{
  *(_BYTE *)(result + 3) = a2;
  return result;
}


int __fastcall AppLifecycleContext::canRender(AppLifecycleContext *this)
{
  int result; // r0@2

  if ( *((_BYTE *)this + 1) )
    result = *((_BYTE *)this + 2) != 0;
  else
    result = 0;
  return result;
}


signed int __fastcall AppLifecycleContext::transitionEndRenderingThisFrame(AppLifecycleContext *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *(_BYTE *)this;
  result = 0;
  if ( v1 == 2 )
    result = 1;
  return result;
}


int __fastcall AppLifecycleContext::transitionBeginRenderingThisFrame(AppLifecycleContext *this)
{
  int result; // r0@1

  result = *(_BYTE *)this;
  if ( result != 1 )
    result = 0;
  return result;
}


_DWORD *__fastcall AppLifecycleContext::AppLifecycleContext(_DWORD *result)
{
  *result = 0;
  return result;
}


int __fastcall AppLifecycleContext::advanceFrame(int result)
{
  *(_BYTE *)result = 0;
  return result;
}


int __fastcall AppLifecycleContext::setFocus(int result, int a2)
{
  int v2; // r2@1
  int v3; // r3@2
  int v4; // r2@2
  char v5; // r1@5

  v2 = *(_BYTE *)(result + 2);
  if ( v2 != a2 )
  {
    v3 = *(_BYTE *)(result + 1);
    *(_BYTE *)(result + 2) = a2;
    v4 = v2 != 0 && v3 != 0;
    if ( v3 )
    {
      if ( (v4 ^ a2) != 1 )
        return result;
      if ( a2 == 1 )
      {
        v5 = 1;
LABEL_8:
        *(_BYTE *)result = v5;
      }
    }
    else if ( v4 != 1 )
      return result;
    v5 = 2;
    goto LABEL_8;
  }
  return result;
}


int __fastcall AppLifecycleContext::setHasGraphicsContext(int result, int a2)
{
  signed int v2; // r2@3
  signed int v3; // r3@8
  char v4; // r1@12

  if ( *(_BYTE *)(result + 1) != a2 )
  {
    if ( *(_BYTE *)(result + 1) )
    {
      v2 = *(_BYTE *)(result + 2);
      if ( *(_BYTE *)(result + 2) )
        v2 = 1;
    }
    else
      v2 = 0;
    *(_BYTE *)(result + 1) = a2;
    if ( !a2 )
      if ( v2 != 1 )
        return result;
      goto LABEL_14;
    v3 = *(_BYTE *)(result + 2);
    if ( *(_BYTE *)(result + 2) )
      v3 = 1;
    if ( v2 != v3 )
      {
        v4 = 1;
LABEL_15:
        *(_BYTE *)result = v4;
      }
LABEL_14:
      v4 = 2;
      goto LABEL_15;
  }
  return result;
}
