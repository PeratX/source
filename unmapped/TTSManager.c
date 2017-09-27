

int __fastcall TTSManager::clearAllTTSEvents(TTSManager *this)
{
  TTSManager *v1; // r9@1
  __int64 v2; // kr00_8@1
  int v3; // r4@2
  int v4; // r6@3
  unsigned int *v5; // r1@4
  unsigned int v6; // r0@6
  unsigned int *v7; // r5@10
  unsigned int v8; // r0@12
  void *v9; // r0@19

  v1 = this;
  v2 = *(_QWORD *)this;
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      v4 = *(_DWORD *)(v3 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 == 1 )
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v3 += 8;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 1) = v2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v9 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v9 = &ServiceLocator<AppPlatform>::mDefaultService;
  return (*(int (**)(void))(**(_DWORD **)v9 + 608))();
}


int __fastcall TTSManager::getNextTTSEvent(TTSManager *this, _DWORD **a2)
{
  _DWORD *v2; // r2@1
  int v3; // r3@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@4

  v2 = *a2;
  *(_DWORD *)this = **a2;
  v3 = v2[1];
  *((_DWORD *)this + 1) = v3;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
      v2 = *a2;
    }
    else
      ++*v4;
  }
  return std::vector<std::shared_ptr<TTSEvent>,std::allocator<std::shared_ptr<TTSEvent>>>::_M_erase((int)a2, (int)v2);
}


signed int __fastcall TTSManager::ttsEventQueued(TTSManager *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *(_QWORD *)this;
  result = 0;
  if ( (_DWORD)v1 != HIDWORD(v1) )
    result = 1;
  return result;
}


void __fastcall TTSManager::tick(TTSManager *this)
{
  TTSManager *v1; // r5@1
  void *v2; // r0@3
  int v3; // r4@6
  unsigned int *v4; // r1@7
  unsigned int v5; // r0@9
  unsigned int *v6; // r6@13
  unsigned int v7; // r0@15
  TTSEvent **v8; // r1@20
  int v9; // r4@22
  __int64 v10; // r8@24
  unsigned int *v11; // r0@25
  unsigned int v12; // r1@27
  _DWORD *v13; // r0@30
  size_t v14; // r2@30
  AppPlatform **v15; // r0@33
  void *v16; // r0@37
  int v17; // r7@39
  int v18; // r6@39
  void (__fastcall *v19)(int, int *); // r4@39
  _DWORD *v20; // r0@39
  void *v21; // r0@39
  void *v22; // r0@40
  int v23; // r6@41
  unsigned int *v24; // r0@43
  unsigned int v25; // r1@45
  unsigned int *v26; // r1@49
  unsigned int v27; // r0@51
  unsigned int *v28; // r4@55
  unsigned int v29; // r0@57
  unsigned int *v30; // r1@64
  unsigned int v31; // r0@66
  unsigned int *v32; // r4@70
  unsigned int v33; // r0@72
  unsigned int *v34; // r2@78
  signed int v35; // r1@80
  unsigned int *v36; // r2@82
  signed int v37; // r1@84
  int v38; // [sp+4h] [bp-34h]@39
  int v39; // [sp+8h] [bp-30h]@39

  v1 = this;
  if ( *((_DWORD *)this + 3) )
  {
    v2 = *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) ? ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) : &ServiceLocator<AppPlatform>::mDefaultService;
    if ( !(*(int (**)(void))(**(_DWORD **)v2 + 612))() )
    {
      *((_DWORD *)v1 + 3) = 0;
      v3 = *((_DWORD *)v1 + 4);
      *((_DWORD *)v1 + 4) = 0;
      if ( v3 )
      {
        v4 = (unsigned int *)(v3 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 == 1 )
          v6 = (unsigned int *)(v3 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
          if ( &pthread_create )
          {
            __dmb();
            do
              v7 = __ldrex(v6);
            while ( __strex(v7 - 1, v6) );
          }
          else
            v7 = (*v6)--;
          if ( v7 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
      }
    }
  }
  v8 = (TTSEvent **)*(_QWORD *)v1;
  if ( v8 != (TTSEvent **)(*(_QWORD *)v1 >> 32) )
    if ( *((_DWORD *)v1 + 3) )
      v9 = TTSEvent::getPriority(*v8);
      if ( v9 >= TTSEvent::getPriority(*((TTSEvent **)v1 + 3)) )
        return;
      v8 = *(TTSEvent ***)v1;
    v10 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 >> 32 )
      v11 = (unsigned int *)(HIDWORD(v10) + 4);
      if ( &pthread_create )
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 + 1, v11) );
        v8 = *(TTSEvent ***)v1;
      else
        ++*v11;
    std::vector<std::shared_ptr<TTSEvent>,std::allocator<std::shared_ptr<TTSEvent>>>::_M_erase((int)v1, (int)v8);
    v13 = *(_DWORD **)TTSEvent::getText((TTSEvent *)v10);
    v14 = *(v13 - 3);
    if ( v14 != *((_DWORD *)Util::EMPTY_STRING - 3) || memcmp(v13, Util::EMPTY_STRING, v14) )
      v15 = (AppPlatform **)(*(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) ? ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) : &ServiceLocator<AppPlatform>::mDefaultService);
      if ( AppPlatform::getTextToSpeechEnabled(*v15) == 1 )
        if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
          v16 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
          v16 = &ServiceLocator<AppPlatform>::mDefaultService;
        v17 = *(_DWORD *)v16;
        v18 = *((_DWORD *)v1 + 5);
        v19 = *(void (__fastcall **)(int, int *))(**(_DWORD **)v16 + 600);
        v20 = (_DWORD *)TTSEvent::getText((TTSEvent *)v10);
        Util::removeAllColorCodes((const void **)&v38, v20);
        UIProfanityContext::filterProfanityFromString();
        v19(v17, &v39);
        v21 = (void *)(v39 - 12);
        if ( (int *)(v39 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v39 - 4);
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v21);
        v22 = (void *)(v38 - 12);
        if ( (int *)(v38 - 12) != &dword_28898C0 )
          v36 = (unsigned int *)(v38 - 4);
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v22);
        *((_DWORD *)v1 + 3) = v10;
        v23 = *((_DWORD *)v1 + 4);
        if ( HIDWORD(v10) != v23 )
          if ( HIDWORD(v10) )
            v24 = (unsigned int *)(HIDWORD(v10) + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v25 = __ldrex(v24);
              while ( __strex(v25 + 1, v24) );
              v23 = *((_DWORD *)v1 + 4);
            }
            else
              ++*v24;
          if ( v23 )
            v26 = (unsigned int *)(v23 + 4);
                v27 = __ldrex(v26);
              while ( __strex(v27 - 1, v26) );
              v27 = (*v26)--;
            if ( v27 == 1 )
              v28 = (unsigned int *)(v23 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v29 = __ldrex(v28);
                while ( __strex(v29 - 1, v28) );
              }
              else
                v29 = (*v28)--;
              if ( v29 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
          *((_DWORD *)v1 + 4) = HIDWORD(v10);
    if ( HIDWORD(v10) )
      v30 = (unsigned int *)(HIDWORD(v10) + 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        v32 = (unsigned int *)(HIDWORD(v10) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 8))(HIDWORD(v10));
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v10) + 12))(HIDWORD(v10));
}


