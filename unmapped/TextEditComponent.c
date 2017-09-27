

int __fastcall TextEditComponent::setTextEditComponentId(int result, __int16 a2)
{
  *(_WORD *)(result + 44) = a2;
  return result;
}


int __fastcall TextEditComponent::setMaxLength(int result, unsigned int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


void __fastcall TextEditComponent::~TextEditComponent(TextEditComponent *this)
{
  TextEditComponent *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  unsigned int *v5; // r2@3
  unsigned int v6; // r1@5
  int v7; // r0@10
  unsigned int *v8; // r2@11
  unsigned int v9; // r1@13
  unsigned int *v10; // r2@19
  signed int v11; // r1@21

  v1 = this;
  *(_DWORD *)this = &off_26D6F08;
  v2 = *((_DWORD *)this + 10);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 9);
  if ( v4 )
    v5 = (unsigned int *)(v4 + 8);
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
      v6 = (*v5)--;
    if ( v6 == 1 )
      (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v7 = *((_DWORD *)v1 + 7);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      (*(void (**)(void))(*(_DWORD *)v7 + 12))();
  UIComponent::~UIComponent(v1);
  operator delete((void *)v1);
}


int __fastcall TextEditComponent::setFont(int result, Font *a2)
{
  *(_DWORD *)(result + 20) = a2;
  return result;
}


signed int __fastcall TextEditComponent::handleTextCharEvent(int a1, int a2, const void **a3)
{
  const void **v3; // r4@1
  int v4; // r5@1
  signed int v5; // r6@1
  signed int v6; // r7@1
  int v7; // r0@2
  signed int v8; // r1@2
  signed int v9; // r2@2
  int v10; // r1@6
  void *v12; // r0@14
  int v14; // r0@18
  void *v15; // r0@18
  int v16; // r4@21
  unsigned int v17; // r0@22
  unsigned int *v18; // r7@22
  unsigned int v19; // r1@25
  unsigned int v20; // r2@26
  signed int v21; // r9@27
  int v22; // r8@28
  UIControl *v23; // r0@29
  int v28; // r6@32
  TextComponent *v29; // r0@33
  unsigned int *v30; // r2@37
  signed int v31; // r1@39
  unsigned int *v32; // r2@45
  signed int v33; // r1@47
  int v34; // r0@50
  int v37; // r0@51
  void *v38; // r0@51
  void *v39; // r0@53
  unsigned int v40; // r0@64
  unsigned int *v41; // r5@68
  unsigned int v42; // r0@70
  int v43; // r0@76
  void *v44; // r0@76
  void *v45; // r0@78
  unsigned int *v46; // r2@81
  signed int v47; // r1@83
  unsigned int *v48; // r2@89
  signed int v49; // r1@91
  int v50; // [sp+4h] [bp-44h]@76
  int v51; // [sp+8h] [bp-40h]@51
  int v52; // [sp+Ch] [bp-3Ch]@18
  int v53; // [sp+10h] [bp-38h]@9

  v3 = a3;
  v4 = a1;
  v5 = 0;
  v6 = 0;
  if ( *((_DWORD *)*a3 - 3) >= 1 )
  {
    v7 = *(_BYTE *)*a3;
    v8 = 0;
    v9 = 0;
    if ( v7 == 13 )
      v8 = 1;
    if ( v7 == 10 )
      v9 = 1;
    v10 = v8 | v9;
    if ( v7 == 8 )
      v5 = 1;
    v6 = v5;
    v5 = v10;
  }
  TextEditComponent::getText((TextEditComponent *)&v53, v4);
  _ZF = *(_BYTE *)(v4 + 13) == 0;
  if ( !*(_BYTE *)(v4 + 13) )
    _ZF = v5 == 1;
  if ( _ZF )
    v5 = 1;
    goto LABEL_14;
  if ( v6 == 1 )
    if ( *(_DWORD *)(v53 - 12) )
    {
      v14 = Util::utf8len(&v53, 1);
      Util::utf8substring((const void **)&v52, &v53, 0, v14 - 1);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v53, &v52);
      v15 = (void *)(v52 - 12);
      if ( (int *)(v52 - 12) != &dword_28898C0 )
      {
        v32 = (unsigned int *)(v52 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
        }
        else
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j_j__ZdlPv_9(v15);
      }
      TextEditComponent::setText(v4, (const void **)&v53);
      v5 = 2;
    }
    else
  else
    sub_DA7564((const void **)&v53, v3);
    if ( *(_BYTE *)(v4 + 12) )
      v16 = *(_DWORD *)(v4 + 28);
      if ( v16 )
        v17 = *(_DWORD *)(v16 + 4);
        v18 = (unsigned int *)(v16 + 4);
        while ( v17 )
          v19 = __ldrex(v18);
          if ( v19 == v17 )
          {
            v20 = __strex(v17 + 1, v18);
            v17 = v19;
            if ( !v20 )
            {
              __dmb();
              v21 = 1;
              if ( *v18 )
              {
                v22 = *(_DWORD *)(v4 + 24);
                if ( v22 )
                {
                  v23 = (UIControl *)UIComponent::getOwner((UIComponent *)v4);
                  _R0 = UIControl::getSize(v23);
                  __asm
                  {
                    VLDR            S18, [R0]
                    VLDR            S16, [R0,#4]
                  }
                  LOBYTE(_R0) = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id;
                  __dmb();
                  if ( !((unsigned __int8)_R0 & 1)
                    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id) )
                    type_id<UIComponent,TextComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
                    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id);
                  v28 = type_id<UIComponent,TextComponent>(void)::id[0];
                  if ( UIControl::_hasComponent((UIControl *)v22, type_id<UIComponent,TextComponent>(void)::id[0]) == 1 )
                    v29 = *(TextComponent **)(*(_DWORD *)(v22 + 108)
                                            + 4 * UIControl::_getComponentIndex((UIControl *)v22, v28));
                  else
                    v29 = 0;
                  v34 = TextComponent::getFontScale(v29);
                    VCVTR.S32.F32   S0, S18
                    VMOV            R2, S0
                  _R0 = Font::getTextHeight(*(float *)(v4 + 20), (int)&v53, _R2, v34, 1);
                    VMOV            S0, R0
                    VCVT.F32.S32    S0, S0
                    VCMPE.F32       S0, S16
                    VMRS            APSR_nzcv, FPSCR
                  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                    TextEditComponent::setText(v4, (const void **)&v53);
                    v21 = 0;
                    v5 = 3;
                    v37 = Util::utf8len(&v53, 1);
                    Util::utf8substring((const void **)&v51, &v53, 0, v37 - 1);
                    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                      &v53,
                      &v51);
                    v38 = (void *)(v51 - 12);
                    if ( (int *)(v51 - 12) != &dword_28898C0 )
                    {
                      v48 = (unsigned int *)(v51 - 4);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v49 = __ldrex(v48);
                        while ( __strex(v49 - 1, v48) );
                      }
                      else
                        v49 = (*v48)--;
                      if ( v49 <= 0 )
                        j_j_j_j_j__ZdlPv_9(v38);
                    }
                    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
                      v39 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
                    else
                      v39 = &ServiceLocator<AppPlatform>::mDefaultService;
                    (*(void (**)(void))(**(_DWORD **)v39 + 356))();
                    v5 = 4;
                    if ( !v16 )
                      goto LABEL_14;
                }
              }
              if ( &pthread_create )
                __dmb();
                do
                  v40 = __ldrex(v18);
                while ( __strex(v40 - 1, v18) );
              else
                v40 = (*v18)--;
              if ( v40 == 1 )
                v41 = (unsigned int *)(v16 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
                if ( &pthread_create )
                  do
                    v42 = __ldrex(v41);
                  while ( __strex(v42 - 1, v41) );
                else
                  v42 = (*v41)--;
                if ( v42 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
              if ( !v21 )
                goto LABEL_14;
              break;
            }
          }
          else
            __clrex();
    else if ( Util::utf8len(&v53, 1) <= *(_DWORD *)(v4 + 8) )
      v5 = 3;
      goto LABEL_14;
    v43 = Util::utf8len(&v53, 1);
    Util::utf8substring((const void **)&v50, &v53, 0, v43 - 1);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v53, &v50);
    v44 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v50 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
      else
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j_j__ZdlPv_9(v44);
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v45 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v45 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (**)(void))(**(_DWORD **)v45 + 356))();
    v5 = 4;
