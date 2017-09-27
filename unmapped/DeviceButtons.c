

char *__fastcall DeviceButtons::getNextEvent(DeviceButtons *this)
{
  _QWORD *v1; // r1@1
  char *result; // r0@2

  v1 = dword_27E7C88[0];
  *(_QWORD *)this = *dword_27E7C88[0];
  if ( v1 == dword_27E7C88[2] - 1 )
  {
    operator delete(dword_27E7C88[1]);
    dword_27E7C88[3] = (_QWORD *)((char *)dword_27E7C88[3] + 4);
    result = *(char **)dword_27E7C88[3];
    dword_27E7C88[1] = result;
    dword_27E7C88[2] = result + 512;
    dword_27E7C88[0] = result;
  }
  else
    result = (char *)&DeviceButtons::sEventQueue;
    dword_27E7C88[0] = v1 + 1;
  return result;
}


signed int __fastcall DeviceButtons::next(DeviceButtons *this)
{
  signed int result; // r0@1

  result = 0;
  if ( dword_27E7C98 != (_DWORD *)dword_27E7C88[0] )
    result = 1;
  return result;
}


_DWORD *__fastcall DeviceButtons::feedButton(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  _DWORD *result; // r0@2
  _DWORD *v6; // r0@5

  v2 = a1;
  v3 = a2;
  v4 = dword_27E7C98;
  if ( dword_27E7C98 == (_DWORD *)(unk_27E7CA0 - 8) )
  {
    if ( (unsigned int)(unk_27E7C84 - (((signed int)dword_27E7CA4 - DeviceButtons::sEventQueue) >> 2)) <= 1 )
      std::deque<DeviceButtonEvent,std::allocator<DeviceButtonEvent>>::_M_reallocate_map(
        (int)&DeviceButtons::sEventQueue,
        1u,
        0);
    dword_27E7CA4[1] = operator new(0x200u);
    v6 = dword_27E7C98;
    *dword_27E7C98 = v2;
    v6[1] = v3;
    ++dword_27E7CA4;
    unk_27E7C9C = *dword_27E7CA4;
    result = (_DWORD *)unk_27E7C9C;
    unk_27E7CA0 = unk_27E7C9C + 512;
    dword_27E7C98 = (_DWORD *)unk_27E7C9C;
  }
  else
    v4[1] = a2;
    result = dword_27E7C98 + 2;
    dword_27E7C98 += 2;
  return result;
}
