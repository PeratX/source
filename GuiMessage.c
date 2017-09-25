

signed int __fastcall GuiMessage::isAlive(GuiMessage *this)
{
  signed int result; // r0@1

  __asm { VLDR            S0, [R0,#0x10] }
  result = 0;
  __asm
  {
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  return result;
}


char *__fastcall GuiMessage::getUser(GuiMessage *this)
{
  return (char *)this + 4;
}


int __fastcall GuiMessage::GuiMessage(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  *(_BYTE *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_WORD *)(result + 20) = 0;
  return result;
}


int __fastcall GuiMessage::decrementTime(int result, float _R1)
{
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0,#0x10]
    VSUB.F32        S0, S2, S0
    VSTR            S0, [R0,#0x10]
  }
  return result;
}


int *__fastcall GuiMessage::GuiMessage(int *a1, int *a2, int *a3, int a4, char a5, char a6)
{
  int *v6; // r6@1
  int *v7; // r5@1
  int *v9; // r4@1
  int v14; // r7@1
  int v15; // r0@1
  const void **v16; // r0@2
  const void **v17; // r0@2
  char *v18; // r0@2
  char *v19; // r0@3
  char *v20; // r0@4
  unsigned int *v21; // r2@5
  signed int v22; // r1@7
  unsigned int *v24; // r2@11
  signed int v25; // r1@13
  unsigned int *v26; // r2@15
  signed int v27; // r1@17
  char *v28; // [sp+0h] [bp-28h]@2
  char *v29; // [sp+4h] [bp-24h]@2
  char *v30; // [sp+8h] [bp-20h]@2

  v6 = a3;
  v7 = a2;
  _R7 = a4;
  v9 = a1;
  sub_DA73B4(a1, a3);
  sub_DA73B4(v9 + 1, v7);
  __asm { VMOV            S0, R7 }
  v9[2] = (int)&unk_28898CC;
  v14 = (int)(v9 + 2);
  *(_BYTE *)(v14 + 4) = a5;
  __asm { VSTR            S0, [R7,#8] }
  *(_BYTE *)(v14 + 12) = 0;
  *(_BYTE *)(v14 + 13) = a6;
  v15 = *(_DWORD *)(*v7 - 12);
  if ( v15 )
  {
    v28 = (char *)&unk_28898CC;
    sub_DA7404((const void **)&v28, v15 + 1);
    sub_DA7714((const void **)&v28, 1u, 60);
    sub_DA7564((const void **)&v28, (const void **)v7);
    v16 = sub_DA73D4((const void **)&v28, "> ", 2u);
    v29 = (char *)*v16;
    *v16 = &unk_28898CC;
    v17 = sub_DA7564((const void **)&v29, (const void **)v6);
    v30 = (char *)*v17;
    *v17 = &unk_28898CC;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      v9 + 2,
      (int *)&v30);
    v18 = v30 - 12;
    if ( (int *)(v30 - 12) != &dword_28898C0 )
    {
      v24 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      }
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9(v18);
    }
    v19 = v29 - 12;
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v29 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9(v19);
    v20 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v28 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j_j__ZdlPv_9(v20);
  }
  else
    EntityInteraction::setInteractText(v9 + 2, v6);
  return v9;
}


int *__fastcall GuiMessage::GuiMessage(int *a1, int *a2)
{
  int *v2; // r4@1
  int *v3; // r5@1
  __int64 v4; // r0@1

  v2 = a2;
  v3 = a1;
  sub_DA73B4(a1, a2);
  sub_DA73B4(v3 + 1, v2 + 1);
  sub_DA73B4(v3 + 2, v2 + 2);
  v4 = *(_QWORD *)(v2 + 3);
  *((_WORD *)v3 + 10) = *((_WORD *)v2 + 10);
  *(_QWORD *)(v3 + 3) = v4;
  return v3;
}


int __fastcall GuiMessage::setHasBeenSeen(int result)
{
  *(_BYTE *)(result + 20) = 1;
  return result;
}


char *__fastcall GuiMessage::getString(GuiMessage *this)
{
  return (char *)this + 8;
}


signed int __fastcall GuiMessage::isCommand(GuiMessage *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = **(_BYTE **)this;
  result = 0;
  if ( v1 == 47 )
    result = 1;
  return result;
}