LABEL_14:
  v12 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v53 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  return v5;
}


int __fastcall TextEditComponent::getLabelPropertyBag(TextEditComponent *this)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r6@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  int v6; // r5@7
  bool v7; // zf@7
  unsigned int v8; // r0@13
  unsigned int *v10; // r6@18
  unsigned int v11; // r0@20

  v1 = *((_DWORD *)this + 7);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    while ( v2 )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
      {
        v5 = __strex(v2 + 1, v3);
        v2 = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = 0;
          v7 = *v3 == 0;
          if ( *v3 )
          {
            this = (TextEditComponent *)*((_DWORD *)this + 6);
            v7 = this == 0;
          }
          if ( !v7 )
            v6 = UIControl::getPropertyBag(this);
          if ( &pthread_create )
            __dmb();
            do
              v8 = __ldrex(v3);
            while ( __strex(v8 - 1, v3) );
          else
            v8 = (*v3)--;
          if ( v8 == 1 )
            v10 = (unsigned int *)(v1 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
            if ( &pthread_create )
            {
              __dmb();
              do
                v11 = __ldrex(v10);
              while ( __strex(v11 - 1, v10) );
            }
            else
              v11 = (*v10)--;
            if ( v11 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
          return v6;
        }
      }
      else
        __clrex();
    }
  }
  return 0;
}


