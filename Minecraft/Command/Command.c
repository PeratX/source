

int __fastcall Command::Command(int result)
{
  *(_QWORD *)result = (unsigned int)&off_26EAD74;
  *(_QWORD *)(result + 8) = -4294967296LL;
  *(_WORD *)(result + 16) = 5;
  return result;
}


signed int __fastcall Command::checkHasTargets<Player>(__int64 **a1, _DWORD *a2)
{
  _DWORD *v2; // r4@1
  void *v3; // r4@2
  void *v4; // r6@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int *v7; // r0@12
  void *v8; // r0@17
  signed int result; // r0@18
  unsigned int *v10; // r2@20
  signed int v11; // r1@22
  __int64 v12; // [sp+0h] [bp-38h]@2
  int v13; // [sp+8h] [bp-30h]@2
  int v14; // [sp+10h] [bp-28h]@2

  v2 = a2;
  if ( CommandSelectorResults<Player>::empty(a1) == 1 )
  {
    sub_21E94B4((void **)&v14, "commands.generic.noTargetMatch");
    v12 = 0LL;
    v13 = 0;
    CommandOutput::error(v2, &v14, (unsigned __int64 *)&v12);
    v4 = (void *)HIDWORD(v12);
    v3 = (void *)v12;
    if ( (_DWORD)v12 != HIDWORD(v12) )
    {
      do
      {
        v7 = (int *)(*(_DWORD *)v3 - 12);
        if ( v7 != &dword_28898C0 )
        {
          v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v6 = __ldrex(v5);
            while ( __strex(v6 - 1, v5) );
          }
          else
            v6 = (*v5)--;
          if ( v6 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        }
        v3 = (char *)v3 + 8;
      }
      while ( v3 != v4 );
      v3 = (void *)v12;
    }
    if ( v3 )
      operator delete(v3);
    v8 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v14 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    result = 0;
  }
  else
    result = 1;
  return result;
}


signed int __fastcall Command::checkHasTargets<Entity>(__int64 **a1, _DWORD *a2)
{
  _DWORD *v2; // r4@1
  void *v3; // r4@2
  void *v4; // r6@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int *v7; // r0@12
  void *v8; // r0@17
  signed int result; // r0@18
  unsigned int *v10; // r2@20
  signed int v11; // r1@22
  __int64 v12; // [sp+0h] [bp-38h]@2
  int v13; // [sp+8h] [bp-30h]@2
  int v14; // [sp+10h] [bp-28h]@2

  v2 = a2;
  if ( CommandSelectorResults<Entity>::empty(a1) == 1 )
  {
    sub_21E94B4((void **)&v14, "commands.generic.noTargetMatch");
    v12 = 0LL;
    v13 = 0;
    CommandOutput::error(v2, &v14, (unsigned __int64 *)&v12);
    v4 = (void *)HIDWORD(v12);
    v3 = (void *)v12;
    if ( (_DWORD)v12 != HIDWORD(v12) )
    {
      do
      {
        v7 = (int *)(*(_DWORD *)v3 - 12);
        if ( v7 != &dword_28898C0 )
        {
          v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v6 = __ldrex(v5);
            while ( __strex(v6 - 1, v5) );
          }
          else
            v6 = (*v5)--;
          if ( v6 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        }
        v3 = (char *)v3 + 8;
      }
      while ( v3 != v4 );
      v3 = (void *)v12;
    }
    if ( v3 )
      operator delete(v3);
    v8 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v14 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    result = 0;
  }
  else
    result = 1;
  return result;
}


