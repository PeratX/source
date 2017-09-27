

int __fastcall DevConsoleLogger::DevConsoleLogger(int a1, int a2)
{
  int v2; // r4@1
  _DWORD *v3; // r10@1
  int v4; // r6@1
  void *v5; // r0@2
  int v6; // r6@4
  void (__fastcall *v7)(int *, int, time_t *); // r5@4
  const void **v8; // r0@4
  const void **v9; // r0@4
  char *v10; // r0@4
  char *v11; // r0@5
  void *v12; // r0@6
  void *v13; // r0@7
  unsigned int *v15; // r2@9
  signed int v16; // r1@11
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  unsigned int *v19; // r2@17
  signed int v20; // r1@19
  unsigned int *v21; // r2@21
  signed int v22; // r1@23
  int v23; // [sp+8h] [bp-38h]@4
  char *v24; // [sp+Ch] [bp-34h]@4
  char *v25; // [sp+10h] [bp-30h]@4
  time_t v26; // [sp+14h] [bp-2Ch]@4
  int v27; // [sp+18h] [bp-28h]@4

  v2 = a1;
  v3 = (_DWORD *)(a1 + 4160);
  v4 = a2;
  sub_119D70C(a1 + 4160);
  *(_DWORD *)(v2 + 4160) = &off_26D3AF0;
  *(_DWORD *)(v2 + 4272) = 0;
  *(_WORD *)(v2 + 4276) = 0;
  *(_DWORD *)(v2 + 4292) = 0;
  *(_DWORD *)(v2 + 4288) = 0;
  *(_DWORD *)(v2 + 4284) = 0;
  *(_DWORD *)(v2 + 4280) = 0;
  Core::FileStream::FileStream((Core::FileStream *)(v2 + 4), (int)off_26D81A4);
  *(_DWORD *)(v2 + 4) = &off_26D8170;
  *v3 = &off_26D8198;
  *(_DWORD *)(v2 + 12) = &off_26D8184;
  sub_119CB58(v2 + 4296, 24);
  *(_DWORD *)(v2 + 4484) = &unk_28898CC;
  *(_DWORD *)v2 = v4;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v5 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v5 = &ServiceLocator<AppPlatform>::mDefaultService;
  v6 = *(_DWORD *)v5;
  v7 = *(void (__fastcall **)(int *, int, time_t *))(**(_DWORD **)v5 + 392);
  v26 = time(0);
  v7(&v27, v6, &v26);
  sub_119C884((void **)&v23, "Dev_Console_Log");
  v8 = sub_119C8A4((const void **)&v23, (const void **)&v27);
  v24 = (char *)*v8;
  *v8 = &unk_28898CC;
  v9 = sub_119C894((const void **)&v24, ".txt", 4u);
  v25 = (char *)*v9;
  *v9 = &unk_28898CC;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v2 + 4484),
    (int *)&v25);
  v10 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  }
  v11 = v24 - 12;
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v24 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v23 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v27 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  return v2;
}