int __fastcall TextEditComponent::selectControl(int result)
{
  int v1; // r8@0
  int v2; // r5@1
  int v3; // r4@1
  unsigned int *v4; // r6@2
  int v5; // r1@5
  unsigned int v6; // r2@6
  bool v7; // zf@7
  char v8; // r0@10
  int v9; // r7@13
  TextComponent *v10; // r7@14
  int v11; // r8@15
  unsigned int *v12; // r5@22
  char v13; // [sp+7h] [bp-21h]@15
  int v14; // [sp+8h] [bp-20h]@15
  const char *v15; // [sp+Ch] [bp-1Ch]@15

  v2 = result;
  v3 = *(_DWORD *)(result + 28);
  if ( v3 )
  {
    result = *(_DWORD *)(v3 + 4);
    v4 = (unsigned int *)(v3 + 4);
    while ( result )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == result )
      {
        v6 = __strex(result + 1, v4);
        result = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = *v4 == 0;
          if ( *v4 )
          {
            v1 = *(_DWORD *)(v2 + 24);
            v7 = v1 == 0;
          }
          if ( !v7 )
            v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id;
            __dmb();
            if ( !(v8 & 1)
              && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id) )
            {
              type_id<UIComponent,TextComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
              j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id);
            }
            v9 = type_id<UIComponent,TextComponent>(void)::id[0];
            if ( UIControl::_hasComponent((UIControl *)v1, type_id<UIComponent,TextComponent>(void)::id[0]) == 1 )
              v10 = *(TextComponent **)(*(_DWORD *)(v1 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v1, v9));
              if ( v10 )
              {
                TextEditComponent::_hidePlaceHolderControl((TextEditComponent *)v2);
                v11 = UIControl::getPropertyBag((UIControl *)v1);
                gsl::basic_string_span<char const,-1>::remove_z<20u>((int)&v14, (int)"#text_edit_selected");
                v13 = 1;
                UIPropertyBag::set<bool>(v11, v14, v15, &v13);
                TextComponent::setShouldRenderCaret(v10, 1);
                *(_BYTE *)(v2 + 47) = 1;
              }
          if ( &pthread_create )
            do
              result = __ldrex(v4);
            while ( __strex(result - 1, v4) );
          else
            result = (*v4)--;
          if ( result == 1 )
            v12 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v12);
              while ( __strex(result - 1, v12) );
            else
              result = (*v12)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


int __fastcall TextEditComponent::setTextType(int result, int a2)
{
  *(_DWORD *)(result + 16) = a2;
  return result;
}


unsigned int __fastcall TextEditComponent::getTextPos(TextEditComponent *this, int a2)
{
  int v2; // r4@1
  TextEditComponent *v3; // r5@1
  unsigned int v4; // r0@2
  unsigned int *v5; // r6@2
  unsigned int v6; // r2@5
  unsigned int v7; // r3@6
  UIControl *v8; // r0@7
  bool v9; // zf@7
  UIControl *v10; // r0@10
  unsigned int result; // r0@12
  unsigned int v12; // r0@16
  unsigned int *v13; // r5@20
  unsigned int *v14; // r6@26
  unsigned int v15; // r0@28

  v2 = *(_DWORD *)(a2 + 28);
  v3 = this;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 4);
    v5 = (unsigned int *)(v2 + 4);
    while ( v4 )
    {
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == v4 )
      {
        v7 = __strex(v4 + 1, v5);
        v4 = v6;
        if ( !v7 )
        {
          __dmb();
          v8 = (UIControl *)*v5;
          v9 = *v5 == 0;
          if ( *v5 )
          {
            v8 = *(UIControl **)(a2 + 24);
            v9 = v8 == 0;
          }
          if ( !v9 )
            v10 = UIControl::getPosition(v8);
            *(_DWORD *)v3 = *(_DWORD *)v10;
            *((_DWORD *)v3 + 1) = *((_DWORD *)v10 + 1);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = __ldrex(v5);
              while ( __strex(result - 1, v5) );
            }
            else
              result = (*v5)--;
            if ( result == 1 )
              v13 = (unsigned int *)(v2 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
              if ( &pthread_create )
              {
                __dmb();
                do
                  result = __ldrex(v13);
                while ( __strex(result - 1, v13) );
              }
              else
                result = (*v13)--;
              if ( result == 1 )
                result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
            return result;
          if ( &pthread_create )
            __dmb();
            do
              v12 = __ldrex(v5);
            while ( __strex(v12 - 1, v5) );
          else
            v12 = (*v5)--;
          if ( v12 == 1 )
            v14 = (unsigned int *)(v2 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
              v15 = (*v14)--;
            if ( v15 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
          break;
        }
      }
      else
        __clrex();
    }
  }
  result = 0;
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  return result;
}


int __fastcall TextEditComponent::updateCaretBlink(int result, float a2)
{
  int v2; // r8@0
  int v3; // r4@1
  float v4; // r5@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r6@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  bool v9; // zf@7
  char v10; // r0@10
  int v11; // r7@13
  TextComponent *v12; // r0@14
  unsigned int *v13; // r5@22

  v3 = *(_DWORD *)(result + 28);
  v4 = a2;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    v6 = (unsigned int *)(v3 + 4);
    while ( v5 )
    {
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
      {
        v8 = __strex(v5 + 1, v6);
        v5 = v7;
        if ( !v8 )
        {
          __dmb();
          v9 = *v6 == 0;
          if ( *v6 )
          {
            v2 = *(_DWORD *)(result + 24);
            v9 = v2 == 0;
          }
          if ( !v9 )
            v10 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id;
            __dmb();
            if ( !(v10 & 1)
              && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id) )
            {
              type_id<UIComponent,TextComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
              j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id);
            }
            v11 = type_id<UIComponent,TextComponent>(void)::id[0];
            if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,TextComponent>(void)::id[0]) == 1 )
              v12 = *(TextComponent **)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v11));
              if ( v12 )
                TextComponent::updateCaretBlink(v12, v4);
          if ( &pthread_create )
            do
              result = __ldrex(v6);
            while ( __strex(result - 1, v6) );
          else
            result = (*v6)--;
          if ( result == 1 )
            v13 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v13);
              while ( __strex(result - 1, v13) );
            else
              result = (*v13)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