void __fastcall Command::run(Command *this, const CommandOrigin *a2, CommandOutput *a3)
{
  const CommandOrigin *v3; // r6@1
  Command *v4; // r5@1
  CommandOutput *v5; // r4@1
  unsigned int v6; // r0@3
  __int64 v7; // kr00_8@4
  char *v8; // r4@4
  int v9; // r6@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  int *v12; // r0@14
  void *v13; // r0@19
  void *v14; // r0@20
  void *v15; // r0@21
  unsigned int v16; // r0@23
  __int64 v17; // kr10_8@28
  char *v18; // r4@28
  int v19; // r6@28
  unsigned int *v20; // r2@30
  signed int v21; // r1@32
  int *v22; // r0@38
  void *v23; // r0@43
  void *v24; // r0@44
  unsigned int *v25; // r2@46
  signed int v26; // r1@48
  unsigned int *v27; // r2@50
  signed int v28; // r1@52
  unsigned int *v29; // r2@54
  signed int v30; // r1@56
  unsigned int *v31; // r2@74
  signed int v32; // r1@76
  unsigned int *v33; // r2@78
  signed int v34; // r1@80
  int v35; // [sp+4h] [bp-6Ch]@28
  int v36; // [sp+8h] [bp-68h]@28
  char *v37; // [sp+10h] [bp-60h]@28
  char *v38; // [sp+14h] [bp-5Ch]@28
  char *v39; // [sp+18h] [bp-58h]@28
  int v40; // [sp+20h] [bp-50h]@28
  int v41; // [sp+24h] [bp-4Ch]@4
  int v42; // [sp+28h] [bp-48h]@4
  char *v43; // [sp+30h] [bp-40h]@4
  char *v44; // [sp+34h] [bp-3Ch]@4
  char *v45; // [sp+38h] [bp-38h]@4
  int v46; // [sp+40h] [bp-30h]@4
  char v47; // [sp+44h] [bp-2Ch]@4
  char v48; // [sp+48h] [bp-28h]@28

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)a2 + 36))(a2) < (unsigned int)*((_BYTE *)this + 16) )
  {
LABEL_4:
    sub_21E94B4((void **)&v46, "commands.generic.unknown");
    v7 = *((_QWORD *)v4 + 1);
    CommandRegistry::Symbol::Symbol((CommandRegistry::Symbol *)&v47, HIDWORD(v7));
    CommandRegistry::symbolToString((int)&v41, v7, (int)&v47);
    CommandOutputParameter::CommandOutputParameter(&v42, &v41);
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v43 = (char *)operator new(8u);
    v45 = v43 + 8;
    v44 = (char *)std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v42,
                    (int)&v43,
                    (int)v43);
    CommandOutput::error(v5, &v46, (unsigned __int64 *)&v43);
    v9 = (int)v44;
    v8 = v43;
    if ( v43 != v44 )
    {
      do
      {
        v12 = (int *)(*(_DWORD *)v8 - 12);
        if ( v12 != &dword_28898C0 )
        {
          v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
          }
          else
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        }
        v8 += 8;
      }
      while ( v8 != (char *)v9 );
      v8 = v43;
    }
    if ( v8 )
      operator delete(v8);
    v13 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v42 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      else
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v41 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) == &dword_28898C0 )
      return;
    v25 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
      __dmb();
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      goto LABEL_63;
LABEL_62:
    v26 = (*v25)--;
LABEL_63:
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
    return;
  }
  if ( (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v3 + 72))(v3) == 8 )
    v6 = *((_WORD *)v4 + 8);
    if ( (unsigned __int8)v6 > 1u )
      goto LABEL_4;
    v16 = v6 >> 8;
  else
    LOBYTE(v16) = *((_BYTE *)v4 + 17);
  if ( !(v16 & 2) || (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v3 + 44))(v3) )
    (*(void (__fastcall **)(Command *, const CommandOrigin *, CommandOutput *))(*(_DWORD *)v4 + 8))(v4, v3, v5);
  sub_21E94B4((void **)&v40, "commands.generic.unknown");
  v17 = *((_QWORD *)v4 + 1);
  CommandRegistry::Symbol::Symbol((CommandRegistry::Symbol *)&v48, HIDWORD(v17));
  CommandRegistry::symbolToString((int)&v35, v17, (int)&v48);
  CommandOutputParameter::CommandOutputParameter(&v36, &v35);
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v37 = (char *)operator new(8u);
  v39 = v37 + 8;
  v38 = (char *)std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                  (int)&v36,
                  (int)&v37,
                  (int)v37);
  CommandOutput::error(v5, &v40, (unsigned __int64 *)&v37);
  v19 = (int)v38;
  v18 = v37;
  if ( v37 != v38 )
    do
      v22 = (int *)(*(_DWORD *)v18 - 12);
      if ( v22 != &dword_28898C0 )
        v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
        else
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v18 += 8;
    while ( v18 != (char *)v19 );
    v18 = v37;
  if ( v18 )
    operator delete(v18);
  v23 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v36 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v35 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v15 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v40 - 4);
    goto LABEL_62;
}


