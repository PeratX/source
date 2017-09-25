

void __fastcall TickingAreaDescription::asString(TickingAreaDescription *this, int a2)
{
  int v2; // r5@1
  Util *v3; // r8@1
  __int64 v4; // r2@1 OVERLAPPED
  int v5; // r4@5 OVERLAPPED
  int v6; // r0@5
  void *v7; // r0@8
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  int v10; // [sp+14h] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E8AF4(&v10, (int *)(a2 + 28));
  LODWORD(v4) = v10;
  if ( *(_DWORD *)(v10 - 12) )
  {
    if ( *(_BYTE *)(v2 + 32) )
      sub_21E7408((const void **)&v10, " (%commands.tickingarea-list.type.circle)", 0x29u);
    sub_21E7408((const void **)&v10, ": ", 2u);
    LODWORD(v4) = v10;
  }
  *(__int64 *)((char *)&v4 + 4) = *(_QWORD *)v2;
  v6 = *(_DWORD *)(v2 + 8);
  if ( *(_BYTE *)(v2 + 32) )
    j_Util::format(
      v3,
      "%s%d %d %d %%commands.tickingarea-list.circle.radius: %d %%commands.tickingarea-list.chunks",
      v4,
      v5,
      v6,
      *(_DWORD *)(v2 + 24));
  else
      "%s%d %d %d %%commands.tickingarea-list.to %d %d %d",
      *(_QWORD *)(v2 + 12),
      *(_DWORD *)(v2 + 20));
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall TickingAreaDescription::asString(TickingAreaDescription *this, int a2)
{
  TickingAreaDescription::asString(this, a2);
}