int __fastcall TextEditComponent::clone(TextEditComponent *this, UIControl *a2, UIControl *a3)
{
  TextEditComponent *v3; // r8@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  void *v6; // r4@1
  int v7; // r0@1
  unsigned int *v8; // r2@2
  unsigned int v9; // r1@4
  unsigned int v10; // r0@9
  int result; // r0@9

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x30u);
  TextEditComponent::TextEditComponent((UIComponent *)v6, v4);
  *((_DWORD *)v6 + 2) = *((_DWORD *)v5 + 2);
  *((_BYTE *)v6 + 12) = *((_BYTE *)v5 + 12);
  *((_DWORD *)v6 + 4) = *((_DWORD *)v5 + 4);
  *((_DWORD *)v6 + 5) = *((_DWORD *)v5 + 5);
  *((_DWORD *)v6 + 6) = 0;
  v7 = *((_DWORD *)v6 + 7);
  if ( v7 )
  {
    v8 = (unsigned int *)(v7 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      (*(void (**)(void))(*(_DWORD *)v7 + 12))();
  }
  *((_DWORD *)v6 + 7) = 0;
  EntityInteraction::setInteractText((int *)v6 + 10, (int *)v5 + 10);
  v10 = *((_DWORD *)v5 + 11);
  *((_WORD *)v6 + 22) = v10;
  *((_BYTE *)v6 + 46) = v10 >> 16;
  result = *((_BYTE *)v5 + 13);
  *((_BYTE *)v6 + 13) = result;
  *(_DWORD *)v3 = v6;
  return result;
}


void __fastcall TextEditComponent::registerPropertyChangedNotifications(TextEditComponent *this)
{
  TextEditComponent::registerPropertyChangedNotifications(this);
}


int __fastcall TextEditComponent::_hidePlaceHolderControl(int result)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r6@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  bool v6; // zf@7
  unsigned int *v7; // r5@17

  v1 = *(_DWORD *)(result + 36);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    while ( v2 )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
      {
        v5 = __strex(v2 + 1, v3);
        v2 = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = *v3 == 0;
          if ( *v3 )
          {
            result = *(_DWORD *)(result + 32);
            v6 = result == 0;
          }
          if ( !v6 )
            UIControl::setVisible((UIControl *)result, 0, 1, 1);
          if ( &pthread_create )
            __dmb();
            do
              result = __ldrex(v3);
            while ( __strex(result - 1, v3) );
          else
            result = (*v3)--;
          if ( result == 1 )
            v7 = (unsigned int *)(v1 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
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
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


int __fastcall TextEditComponent::getCaretHeightOffset(TextEditComponent *this)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r7@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  signed int v6; // r6@7
  int v7; // r5@8
  char v8; // r0@9
  int v9; // r6@12
  TextComponent *v10; // r0@13
  int result; // r0@18
  unsigned int v17; // r0@22
  unsigned int *v18; // r5@26
  unsigned int v19; // r0@28

  v1 = *((_DWORD *)this + 7);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    while ( v2 )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
      {
        v5 = __strex(v2 + 1, v3);
        v2 = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = 0;
          if ( *v3 )
          {
            v7 = *((_DWORD *)this + 6);
            if ( v7 )
            {
              v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id;
              __dmb();
              if ( !(v8 & 1)
                && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id) )
              {
                type_id<UIComponent,TextComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
                j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id);
              }
              v9 = type_id<UIComponent,TextComponent>(void)::id[0];
              if ( UIControl::_hasComponent((UIControl *)v7, type_id<UIComponent,TextComponent>(void)::id[0]) == 1
                && (v10 = *(TextComponent **)(*(_DWORD *)(v7 + 108)
                                            + 4 * UIControl::_getComponentIndex((UIControl *)v7, v9))) != 0 )
                _R0 = TextComponent::getCaretHeightOffset(v10);
                v6 = 1;
                __asm { VMOV            S16, R0 }
              else
                v6 = 0;
            }
          }
          if ( &pthread_create )
            __dmb();
            do
              v17 = __ldrex(v3);
            while ( __strex(v17 - 1, v3) );
          else
            v17 = (*v3)--;
          if ( v17 == 1 )
            v18 = (unsigned int *)(v1 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
            if ( &pthread_create )
              do
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
            else
              v19 = (*v18)--;
            if ( v19 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
          goto LABEL_16;
        }
      }
      else
        __clrex();
    }
  }
  v6 = 0;
LABEL_16:
  __asm { VLDR            S0, =0.0 }
  if ( !v6 )
    __asm { VMOVEQ.F32      S16, S0 }
  __asm { VMOV            R0, S16 }
  return result;
}


