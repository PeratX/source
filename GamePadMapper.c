

InputDeviceMapper *__fastcall GamePadMapper::GamePadMapper(GameControllerMapper *a1)
{
  InputDeviceMapper *result; // r0@1

  result = GameControllerMapper::GameControllerMapper(a1);
  *(_DWORD *)result = &off_26E8820;
  return result;
}


signed int __fastcall GamePadMapper::getInputMode(GamePadMapper *this)
{
  return 3;
}


void __fastcall GamePadMapper::~GamePadMapper(GamePadMapper *this)
{
  GamePadMapper::~GamePadMapper(this);
}


char *__fastcall GamePadMapper::getGameControllerMapping(GamePadMapper *this, const InputMapping *a2)
{
  return (char *)a2 + 112;
}


void __fastcall GamePadMapper::~GamePadMapper(GamePadMapper *this)
{
  GamePadMapper *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@2
  char *v4; // r0@3
  void *v5; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26E88EC;
  v2 = *((_DWORD *)this + 17);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      GameControllerMapper::GameControllerMappingData::~GameControllerMappingData((GameControllerMapper::GameControllerMappingData *)(v2 + 8));
      operator delete((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 60), 4 * (*(_QWORD *)((char *)v1 + 60) >> 32));
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  v4 = (char *)*((_DWORD *)v1 + 15);
  if ( v4 && (char *)v1 + 84 != v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 12);
  if ( v5 )
    operator delete(v5);
  InputDeviceMapper::~InputDeviceMapper(v1);
  j_j_j__ZdlPv_5((void *)v1);
}
