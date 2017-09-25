

int __fastcall Multitouch::isPressedThisUpdate(Multitouch *this, int a2)
{
  Multitouch *v2; // r2@1

  v2 = this;
  if ( (signed int)this > 11 )
    v2 = (Multitouch *)11;
  if ( (signed int)this < 0 )
    v2 = this;
  return *((_BYTE *)v2 + 41636976);
}


int __fastcall Multitouch::isReleased(Multitouch *this, int a2)
{
  Multitouch *v2; // r2@1

  v2 = this;
  if ( (signed int)this > 11 )
    v2 = (Multitouch *)11;
  if ( (signed int)this < 0 )
    v2 = this;
  return *((_BYTE *)v2 + 41636952);
}


signed int __fastcall Multitouch::getFirstActivePointerIdExThisUpdate(Multitouch *this)
{
  signed int result; // r0@13

  if ( MouseDevice::isButtonDown((MouseDevice *)&Multitouch::_pointers, 1) )
    return 0;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E855C, 1) )
    return 1;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E8584, 1) )
    return 2;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E85AC, 1) )
    return 3;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E85D4, 1) )
    return 4;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E85FC, 1) )
    return 5;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E8624, 1) )
    return 6;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E864C, 1) )
    return 7;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E8674, 1) )
    return 8;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E869C, 1) )
    return 9;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E86C4, 1) )
    goto LABEL_40;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E86EC, 1) )
    return 11;
  if ( (_BYTE)Multitouch::_wasReleasedThisUpdate )
  if ( byte_27B547D )
  if ( byte_27B547E )
  if ( byte_27B547F )
  if ( byte_27B5480 )
  if ( byte_27B5481 )
  if ( byte_27B5482 )
  if ( byte_27B5483 )
  if ( byte_27B5484 )
  if ( byte_27B5485 )
  if ( byte_27B5486 )
  {
LABEL_40:
    result = 10;
  }
  else
    result = 11;
    if ( !byte_27B5487 )
      result = -1;
  return result;
}


int __fastcall Multitouch::getActivePointerIdsThisUpdate(Multitouch *this, const int **a2)
{
  *(_DWORD *)this = &Multitouch::_activePointerThisUpdateList;
  return Multitouch::_activePointerThisUpdateCount;
}


int __fastcall Multitouch::isPressed(Multitouch *this, int a2)
{
  Multitouch *v2; // r2@1

  v2 = this;
  if ( (signed int)this > 11 )
    v2 = (Multitouch *)11;
  if ( (signed int)this < 0 )
    v2 = this;
  return *((_BYTE *)v2 + 41636940);
}


_DWORD *__fastcall Multitouch::resetThisUpdate(Multitouch *this)
{
  _DWORD *result; // r0@1

  result = &Multitouch::_index;
  Multitouch::_wasPressedThisUpdate = 0;
  unk_27B5474 = 0;
  unk_27B5478 = 0;
  Multitouch::_wasReleasedThisUpdate = 0;
  *(_DWORD *)&byte_27B5480 = 0;
  *(_DWORD *)&byte_27B5484 = 0;
  return result;
}


char *__fastcall Multitouch::commit(Multitouch *this)
{
  int v1; // r6@1
  MouseDevice *v2; // r4@1
  int v3; // r0@3
  char *result; // r0@4
  int v5; // r0@5

  v1 = 0;
  v2 = (MouseDevice *)&Multitouch::_pointers;
  Multitouch::_activePointerCount = 0;
  Multitouch::_activePointerThisUpdateCount = 0;
  do
  {
    if ( MouseDevice::isButtonDown(v2, 1) == 1 )
    {
      v3 = Multitouch::_activePointerCount++;
      Multitouch::_activePointerList[v3] = v1;
    }
    else
      result = (char *)*((_BYTE *)&Multitouch::_index + v1 + 24);
      if ( !*((_BYTE *)&Multitouch::_index + v1 + 24) )
        goto LABEL_6;
    v5 = Multitouch::_activePointerThisUpdateCount++;
    result = (char *)&Multitouch::_activePointerList[v5];
    *((_DWORD *)result + 12) = v1;
LABEL_6:
    ++v1;
    v2 = (MouseDevice *)((char *)v2 + 40);
  }
  while ( v1 != 12 );
  return result;
}