int __fastcall TextEditComponent::setConstrainedToRect(int result, bool a2)
{
  *(_BYTE *)(result + 12) = a2;
  return result;
}


signed int __fastcall TextEditComponent::isNumbersOnly(TextEditComponent *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 4);
  result = 0;
  if ( v1 == 2 )
    result = 1;
  return result;
}


int __fastcall TextEditComponent::reset(int result)
{
  *(_BYTE *)(result + 47) = 0;
  return result;
}


char *__fastcall TextEditComponent::getGridCollectionName(TextEditComponent *this)
{
  return (char *)this + 40;
}


int __fastcall TextEditComponent::setText(int result, const void **a2)
{
  int v2; // r8@0
  int v3; // r5@1
  const void **v4; // r6@1
  int v5; // r4@1
  unsigned int *v6; // r7@2
  int v7; // r1@5
  unsigned int v8; // r2@6
  bool v9; // zf@7
  char v10; // r0@10
  int v11; // r9@13
  UIComponent *v12; // r0@14
  int v13; // r0@15
  bool v14; // zf@15
  unsigned int *v15; // r5@26

  v3 = result;
  v4 = a2;
  v5 = *(_DWORD *)(result + 28);
  if ( v5 )
  {
    result = *(_DWORD *)(v5 + 4);
    v6 = (unsigned int *)(v5 + 4);
    while ( result )
    {
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == result )
      {
        v8 = __strex(result + 1, v6);
        result = v7;
        if ( !v8 )
        {
          __dmb();
          v9 = *v6 == 0;
          if ( *v6 )
          {
            v2 = *(_DWORD *)(v3 + 24);
            v9 = v2 == 0;
          }
          if ( !v9 )
            v10 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id;
            __dmb();
            if ( !(v10 & 1)
              && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id) )
            {
              type_id<UIComponent,TextComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
              j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id);
            }
            v11 = type_id<UIComponent,TextComponent>(void)::id[0];
            if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,TextComponent>(void)::id[0]) == 1 )
              v12 = *(UIComponent **)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v11));
              if ( v12 )
              {
                TextComponent::setText(v12, v4);
                v13 = *((_DWORD *)*v4 - 3);
                v14 = v13 == 0;
                if ( !v13 )
                  v14 = *(_BYTE *)(v3 + 47) == 0;
                if ( v14 )
                  TextEditComponent::_showPlaceHolderControl((TextEditComponent *)v3);
                else
                  TextEditComponent::_hidePlaceHolderControl((TextEditComponent *)v3);
              }
          if ( &pthread_create )
            do
              result = __ldrex(v6);
            while ( __strex(result - 1, v6) );
          else
            result = (*v6)--;
          if ( result == 1 )
            v15 = (unsigned int *)(v5 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v15);
              while ( __strex(result - 1, v15) );
            else
              result = (*v15)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


int __fastcall TextEditComponent::setEnabledNewline(int result, bool a2)
{
  *(_BYTE *)(result + 13) = a2;
  return result;
}


int __fastcall TextEditComponent::setPlaceHolderControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  result = *(_DWORD *)(v2 + 36);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 36) = v3;
  return result;
}


int __fastcall TextEditComponent::setCanBeDeselected(int result, bool a2)
{
  *(_BYTE *)(result + 46) = a2;
  return result;
}


int __fastcall TextEditComponent::setLabelControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int result; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10

  v2 = a1;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  result = *(_DWORD *)(v2 + 28);
  if ( result )
    v7 = (unsigned int *)(result + 8);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  *(_DWORD *)(v2 + 28) = v3;
  return result;
}


int __fastcall TextEditComponent::receive(UIComponent *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r6@0
  UIComponent *v8; // r4@1
  signed int v9; // r5@1
  bool v10; // zf@1
  UIControl *v11; // r0@5
  UIControl *v12; // r0@8
  UIControl *v14; // r0@11

  v8 = this;
  v9 = 1;
  v10 = a5 == 1;
  if ( a5 == 1 )
  {
    v7 = a7;
    v10 = (unsigned __int16)(a7 & 0xFF00) == 0;
  }
  if ( !v10 )
    return v9;
  v11 = (UIControl *)UIComponent::getOwner(this);
  if ( UIControl::getSelected(v11) == 1 )
    if ( v7 & 0x10000 )
    {
      if ( *((_BYTE *)v8 + 46) )
      {
        v12 = (UIControl *)UIComponent::getOwner(v8);
        UIControl::setSelected(v12, 0);
        return 0;
      }
      return 0;
    }
    return 1;
  if ( !(v7 & 0x1000000) )
  v14 = (UIControl *)UIComponent::getOwner(v8);
  UIControl::setSelected(v14, 1);
  return 0;
}