int __fastcall Command::getPlayerFromOrigin(Command *this, const CommandOrigin *a2)
{
  Command *v2; // r4@1
  int v3; // r0@1
  int result; // r0@2

  v2 = this;
  v3 = (*(int (**)(void))(*(_DWORD *)this + 32))();
  if ( (*(int (**)(void))(*(_DWORD *)v3 + 488))() == 319 )
    result = (*(int (__fastcall **)(Command *))(*(_DWORD *)v2 + 32))(v2);
  else
    result = 0;
  return result;
}


void __fastcall Command::getCommandName(Command *this, int a2)
{
  Command *v2; // r4@1
  __int64 v3; // kr00_8@1
  char v4; // [sp+4h] [bp-14h]@1

  v2 = this;
  v3 = *(_QWORD *)(a2 + 8);
  CommandRegistry::Symbol::Symbol((CommandRegistry::Symbol *)&v4, HIDWORD(v3));
  CommandRegistry::symbolToString((int)v2, v3, (int)&v4);
}


signed int __fastcall Command::validRange(Command *this, int a2, int a3, int a4, CommandOutput *a5)
{
  _DWORD *v5; // r9@1
  int v6; // r5@1
  int v7; // r4@1
  Command *v8; // r7@1
  char *v9; // r4@2
  int v10; // r6@2
  unsigned int *v11; // r2@4
  signed int v12; // r1@6
  int *v13; // r0@12
  void *v14; // r0@17
  void *v15; // r0@18
  void *v16; // r0@19
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  char *v19; // r4@25
  int v20; // r6@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  int *v23; // r0@35
  void *v24; // r0@40
  void *v25; // r0@41
  unsigned int *v27; // r2@45
  signed int v28; // r1@47
  unsigned int *v29; // r2@49
  signed int v30; // r1@51
  unsigned int *v31; // r2@53
  signed int v32; // r1@55
  unsigned int *v33; // r2@57
  signed int v34; // r1@59
  int v35; // [sp+4h] [bp-6Ch]@25
  int v36; // [sp+Ch] [bp-64h]@25
  char *v37; // [sp+14h] [bp-5Ch]@25
  char *v38; // [sp+18h] [bp-58h]@25
  char *v39; // [sp+1Ch] [bp-54h]@25
  int v40; // [sp+24h] [bp-4Ch]@25
  int v41; // [sp+28h] [bp-48h]@2
  int v42; // [sp+30h] [bp-40h]@2
  char *v43; // [sp+38h] [bp-38h]@2
  char *v44; // [sp+3Ch] [bp-34h]@2
  char *v45; // [sp+40h] [bp-30h]@2
  int v46; // [sp+48h] [bp-28h]@2

  v5 = (_DWORD *)a4;
  v6 = a3;
  v7 = a2;
  v8 = this;
  if ( (signed int)this < a2 )
  {
    sub_21E94B4((void **)&v46, "commands.generic.num.tooSmall");
    CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v41, (int)v8);
    CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v42, v7);
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v43 = (char *)operator new(0x10u);
    v45 = v43 + 16;
    v44 = (char *)std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v41,
                    (int)&v43,
                    (int)v43);
    CommandOutput::error(v5, &v46, (unsigned __int64 *)&v43);
    v10 = (int)v44;
    v9 = v43;
    if ( v43 != v44 )
    {
      do
      {
        v13 = (int *)(*(_DWORD *)v9 - 12);
        if ( v13 != &dword_28898C0 )
        {
          v11 = (unsigned int *)(*(_DWORD *)v9 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          }
          else
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        }
        v9 += 8;
      }
      while ( v9 != (char *)v10 );
      v9 = v43;
    }
    if ( v9 )
      operator delete(v9);
    v14 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v42 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      else
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v41 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) == &dword_28898C0 )
      return 0;
    v17 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
      __dmb();
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      goto LABEL_66;
LABEL_65:
    v18 = (*v17)--;
