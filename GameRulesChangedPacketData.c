

void __fastcall GameRulesChangedPacketData::addRule(int a1, int *a2, __int64 *a3)
{
  GameRulesChangedPacketData::addRule(a1, a2, a3);
}


void __fastcall GameRulesChangedPacketData::addRule(int a1, int *a2, __int64 *a3)
{
  int v3; // r4@1
  __int64 *v4; // r5@1
  int *v5; // r0@1
  int v6; // r1@1 OVERLAPPED
  int v7; // r2@1
  char *v8; // r0@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  char *v11; // [sp+4h] [bp-24h]@1
  __int64 v12; // [sp+8h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v5 = sub_21E8AF4((int *)&v11, a2);
  v12 = *v4;
  *(_QWORD *)&v6 = *(_QWORD *)(v3 + 4);
  if ( v6 == v7 )
  {
    j_std::vector<GameRulesChangedPacketData::NamedRule,std::allocator<GameRulesChangedPacketData::NamedRule>>::_M_emplace_back_aux<GameRulesChangedPacketData::NamedRule>(
      (unsigned __int64 *)v3,
      (int)&v11);
  }
  else
    *(_DWORD *)v6 = v11;
    v11 = (char *)&unk_28898CC;
    *(_QWORD *)(v6 + 4) = *(_QWORD *)(v5 + 1);
    *(_DWORD *)(v3 + 4) += 12;
  v8 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}