int *__fastcall TextEditComponent::getText(TextEditComponent *this, int a2)
{
  int v2; // r6@0
  int v3; // r4@1
  TextComponent *v4; // r5@1
  unsigned int v5; // r2@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r3@5
  unsigned int v8; // r7@6
  unsigned int v9; // r0@7
  bool v10; // zf@7
  char v11; // r0@10
  int v12; // r7@13
  int v13; // r1@14
  int *result; // r0@17
  unsigned int *v15; // r1@18
  unsigned int *v16; // r5@24

  v3 = *(_DWORD *)(a2 + 28);
  v4 = this;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    v6 = (unsigned int *)(v3 + 4);
    while ( v5 )
    {
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
      {
        v8 = __strex(v5 + 1, v6);
        v5 = v7;
        if ( !v8 )
        {
          __dmb();
          v9 = *v6;
          v10 = v9 == 0;
          if ( v9 )
          {
            v2 = *(_DWORD *)(a2 + 24);
            v10 = v2 == 0;
          }
          if ( !v10 )
            v11 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id;
            __dmb();
            if ( !(v11 & 1)
              && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id) )
            {
              type_id<UIComponent,TextComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
              j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id);
            }
            v12 = type_id<UIComponent,TextComponent>(void)::id[0];
            if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,TextComponent>(void)::id[0]) == 1 )
              v13 = *(_DWORD *)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v12));
              if ( v13 )
              {
                TextComponent::calculateUpdatedText(v4, v13);
                goto LABEL_18;
              }
          goto LABEL_17;
        }
      }
      else
        __clrex();
    }
  }
  v3 = 0;
LABEL_17:
  result = sub_DA73B4((int *)v4, (int *)&Util::EMPTY_STRING);
LABEL_18:
    v15 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
      do
        result = (int *)__ldrex(v15);
      while ( __strex((unsigned int)result - 1, v15) );
    else
      result = (int *)(*v15)--;
    if ( result == (int *)1 )
      v16 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
        __dmb();
        do
          result = (int *)__ldrex(v16);
        while ( __strex((unsigned int)result - 1, v16) );
        result = (int *)(*v16)--;
      if ( result == (int *)1 )
        result = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  return result;
}


void __fastcall TextEditComponent::~TextEditComponent(TextEditComponent *this)
{
  TextEditComponent::~TextEditComponent(this);
}