LABEL_66:
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
    return 0;
  }
  if ( (signed int)this > a3 )
    sub_21E94B4((void **)&v40, "commands.generic.num.tooBig");
    CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v35, (int)v8);
    CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v36, v6);
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v37 = (char *)operator new(0x10u);
    v39 = v37 + 16;
    v38 = (char *)std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v35,
                    (int)&v37,
                    (int)v37);
    CommandOutput::error(v5, &v40, (unsigned __int64 *)&v37);
    v20 = (int)v38;
    v19 = v37;
    if ( v37 != v38 )
        v23 = (int *)(*(_DWORD *)v19 - 12);
        if ( v23 != &dword_28898C0 )
          v21 = (unsigned int *)(*(_DWORD *)v19 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
        v19 += 8;
      while ( v19 != (char *)v20 );
      v19 = v37;
    if ( v19 )
      operator delete(v19);
    v24 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v36 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v25 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v35 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v16 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) == &dword_28898C0 )
    v17 = (unsigned int *)(v40 - 4);
    goto LABEL_65;
  return 1;
}


signed int __fastcall Command::validItemInstance(Command *this, const ItemInstance *a2, int a3, CommandOutput *a4)
{
  Command *v4; // r5@1
  _DWORD *v5; // r4@1
  const ItemInstance *v6; // r6@1
  char *v7; // r4@3
  int v8; // r6@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  int *v11; // r0@13
  void *v12; // r0@18
  void *v13; // r0@19
  void *v14; // r0@20
  int (*v16)(void); // r2@24
  int v17; // r0@25
  Command *v18; // r6@28
  int v19; // r0@28
  char *v20; // r4@29
  int v21; // r6@29
  unsigned int *v22; // r2@31
  signed int v23; // r1@33
  int *v24; // r0@39
  void *v25; // r0@44
  void *v26; // r0@45
  unsigned int *v27; // r2@47
  signed int v28; // r1@49
  unsigned int *v29; // r2@51
  signed int v30; // r1@53
  unsigned int *v31; // r2@55
  signed int v32; // r1@57
  unsigned int *v33; // r2@75
  signed int v34; // r1@77
  unsigned int *v35; // r2@79
  signed int v36; // r1@81
  CommandOutput *v37; // [sp+0h] [bp-68h]@0
  int v38; // [sp+4h] [bp-64h]@29
  int v39; // [sp+8h] [bp-60h]@29
  char *v40; // [sp+10h] [bp-58h]@29
  char *v41; // [sp+14h] [bp-54h]@29
  char *v42; // [sp+18h] [bp-50h]@29
  int v43; // [sp+20h] [bp-48h]@29
  int v44; // [sp+24h] [bp-44h]@3
  int v45; // [sp+28h] [bp-40h]@3
  char *v46; // [sp+30h] [bp-38h]@3
  char *v47; // [sp+34h] [bp-34h]@3
  char *v48; // [sp+38h] [bp-30h]@3
  int v49; // [sp+40h] [bp-28h]@3

  v4 = this;
  v5 = (_DWORD *)a3;
  v6 = a2;
  if ( !*((_BYTE *)this + 14) || ItemInstance::isNull(this) == 1 )
  {
    sub_21E94B4((void **)&v49, "commands.give.item.notFound");
    ItemInstance::getRawNameId((ItemInstance *)&v44, (int)v4);
    CommandOutputParameter::CommandOutputParameter(&v45, &v44);
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v46 = (char *)operator new(8u);
    v48 = v46 + 8;
    v47 = (char *)std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v45,
                    (int)&v46,
                    (int)v46);
    CommandOutput::error(v5, &v49, (unsigned __int64 *)&v46);
    v8 = (int)v47;
    v7 = v46;
    if ( v46 != v47 )
    {
      do
      {
        v11 = (int *)(*(_DWORD *)v7 - 12);
        if ( v11 != &dword_28898C0 )
        {
          v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
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
            j_j_j_j__ZdlPv_9(v11);
        }
        v7 += 8;
      }
      while ( v7 != (char *)v8 );
      v7 = v46;
    }
    if ( v7 )
      operator delete(v7);
    v12 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v45 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
      else
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v44 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) == &dword_28898C0 )
      return 0;
    v27 = (unsigned int *)(v49 - 4);
    if ( &pthread_create )
      __dmb();
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      goto LABEL_64;
LABEL_63:
    v28 = (*v27)--;