signed int __fastcall Multitouch::getFirstActivePointerIdEx(Multitouch *this)
{
  signed int result; // r0@13

  if ( MouseDevice::isButtonDown((MouseDevice *)&Multitouch::_pointers, 1) )
    return 0;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E855C, 1) )
    return 1;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E8584, 1) )
    return 2;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E85AC, 1) )
    return 3;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E85D4, 1) )
    return 4;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E85FC, 1) )
    return 5;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E8624, 1) )
    return 6;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E864C, 1) )
    return 7;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E8674, 1) )
    return 8;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E869C, 1) )
    return 9;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E86C4, 1) )
    goto LABEL_40;
  if ( MouseDevice::isButtonDown((MouseDevice *)&unk_27E86EC, 1) )
    return 11;
  if ( (_BYTE)Multitouch::_wasReleased )
  if ( byte_27B5459 )
  if ( byte_27B545A )
  if ( byte_27B545B )
  if ( byte_27B545C )
  if ( byte_27B545D )
  if ( byte_27B545E )
  if ( byte_27B545F )
  if ( byte_27B5460 )
  if ( byte_27B5461 )
  if ( byte_27B5462 )
  {
LABEL_40:
    result = 10;
  }
  else
    result = 11;
    if ( !byte_27B5463 )
      result = -1;
  return result;
}


void __fastcall Multitouch::feed(Multitouch *this, char a2, char a3, __int16 a4, __int16 a5, int a6)
{
  JUMPOUT(Multitouch::feed);
}


int __fastcall Multitouch::reset(Multitouch *this)
{
  int result; // r0@1

  dword_27B548C = Multitouch::_inputs;
  Multitouch::_index = -1;
  MouseDevice::reset((MouseDevice *)&Multitouch::_pointers);
  LOBYTE(Multitouch::_wasPressed) = 0;
  LOBYTE(Multitouch::_wasReleased) = 0;
  MouseDevice::reset((MouseDevice *)&unk_27E855C);
  byte_27B544D = 0;
  byte_27B5459 = 0;
  MouseDevice::reset((MouseDevice *)&unk_27E8584);
  byte_27B544E = 0;
  byte_27B545A = 0;
  MouseDevice::reset((MouseDevice *)&unk_27E85AC);
  byte_27B544F = 0;
  byte_27B545B = 0;
  MouseDevice::reset((MouseDevice *)&unk_27E85D4);
  byte_27B5450 = 0;
  byte_27B545C = 0;
  MouseDevice::reset((MouseDevice *)&unk_27E85FC);
  byte_27B5451 = 0;
  byte_27B545D = 0;
  MouseDevice::reset((MouseDevice *)&unk_27E8624);
  byte_27B5452 = 0;
  byte_27B545E = 0;
  MouseDevice::reset((MouseDevice *)&unk_27E864C);
  byte_27B5453 = 0;
  byte_27B545F = 0;
  MouseDevice::reset((MouseDevice *)&unk_27E8674);
  byte_27B5454 = 0;
  byte_27B5460 = 0;
  MouseDevice::reset((MouseDevice *)&unk_27E869C);
  byte_27B5455 = 0;
  byte_27B5461 = 0;
  MouseDevice::reset((MouseDevice *)&unk_27E86C4);
  byte_27B5456 = 0;
  byte_27B5462 = 0;
  result = MouseDevice::reset((MouseDevice *)&unk_27E86EC);
  byte_27B5457 = 0;
  byte_27B5463 = 0;
  return result;
}


int __fastcall Multitouch::isEdgeTouch(Multitouch *this, int a2)
{
  Multitouch *v2; // r2@1

  v2 = this;
  if ( (signed int)this > 11 )
    v2 = (Multitouch *)11;
  if ( (signed int)this < 0 )
    v2 = this;
  return *((_BYTE *)v2 + 41636964);
}


int __fastcall Multitouch::getActivePointerIds(Multitouch *this, const int **a2)
{
  *(_DWORD *)this = Multitouch::_activePointerList;
  return Multitouch::_activePointerCount;
}


int __fastcall Multitouch::isReleasedThisUpdate(Multitouch *this, int a2)
{
  Multitouch *v2; // r2@1

  v2 = this;
  if ( (signed int)this > 11 )
    v2 = (Multitouch *)11;
  if ( (signed int)this < 0 )
    v2 = this;
  return *((_BYTE *)v2 + 41636988);
}


signed int __fastcall Multitouch::next(Multitouch *this)
{
  signed int result; // r0@2

  if ( Multitouch::_index + 1 < -858993459 * ((dword_27B548C - Multitouch::_inputs) >> 2) )
  {
    ++Multitouch::_index;
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall Multitouch::isPointerDown(Multitouch *this, int a2)
{
  Multitouch *v2; // r2@1

  v2 = this;
  if ( (signed int)this > 11 )
    v2 = (Multitouch *)11;
  if ( (signed int)this < 0 )
    v2 = this;
  return j_j_j__ZN11MouseDevice12isButtonDownEi((MouseDevice *)((char *)&Multitouch::_pointers + 40 * (_DWORD)v2), 1);
}