void __fastcall TTSManager::tick(TTSManager *this)
{
  TTSManager::tick(this);
}


unsigned int __fastcall TTSManager::enqueueTTSEvent(int a1, int *a2)
{
  int v2; // r4@1
  __int64 v3; // r0@1
  unsigned int result; // r0@2
  int v5; // r4@4
  unsigned int *v6; // r1@5
  unsigned int *v7; // r5@11
  int v8; // [sp+0h] [bp-20h]@1
  unsigned int v9; // [sp+4h] [bp-1Ch]@1
  int v10; // [sp+8h] [bp-18h]@2
  char v11; // [sp+Ch] [bp-14h]@1

  v2 = a1;
  v8 = 1;
  std::__shared_ptr<TTSEvent,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<TTSEvent>,std::string const&,TTSEventPriority>(
    (int)&v9,
    (int)&v11,
    a2,
    &v8);
  v3 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = std::vector<std::shared_ptr<TTSEvent>,std::allocator<std::shared_ptr<TTSEvent>>>::_M_emplace_back_aux<std::shared_ptr<TTSEvent>>(
               (_QWORD *)v2,
               (int)&v9);
  }
  else
    *(_QWORD *)v3 = v9;
    HIDWORD(v3) = v10;
    v10 = 0;
    *(_DWORD *)(v3 + 4) = HIDWORD(v3);
    result = v3 + 8;
    v9 = 0;
    *(_DWORD *)(v2 + 4) = result;
  v5 = v10;
  if ( v10 )
    v6 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v6);
      while ( __strex(result - 1, v6) );
    }
    else
      result = (*v6)--;
    if ( result == 1 )
      v7 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v7);
        while ( __strex(result - 1, v7) );
      }
      else
        result = (*v7)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}