int __fastcall TextEditComponent::_showPlaceHolderControl(int result)
{
  int v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int *v3; // r6@2
  unsigned int v4; // r2@5
  unsigned int v5; // r3@6
  bool v6; // zf@7
  unsigned int *v7; // r5@17

  v1 = *(_DWORD *)(result + 36);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    while ( v2 )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
      {
        v5 = __strex(v2 + 1, v3);
        v2 = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = *v3 == 0;
          if ( *v3 )
          {
            result = *(_DWORD *)(result + 32);
            v6 = result == 0;
          }
          if ( !v6 )
            UIControl::setVisible((UIControl *)result, 1, 1, 1);
          if ( &pthread_create )
            __dmb();
            do
              result = __ldrex(v3);
            while ( __strex(result - 1, v3) );
          else
            result = (*v3)--;
          if ( result == 1 )
            v7 = (unsigned int *)(v1 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
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
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


void __fastcall TextEditComponent::registerPropertyChangedNotifications(TextEditComponent *this)
{
  UIControl *v1; // r8@0
  TextEditComponent *v2; // r5@1
  int v3; // r4@1
  unsigned int v4; // r0@2
  unsigned int *v5; // r6@2
  unsigned int v6; // r1@5
  unsigned int v7; // r2@6
  bool v8; // zf@7
  int v9; // r7@10
  Json::Value *v10; // r7@10
  Json::Value *v11; // r7@12
  char *v12; // r1@13
  char *v13; // r0@15
  int v14; // r7@16
  int v15; // r0@16
  unsigned int *v16; // r0@17
  unsigned int v17; // r1@19
  _DWORD *v18; // r0@22
  __int64 v19; // r1@22
  int v20; // r0@24
  unsigned int *v21; // r2@25
  unsigned int v22; // r1@27
  void *v23; // r0@32
  char *v24; // r0@33
  unsigned int v25; // r0@37
  unsigned int *v26; // r5@41
  unsigned int v27; // r0@43
  unsigned int *v28; // r2@49
  signed int v29; // r1@51
  unsigned int *v30; // r2@53
  signed int v31; // r1@55
  unsigned int *v32; // r2@57
  signed int v33; // r1@59
  _DWORD *v34; // [sp+4h] [bp-4Ch]@22
  __int64 v35; // [sp+Ch] [bp-44h]@22
  int v36; // [sp+14h] [bp-3Ch]@16
  int v37; // [sp+18h] [bp-38h]@16
  int v38; // [sp+20h] [bp-30h]@16
  char *v39; // [sp+28h] [bp-28h]@10
  char *v40; // [sp+2Ch] [bp-24h]@13
  char v41; // [sp+30h] [bp-20h]@13

  v2 = this;
  v3 = *((_DWORD *)this + 7);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 4);
    v5 = (unsigned int *)(v3 + 4);
    while ( v4 )
    {
      __dmb();
      v6 = __ldrex(v5);
      if ( v6 == v4 )
      {
        v7 = __strex(v4 + 1, v5);
        v4 = v6;
        if ( !v7 )
        {
          __dmb();
          v8 = *v5 == 0;
          if ( *v5 )
          {
            v1 = (UIControl *)*((_DWORD *)v2 + 6);
            v8 = v1 == 0;
          }
          if ( v8 )
            goto LABEL_75;
          v9 = UIControl::getPropertyBag(v1);
          sub_DA7364((void **)&v39, (const char *)&unk_257BC67);
          v10 = (Json::Value *)(v9 + 8);
          if ( Json::Value::isNull(v10)
            || Json::Value::isObject(v10) != 1
            || (v11 = (Json::Value *)Json::Value::operator[]((int)v10, "#property_field"),
                Json::Value::isString(v11) != 1) )
            v40 = v39;
            v12 = (char *)&unk_28898CC;
            v39 = (char *)&unk_28898CC;
          else
            jsonValConversion<std::string>::as((int *)&v40, (int)&v41, (int)v11);
            v12 = v39;
          v13 = v12 - 12;
          if ( (int *)(v12 - 12) != &dword_28898C0 )
            v28 = (unsigned int *)(v12 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v29 = __ldrex(v28);
              while ( __strex(v29 - 1, v28) );
            }
            else
              v29 = (*v28)--;
            if ( v29 <= 0 )
              j_j_j_j_j__ZdlPv_9(v13);
          v14 = UIControl::getPropertyBag(v1);
          sub_DA7364((void **)&v38, (const char *)&unk_257BC67);
          v36 = *((_DWORD *)v2 + 6);
          v15 = *((_DWORD *)v2 + 7);
          v37 = v15;
          if ( v15 )
            v16 = (unsigned int *)(v15 + 8);
                v17 = __ldrex(v16);
              while ( __strex(v17 + 1, v16) );
              ++*v16;
          v18 = operator new(4u);
          LODWORD(v19) = sub_C49CF4;
          *v18 = v2;
          HIDWORD(v19) = sub_C49C30;
          v34 = v18;
          v35 = v19;
          UIPropertyBag::registerForPropertyChangedNotification(v14, (int *)&v40, &v38, (int)&v36, (int)&v34);
          if ( (_DWORD)v35 )
            ((void (*)(void))v35)();
          v20 = v37;
          if ( v37 )
            v21 = (unsigned int *)(v37 + 8);
                v22 = __ldrex(v21);
              while ( __strex(v22 - 1, v21) );
              v22 = (*v21)--;
            if ( v22 == 1 )
              (*(void (**)(void))(*(_DWORD *)v20 + 12))();
          v23 = (void *)(v38 - 12);
          if ( (int *)(v38 - 12) != &dword_28898C0 )
            v30 = (unsigned int *)(v38 - 4);
                v31 = __ldrex(v30);
              while ( __strex(v31 - 1, v30) );
              v31 = (*v30)--;
            if ( v31 <= 0 )
              j_j_j_j_j__ZdlPv_9(v23);
          v24 = v40 - 12;
          if ( (int *)(v40 - 12) != &dword_28898C0 )
            v32 = (unsigned int *)(v40 - 4);
                v33 = __ldrex(v32);
              while ( __strex(v33 - 1, v32) );
              v33 = (*v32)--;
            if ( v33 <= 0 )
              j_j_j_j_j__ZdlPv_9(v24);
          if ( v3 )
LABEL_75:
                v25 = __ldrex(v5);
              while ( __strex(v25 - 1, v5) );
              v25 = (*v5)--;
            if ( v25 == 1 )
              v26 = (unsigned int *)(v3 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v27 = __ldrex(v26);
                while ( __strex(v27 - 1, v26) );
              }
              else
                v27 = (*v26)--;
              if ( v27 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return;
        }
      }
      else
        __clrex();
    }
  }
}


UIComponent *__fastcall TextEditComponent::TextEditComponent(UIComponent *a1, UIControl *a2)
{
  UIComponent *v2; // r4@1

  v2 = a1;
  UIComponent::UIComponent(a1, a2);
  *(_DWORD *)v2 = &off_26D6F08;
  *((_DWORD *)v2 + 2) = 128;
  *((_BYTE *)v2 + 12) = 0;
  *((_BYTE *)v2 + 13) = 0;
  *((_DWORD *)v2 + 4) = 0;
  *((_DWORD *)v2 + 6) = 0;
  *((_DWORD *)v2 + 7) = 0;
  *((_DWORD *)v2 + 8) = 0;
  *((_DWORD *)v2 + 9) = 0;
  sub_DA7364((void **)v2 + 10, (const char *)&unk_257BC67);
  *((_WORD *)v2 + 22) = -1;
  *((_WORD *)v2 + 23) = 1;
  return v2;
}


TextEditComponent *__fastcall TextEditComponent::~TextEditComponent(TextEditComponent *this)
{
  TextEditComponent *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r0@2
  unsigned int *v5; // r2@3
  unsigned int v6; // r1@5
  int v7; // r0@10
  unsigned int *v8; // r2@11
  unsigned int v9; // r1@13
  unsigned int *v11; // r2@19
  signed int v12; // r1@21

  v1 = this;
  *(_DWORD *)this = &off_26D6F08;
  v2 = *((_DWORD *)this + 10);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 9);
  if ( v4 )
    v5 = (unsigned int *)(v4 + 8);
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
      v6 = (*v5)--;
    if ( v6 == 1 )
      (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  v7 = *((_DWORD *)v1 + 7);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      (*(void (**)(void))(*(_DWORD *)v7 + 12))();
  UIComponent::~UIComponent(v1);
  return v1;
}


int __fastcall TextEditComponent::getCollectionIndex(TextEditComponent *this)
{
  TextEditComponent *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = UIComponent::getOwner(this);
  return j_j_j__ZNK9UIControl19findCollectionIndexERKSs(v2, (const void **)v1 + 10);
}


int __fastcall TextEditComponent::setCaretPosition(int result, int a2)
{
  int v2; // r8@0
  int v3; // r4@1
  int v4; // r5@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r6@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  bool v9; // zf@7
  char v10; // r0@10
  int v11; // r7@13
  TextComponent *v12; // r0@14
  unsigned int *v13; // r5@22

  v3 = *(_DWORD *)(result + 28);
  v4 = a2;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 + 4);
    v6 = (unsigned int *)(v3 + 4);
    while ( v5 )
    {
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
      {
        v8 = __strex(v5 + 1, v6);
        v5 = v7;
        if ( !v8 )
        {
          __dmb();
          v9 = *v6 == 0;
          if ( *v6 )
          {
            v2 = *(_DWORD *)(result + 24);
            v9 = v2 == 0;
          }
          if ( !v9 )
            v10 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id;
            __dmb();
            if ( !(v10 & 1)
              && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id) )
            {
              type_id<UIComponent,TextComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
              j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id);
            }
            v11 = type_id<UIComponent,TextComponent>(void)::id[0];
            if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,TextComponent>(void)::id[0]) == 1 )
              v12 = *(TextComponent **)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v11));
              if ( v12 )
                TextComponent::setCaretPosition(v12, v4);
          if ( &pthread_create )
            do
              result = __ldrex(v6);
            while ( __strex(result - 1, v6) );
          else
            result = (*v6)--;
          if ( result == 1 )
            v13 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v13);
              while ( __strex(result - 1, v13) );
            else
              result = (*v13)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


