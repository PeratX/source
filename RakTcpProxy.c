

int __fastcall RakTcpProxy::packetsAvailable(RakTcpProxy *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 1);
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 16))();
  else
    result = 0;
  return result;
}


int __fastcall RakTcpProxy::nextPacket(RakTcpProxy *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 1);
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 20))();
  else
    result = 0;
  return result;
}


RakNet *__fastcall RakTcpProxy::connect(RakNet::TCPInterface *a1, int a2, char **a3, int a4)
{
  int v4; // r6@1
  RakNet::TCPInterface *v5; // r5@1
  int v6; // r4@1
  char **v7; // r7@1

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  if ( !RakNet::TCPInterface::WasStarted(*(RakNet::TCPInterface **)(a2 + 4)) )
    RakNet::TCPInterface::Start(*(RakNet::TCPInterface **)(v4 + 4), 1057, 0, 1, -99999, 2, 0);
  return RakNet::TCPInterface::Connect(v5, *(const char **)(v4 + 4), *v7, v6, 0, (const char *)2, 0);
}


RakNet *__fastcall RakTcpProxy::nextLostConnection(RakTcpProxy *this, int a2)
{
  int v2; // r1@1
  RakNet *result; // r0@2

  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 )
    result = RakNet::TCPInterface::HasLostConnection(this, v2);
  else
    result = (RakNet *)_aeabi_memcpy4(this, &unk_27F7C60, 132);
  return result;
}


RakTcpProxy *__fastcall RakTcpProxy::~RakTcpProxy(RakTcpProxy *this)
{
  RakTcpProxy *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26EC3A0;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


int __fastcall RakTcpProxy::send(int a1, int a2, int a3, int a4)
{
  int result; // r0@1
  int v5; // [sp+Ch] [bp-4h]@1

  v5 = a4;
  result = *(_DWORD *)(a1 + 4);
  if ( result )
    result = (*(int (__cdecl **)(int))(*(_DWORD *)result + 8))(result);
  return result;
}


void __fastcall RakTcpProxy::~RakTcpProxy(RakTcpProxy *this)
{
  RakTcpProxy *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26EC3A0;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall RakTcpProxy::deallocatePacket(int a1, int a2)
{
  RakTcpProxy::deallocatePacket(a1, a2);
}


int __fastcall RakTcpProxy::close(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0@1
  signed int v6; // lr@2
  int *v7; // r12@2
  int v8; // r1@2
  int v9; // r2@2
  int v10; // r3@2
  int *v11; // r4@2
  int v12; // t1@3
  int v13; // [sp+0h] [bp-98h]@2
  int v14; // [sp+4h] [bp-94h]@4
  int v15; // [sp+8h] [bp-90h]@4
  int v16; // [sp+Ch] [bp-8Ch]@4
  int v17; // [sp+10h] [bp-88h]@4
  int v18; // [sp+14h] [bp-84h]@4
  int v19; // [sp+18h] [bp-80h]@4
  int v20; // [sp+1Ch] [bp-7Ch]@4
  int v21; // [sp+20h] [bp-78h]@4
  int v22; // [sp+24h] [bp-74h]@4
  int v23; // [sp+28h] [bp-70h]@4
  int v24; // [sp+2Ch] [bp-6Ch]@4
  int v25; // [sp+30h] [bp-68h]@4
  int v26; // [sp+34h] [bp-64h]@4
  int v27; // [sp+38h] [bp-60h]@4
  int v28; // [sp+3Ch] [bp-5Ch]@4
  int v29; // [sp+40h] [bp-58h]@4
  int v30; // [sp+44h] [bp-54h]@4
  int v31; // [sp+48h] [bp-50h]@4
  int v32; // [sp+4Ch] [bp-4Ch]@4
  int v33; // [sp+50h] [bp-48h]@4
  int v34; // [sp+54h] [bp-44h]@4
  int v35; // [sp+58h] [bp-40h]@4
  int v36; // [sp+5Ch] [bp-3Ch]@4
  int v37; // [sp+60h] [bp-38h]@4
  int v38; // [sp+64h] [bp-34h]@4
  int v39; // [sp+68h] [bp-30h]@4
  int v40; // [sp+6Ch] [bp-2Ch]@4
  int v41; // [sp+70h] [bp-28h]@4
  int v42; // [sp+74h] [bp-24h]@4
  int v43; // [sp+8Ch] [bp-Ch]@1
  int v44; // [sp+90h] [bp-8h]@1
  int v45; // [sp+94h] [bp-4h]@1

  v43 = a2;
  v44 = a3;
  v45 = a4;
  result = *(_DWORD *)(a1 + 4);
  if ( result )
  {
    v6 = 120;
    v7 = &a5;
    v8 = v43;
    v9 = v44;
    v10 = v45;
    v11 = &v13;
    do
    {
      v12 = *v7;
      ++v7;
      v6 -= 4;
      *v11 = v12;
      ++v11;
    }
    while ( v6 );
    result = RakNet::TCPInterface::CloseConnection(
               result,
               v8,
               v9,
               v10,
               v13,
               v14,
               v15,
               v16,
               v17,
               v18,
               v19,
               v20,
               v21,
               v22,
               v23,
               v24,
               v25,
               v26,
               v27,
               v28,
               v29,
               v30,
               v31,
               v32,
               v33,
               v34,
               v35,
               v36,
               v37,
               v38,
               v39,
               v40,
               v41,
               v42);
  }
  return result;
}


_QWORD *__fastcall RakTcpProxy::RakTcpProxy(_QWORD *a1)
{
  _QWORD *v1; // r4@1
  RakNet::TCPInterface *v2; // r6@1
  int v3; // r0@1

  v1 = a1;
  *a1 = (unsigned int)&off_26EC3A0;
  v2 = (RakNet::TCPInterface *)operator new(0x164u);
  RakNet::TCPInterface::TCPInterface(v2);
  v3 = *((_DWORD *)v1 + 1);
  *((_DWORD *)v1 + 1) = v2;
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  return v1;
}


void __fastcall RakTcpProxy::deallocatePacket(int a1, int a2)
{
  int v2; // r0@1

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 )
    j_j_j__ZN6RakNet12TCPInterface16DeallocatePacketEPNS_6PacketE(v2, a2);
  else
    JUMPOUT(0, RakTcpProxy::nextCompletedConnectionAttempt);
}


RakNet *__fastcall RakTcpProxy::nextCompletedConnectionAttempt(RakTcpProxy *this, int a2)
{
  int v2; // r1@1
  RakNet *result; // r0@2

  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 )
    result = RakNet::TCPInterface::HasCompletedConnectionAttempt(this, v2);
  else
    result = (RakNet *)_aeabi_memcpy4(this, &unk_27F7C60, 132);
  return result;
}


RakNet *__fastcall RakTcpProxy::nextFailedConnectionAttempt(RakTcpProxy *this, int a2)
{
  int v2; // r1@1
  RakNet *result; // r0@2

  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 )
    result = RakNet::TCPInterface::HasFailedConnectionAttempt(this, v2);
  else
    result = (RakNet *)_aeabi_memcpy4(this, &unk_27F7C60, 132);
  return result;
}


void __fastcall RakTcpProxy::~RakTcpProxy(RakTcpProxy *this)
{
  RakTcpProxy::~RakTcpProxy(this);
}