void __fastcall TTSManager::removeTTSEvent(unsigned __int64 *a1, int *a2)
{
  unsigned __int64 *v2; // r8@1
  int v3; // r7@1
  int v4; // r9@1
  void *v5; // r0@1
  int v6; // r0@2
  int v7; // r5@3
  int v8; // r6@4
  int v9; // r0@10
  void *v10; // r0@22
  void *v11; // r0@23
  int v12; // r4@25
  int (**v13)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r11@25
  unsigned __int64 *v14; // r1@27
  signed int v15; // r0@29
  unsigned __int64 v16; // kr08_8@30
  int v17; // r10@30
  unsigned int *v18; // r1@31
  unsigned int v19; // r0@33
  int (**v20)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r5@37
  unsigned int *v21; // r11@37
  unsigned int v22; // r0@39
  void *v23; // r0@45
  void *v24; // r0@46
  void *v25; // r0@47
  unsigned int *v26; // r2@49
  signed int v27; // r1@51
  unsigned int *v28; // r2@53
  signed int v29; // r1@55
  unsigned int *v30; // r2@57
  signed int v31; // r1@59
  unsigned int *v32; // r2@65
  signed int v33; // r1@67
  unsigned int *v34; // r2@69
  signed int v35; // r1@71
  unsigned int *v36; // r2@73
  signed int v37; // r1@75
  int v38; // [sp+0h] [bp-40h]@1
  int v39; // [sp+4h] [bp-3Ch]@1
  int v40; // [sp+8h] [bp-38h]@1
  int v41; // [sp+Ch] [bp-34h]@1
  int v42; // [sp+10h] [bp-30h]@2
  int v43; // [sp+14h] [bp-2Ch]@2

  v2 = a1;
  v4 = *a1 >> 32;
  v3 = *a1;
  sub_119C854(&v38, a2);
  sub_119C854(&v39, &v38);
  sub_119C854(&v41, &v39);
  sub_119C854(&v40, &v41);
  v5 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v41 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    }
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  sub_119C854(&v42, &v40);
  sub_119C854(&v43, &v42);
  v6 = (v4 - v3) >> 5;
  if ( v6 >= 1 )
    v7 = v6 + 1;
    do
      v8 = v3;
      if ( sub_1075610((const void **)&v43, (unsigned __int64 *)v3) )
        goto LABEL_22;
      v8 = v3 + 8;
      if ( sub_1075610((const void **)&v43, (unsigned __int64 *)(v3 + 8)) )
      v8 = v3 + 16;
      if ( sub_1075610((const void **)&v43, (unsigned __int64 *)(v3 + 16)) )
      v8 = v3 + 24;
      if ( sub_1075610((const void **)&v43, (unsigned __int64 *)(v3 + 24)) )
      --v7;
      v3 += 32;
    while ( v7 > 1 );
  if ( 1 == (v4 - v3) >> 3 )
    v8 = v3;
LABEL_18:
    if ( !sub_1075610((const void **)&v43, (unsigned __int64 *)v8) )
      v8 = v4;
    goto LABEL_22;
  v9 = (v4 - v3) >> 3;
  if ( v9 == 2 )
    goto LABEL_16;
  if ( v9 != 3 )
    v8 = v4;
  v8 = v3;
  if ( !sub_1075610((const void **)&v43, (unsigned __int64 *)v3) )
    v8 = v3 + 8;
LABEL_16:
    if ( sub_1075610((const void **)&v43, (unsigned __int64 *)v8) )
      goto LABEL_22;
    v8 += 8;
    goto LABEL_18;
LABEL_22:
  v10 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v43 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v42 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  if ( v8 != v4 )
    v12 = v8;
    v13 = &pthread_create;
LABEL_27:
    v14 = (unsigned __int64 *)(v8 + 8);
    while ( 1 )
      v8 = (int)v14;
      if ( (unsigned __int64 *)v4 == v14 )
        break;
      v15 = sub_1075610((const void **)&v40, v14);
      v14 = (unsigned __int64 *)(v8 + 8);
      if ( !v15 )
      {
        v16 = *(_QWORD *)v8;
        *(_DWORD *)v8 = 0;
        *(_DWORD *)(v8 + 4) = 0;
        *(_DWORD *)v12 = v16;
        v17 = *(_DWORD *)(v12 + 4);
        *(_DWORD *)(v12 + 4) = HIDWORD(v16);
        if ( v17 )
        {
          v18 = (unsigned int *)(v17 + 4);
          if ( v13 )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          }
          else
            v19 = (*v18)--;
          if ( v19 == 1 )
            v20 = v13;
            v21 = (unsigned int *)(v17 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
            if ( v20 )
            {
              __dmb();
              do
                v22 = __ldrex(v21);
              while ( __strex(v22 - 1, v21) );
            }
            else
              v22 = (*v21)--;
            v13 = v20;
            if ( v22 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
        }
        v12 += 8;
        goto LABEL_27;
      }
    v4 = v12;
  v23 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v40 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  v24 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v39 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  std::vector<std::shared_ptr<TTSEvent>,std::allocator<std::shared_ptr<TTSEvent>>>::_M_erase((int)v2, v4);
  v25 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v38 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
}


int __fastcall TTSManager::TTSManager(int result, int a2)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = a2;
  return result;
}