int __fastcall TextEditComponent::deselectControl(int result)
{
  int v1; // r8@0
  int v2; // r5@1
  int v3; // r4@1
  unsigned int *v4; // r6@2
  int v5; // r1@5
  unsigned int v6; // r2@6
  bool v7; // zf@7
  char v8; // r0@10
  int v9; // r7@13
  TextComponent *v10; // r9@14
  void *v11; // r0@15
  int v12; // r10@15
  int v13; // r7@21
  unsigned int *v14; // r5@28
  unsigned int *v15; // r2@36
  signed int v16; // r1@38
  char v17; // [sp+7h] [bp-31h]@21
  int v18; // [sp+8h] [bp-30h]@21
  const char *v19; // [sp+Ch] [bp-2Ch]@21
  int v20; // [sp+10h] [bp-28h]@15

  v2 = result;
  v3 = *(_DWORD *)(result + 28);
  if ( v3 )
  {
    result = *(_DWORD *)(v3 + 4);
    v4 = (unsigned int *)(v3 + 4);
    while ( result )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == result )
      {
        v6 = __strex(result + 1, v4);
        result = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = *v4 == 0;
          if ( *v4 )
          {
            v1 = *(_DWORD *)(v2 + 24);
            v7 = v1 == 0;
          }
          if ( v7 )
            goto LABEL_46;
          v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id;
          if ( !(v8 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id) )
            type_id<UIComponent,TextComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id);
          v9 = type_id<UIComponent,TextComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v1, type_id<UIComponent,TextComponent>(void)::id[0]) == 1 )
            v10 = *(TextComponent **)(*(_DWORD *)(v1 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v1, v9));
            if ( v10 )
            {
              TextComponent::calculateUpdatedText((TextComponent *)&v20, (int)v10);
              v11 = (void *)(v20 - 12);
              v12 = *(_DWORD *)(v20 - 12);
              if ( (int *)(v20 - 12) != &dword_28898C0 )
              {
                v15 = (unsigned int *)(v20 - 4);
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
                  j_j_j_j_j__ZdlPv_9(v11);
              }
              if ( !v12 )
                TextEditComponent::_showPlaceHolderControl((TextEditComponent *)v2);
              TextComponent::setShouldRenderCaret(v10, 0);
              *(_BYTE *)(v2 + 47) = 0;
            }
            else
              v10 = 0;
          else
            v10 = 0;
          v13 = UIControl::getPropertyBag((UIControl *)v1);
          gsl::basic_string_span<char const,-1>::remove_z<20u>((int)&v18, (int)"#text_edit_selected");
          v17 = 0;
          UIPropertyBag::set<bool>(v13, v18, v19, &v17);
          result = TextComponent::setShouldRenderCaret(v10, 0);
          *(_BYTE *)(v2 + 47) = 0;
          if ( v3 )
LABEL_46:
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v4);
              while ( __strex(result - 1, v4) );
              result = (*v4)--;
            if ( result == 1 )
              v14 = (unsigned int *)(v3 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
              if ( &pthread_create )
                __dmb();
                do
                  result = __ldrex(v14);
                while ( __strex(result - 1, v14) );
              else
                result = (*v14)--;
              if ( result == 1 )
                result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}