LABEL_64:
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
    return 0;
  }
  if ( v6 == (const ItemInstance *)1 )
    ItemInstance::getAuxValue(v4);
    if ( *(_DWORD *)v4 )
      v16 = *(int (**)(void))(**(_DWORD **)v4 + 144);
    else
      v17 = *((_DWORD *)v4 + 1);
      if ( !v17 )
        goto LABEL_29;
      v16 = *(int (**)(void))(*(_DWORD *)v17 + 108);
    if ( v16() )
      goto LABEL_28;
LABEL_29:
    sub_21E94B4((void **)&v43, "commands.give.item.invalid");
    ItemInstance::getRawNameId((ItemInstance *)&v38, (int)v4);
    CommandOutputParameter::CommandOutputParameter(&v39, &v38);
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v40 = (char *)operator new(8u);
    v42 = v40 + 8;
    v41 = (char *)std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v39,
                    (int)&v40,
                    (int)v40);
    CommandOutput::error(v5, &v43, (unsigned __int64 *)&v40);
    v21 = (int)v41;
    v20 = v40;
    if ( v40 != v41 )
        v24 = (int *)(*(_DWORD *)v20 - 12);
        if ( v24 != &dword_28898C0 )
          v22 = (unsigned int *)(*(_DWORD *)v20 - 4);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        v20 += 8;
      while ( v20 != (char *)v21 );
      v20 = v40;
    if ( v20 )
      operator delete(v20);
    v25 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v39 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v38 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v14 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) == &dword_28898C0 )
    v27 = (unsigned int *)(v43 - 4);
    goto LABEL_63;
LABEL_28:
  v18 = (Command *)*((_BYTE *)v4 + 14);
  v19 = ItemInstance::getMaxStackSize(v4);
  return Command::validRange(v18, 1, v19, (int)v5, v37);
}


signed int __fastcall Command::validData(Command *this, int a2, unsigned __int8 *a3, CommandOutput *a4)
{
  _BYTE *v4; // r5@1
  char v5; // r6@1
  signed int v6; // r4@1
  CommandOutput *v8; // [sp+0h] [bp-10h]@0

  v4 = (_BYTE *)a2;
  v5 = (char)this;
  v6 = 0;
  if ( Command::validRange(this, 0, 15, (int)a3, v8) == 1 )
  {
    *v4 = v5;
    v6 = 1;
  }
  return v6;
}


void __fastcall Command::run(Command *this, const CommandOrigin *a2, CommandOutput *a3)
{
  Command::run(this, a2, a3);
}


_BOOL4 __fastcall Command::hasFlag(int a1, char a2)
{
  return (unsigned __int8)(*(_BYTE *)(a1 + 17) & a2) != 0;
}


void __fastcall Command::getCommandName(Command *this, int a2)
{
  Command::getCommandName(this, a2);
}
