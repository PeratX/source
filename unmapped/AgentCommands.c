

void __fastcall AgentCommands::GetItemSpaceCommand::~GetItemSpaceCommand(AgentCommands::GetItemSpaceCommand *this)
{
  AgentCommands::GetItemSpaceCommand::~GetItemSpaceCommand(this);
}


void __fastcall AgentCommands::PlaceCommand::~PlaceCommand(AgentCommands::PlaceCommand *this)
{
  AgentCommands::PlaceCommand *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5
  int v5; // r1@7
  void *v6; // r0@7
  unsigned int *v7; // r12@9
  signed int v8; // r1@11

  v1 = this;
  *(_DWORD *)this = &off_272512C;
  v2 = (void *)*((_DWORD *)this + 19);
  if ( v2 )
    j_operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 15);
  if ( v3 )
    j_operator delete(v3);
  v4 = *((_DWORD *)v1 + 8);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  *(_DWORD *)v1 = &off_2724F8C;
  v5 = *((_DWORD *)v1 + 3);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  j_operator delete((void *)v1);
}


unsigned int __fastcall AgentCommands::Command::_setMobCarriedItem(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  unsigned int result; // r0@1

  v1 = a1;
  v2 = (*(int (**)(void))(**(_DWORD **)(a1 + 4) + 488))();
  result = j_EntityClassTree::isMob(v2);
  if ( result == 1 )
    result = (*(int (**)(void))(**(_DWORD **)(v1 + 4) + 912))();
  return result;
}


signed int __fastcall AgentCommands::TillCommand::execute(AgentCommands::TillCommand *this)
{
  AgentCommands::TillCommand *v1; // r4@1
  __int16 v2; // r0@1
  signed int result; // r0@3

  v1 = this;
  v2 = (*(int (**)(void))(**((_DWORD **)this + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 912))();
  result = j_ItemInstance::isNull((AgentCommands::TillCommand *)((char *)v1 + 24));
  if ( !result )
  {
    result = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
    if ( result == 312 )
      result = j_j_j__ZN5Agent8swingArmEv_0(*((Agent **)v1 + 1));
  }
  return result;
}


void __fastcall AgentCommands::InspectDataCommand::~InspectDataCommand(AgentCommands::InspectDataCommand *this)
{
  AgentCommands::InspectDataCommand::~InspectDataCommand(this);
}


signed int __fastcall AgentCommands::InspectCommand::isDone(AgentCommands::InspectCommand *this)
{
  return 1;
}


void __fastcall AgentCommands::Command::~Command(void *ptr)
{
  AgentCommands::Command::~Command(ptr);
}


int __fastcall AgentCommands::DetectCommand::DetectCommand(int a1, int a2, AgentCommandComponent *a3, char a4)
{
  int v4; // r6@1
  char v5; // r5@1
  AgentCommandComponent *v6; // r7@1
  int v7; // r4@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+8h] [bp-20h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v12, "detect");
  *(_DWORD *)v7 = &off_2724F8C;
  *(_DWORD *)(v7 + 4) = j_AgentCommandComponent::getEntity(v6);
  *(_DWORD *)(v7 + 8) = v4;
  sub_21E8AF4((int *)(v7 + 12), &v12);
  *(_WORD *)(v7 + 16) = 0;
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  *(_DWORD *)v7 = &off_272504C;
  *(_BYTE *)(v7 + 18) = v5;
  *(_BYTE *)(v7 + 17) = 1;
  return v7;
}


signed int __fastcall AgentCommands::Command::_getFacingFromDirection(int a1, int _R1)
{
  signed int result; // r0@2

  __asm
  {
    VLDR            S0, [R1]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      result = 4;
    else
      __asm
      {
        VLDR            S0, [R1,#4]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm
        {
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          result = 0;
        else
          __asm
          {
            VLDR            S0, [R1,#8]
            VCMPE.F32       S0, #0.0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            result = 6;
            if ( _NF ^ _VF )
              result = 2;
          else
            result = 3;
      else
        result = 1;
  else
    result = 5;
  return result;
}


void __fastcall AgentCommands::DropAllCommand::~DropAllCommand(AgentCommands::DropAllCommand *this)
{
  AgentCommands::DropAllCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2724F8C;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete((void *)v1);
}


int __fastcall AgentCommands::TurnCommand::TurnCommand(int a1, int a2, AgentCommandComponent *a3, char a4)
{
  int v4; // r6@1
  char v5; // r4@1
  AgentCommandComponent *v6; // r7@1
  int v7; // r5@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+8h] [bp-20h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v12, "turn");
  *(_DWORD *)v7 = &off_2724F8C;
  *(_DWORD *)(v7 + 4) = j_AgentCommandComponent::getEntity(v6);
  *(_DWORD *)(v7 + 8) = v4;
  sub_21E8AF4((int *)(v7 + 12), &v12);
  *(_WORD *)(v7 + 16) = 0;
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  *(_DWORD *)v7 = &off_2724FCC;
  *(_BYTE *)(v7 + 18) = v5;
  return v7;
}


AgentCommands::GetItemDetailsCommand *__fastcall AgentCommands::GetItemDetailsCommand::GetItemDetailsCommand(AgentCommands::GetItemDetailsCommand *this, Player *a2, AgentCommandComponent *a3, const ItemInstance *a4)
{
  Player *v4; // r6@1
  const ItemInstance *v5; // r5@1
  AgentCommandComponent *v6; // r7@1
  AgentCommands::GetItemDetailsCommand *v7; // r4@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+4h] [bp-24h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = this;
  sub_21E94B4((void **)&v12, "getitemdetail");
  *(_DWORD *)v7 = &off_2724F8C;
  *((_DWORD *)v7 + 1) = j_AgentCommandComponent::getEntity(v6);
  *((_DWORD *)v7 + 2) = v4;
  sub_21E8AF4((int *)v7 + 3, &v12);
  *((_WORD *)v7 + 8) = 0;
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  *(_DWORD *)v7 = &off_272518C;
  j_ItemInstance::ItemInstance((AgentCommands::GetItemDetailsCommand *)((char *)v7 + 24), (int)v5);
  return v7;
}


signed int __fastcall AgentCommands::GetItemSpaceCommand::execute(AgentCommands::GetItemSpaceCommand *this)
{
  AgentCommands::GetItemSpaceCommand *v1; // r4@1
  __int16 v2; // r0@1
  signed int result; // r0@9
  int v4; // [sp+0h] [bp-50h]@1
  int v5; // [sp+8h] [bp-48h]@7
  void *v6; // [sp+24h] [bp-2Ch]@5
  void *ptr; // [sp+34h] [bp-1Ch]@3

  v1 = this;
  j_ItemInstance::ItemInstance((int)&v4);
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 912))();
  if ( ptr )
    j_operator delete(ptr);
  if ( v6 )
    j_operator delete(v6);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  result = 1;
  *((_BYTE *)v1 + 16) = 1;
  return result;
}


void __fastcall AgentCommands::DestroyCommand::~DestroyCommand(AgentCommands::DestroyCommand *this)
{
  AgentCommands::DestroyCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2724F8C;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete((void *)v1);
}


AgentCommands::InspectCommand *__fastcall AgentCommands::InspectCommand::~InspectCommand(AgentCommands::InspectCommand *this)
{
  AgentCommands::InspectCommand *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_272500C;
  v2 = *((_DWORD *)this + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_2724F8C;
  v4 = *((_DWORD *)v1 + 3);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v1;
}


void __fastcall AgentCommands::GetItemCountCommand::~GetItemCountCommand(AgentCommands::GetItemCountCommand *this)
{
  AgentCommands::GetItemCountCommand::~GetItemCountCommand(this);
}


int __fastcall AgentCommands::InspectDataCommand::InspectDataCommand(int a1, int a2, AgentCommandComponent *a3, char a4)
{
  int v4; // r6@1
  char v5; // r4@1
  AgentCommandComponent *v6; // r7@1
  int v7; // r5@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+8h] [bp-20h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v12, "inspectdata");
  *(_DWORD *)v7 = &off_2724F8C;
  *(_DWORD *)(v7 + 4) = j_AgentCommandComponent::getEntity(v6);
  *(_DWORD *)(v7 + 8) = v4;
  sub_21E8AF4((int *)(v7 + 12), &v12);
  *(_WORD *)(v7 + 16) = 0;
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  *(_DWORD *)v7 = &off_272502C;
  *(_BYTE *)(v7 + 18) = v5;
  return v7;
}


void __fastcall AgentCommands::CollectCommand::~CollectCommand(AgentCommands::CollectCommand *this)
{
  AgentCommands::CollectCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2724F8C;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete((void *)v1);
}


void __fastcall AgentCommands::DropCommand::~DropCommand(AgentCommands::DropCommand *this)
{
  AgentCommands::DropCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2724F8C;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete((void *)v1);
}


AgentCommands::PlaceCommand *__fastcall AgentCommands::PlaceCommand::~PlaceCommand(AgentCommands::PlaceCommand *this)
{
  AgentCommands::PlaceCommand *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5
  int v5; // r1@7
  void *v6; // r0@7
  unsigned int *v8; // r12@9
  signed int v9; // r1@11

  v1 = this;
  *(_DWORD *)this = &off_272512C;
  v2 = (void *)*((_DWORD *)this + 19);
  if ( v2 )
    j_operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 15);
  if ( v3 )
    j_operator delete(v3);
  v4 = *((_DWORD *)v1 + 8);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  *(_DWORD *)v1 = &off_2724F8C;
  v5 = *((_DWORD *)v1 + 3);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v5 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  return v1;
}


signed int __fastcall AgentCommands::InspectDataCommand::isDone(AgentCommands::InspectDataCommand *this)
{
  return 1;
}


int __fastcall AgentCommands::Command::~Command(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = a1;
  *(_DWORD *)a1 = &off_2724F8C;
  v2 = *(_DWORD *)(a1 + 12);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


int __fastcall AgentCommands::AttackCommand::AttackCommand(int a1, int a2, AgentCommandComponent *a3, char a4)
{
  int v4; // r6@1
  char v5; // r4@1
  AgentCommandComponent *v6; // r7@1
  int v7; // r5@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+8h] [bp-20h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v12, "attack");
  *(_DWORD *)v7 = &off_2724F8C;
  *(_DWORD *)(v7 + 4) = j_AgentCommandComponent::getEntity(v6);
  *(_DWORD *)(v7 + 8) = v4;
  sub_21E8AF4((int *)(v7 + 12), &v12);
  *(_WORD *)(v7 + 16) = 0;
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  *(_DWORD *)v7 = &off_2724FEC;
  *(_BYTE *)(v7 + 18) = v5;
  return v7;
}


void __fastcall AgentCommands::AttackCommand::~AttackCommand(AgentCommands::AttackCommand *this)
{
  AgentCommands::AttackCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2724F8C;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete((void *)v1);
}


signed int __fastcall AgentCommands::DropAllCommand::isDone(AgentCommands::DropAllCommand *this)
{
  return 1;
}


void __fastcall AgentCommands::InspectCommand::~InspectCommand(AgentCommands::InspectCommand *this)
{
  AgentCommands::InspectCommand::~InspectCommand(this);
}


void __fastcall AgentCommands::GetItemDetailsCommand::fireCommandDoneEvent(AgentCommands::GetItemDetailsCommand *this)
{
  AgentCommands::GetItemDetailsCommand::fireCommandDoneEvent(this);
}


int __fastcall AgentCommands::DropCommand::execute(AgentCommands::DropCommand *this)
{
  AgentCommands::DropCommand *v1; // r4@1
  __int16 v2; // r0@1
  int result; // r0@9
  int v4; // r5@9
  int v5; // r1@10
  int v6; // r0@10
  bool v7; // zf@10
  unsigned int v8; // r1@15
  float v9; // r6@17
  int v10; // r1@17
  char v11; // r1@17
  int v12; // r1@19
  int v13; // [sp+4h] [bp-F4h]@17
  int v14; // [sp+8h] [bp-F0h]@17
  int v15; // [sp+Ch] [bp-ECh]@17
  char v16; // [sp+10h] [bp-E8h]@17
  int v17; // [sp+18h] [bp-E0h]@23
  void *v18; // [sp+34h] [bp-C4h]@21
  void *v19; // [sp+44h] [bp-B4h]@19
  int v20; // [sp+58h] [bp-A0h]@10
  int v21; // [sp+60h] [bp-98h]@29
  unsigned __int8 v22; // [sp+66h] [bp-92h]@14
  char v23; // [sp+67h] [bp-91h]@10
  void *v24; // [sp+7Ch] [bp-7Ch]@27
  void *v25; // [sp+8Ch] [bp-6Ch]@25
  char v26; // [sp+A0h] [bp-58h]@1
  int v27; // [sp+A8h] [bp-50h]@7
  void *v28; // [sp+C4h] [bp-34h]@5
  void *ptr; // [sp+D4h] [bp-24h]@3

  v1 = this;
  j_ItemInstance::ItemInstance((int)&v26);
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 912))();
  if ( ptr )
    j_operator delete(ptr);
  if ( v28 )
    j_operator delete(v28);
  if ( v27 )
    (*(void (**)(void))(*(_DWORD *)v27 + 4))();
  v27 = 0;
  result = j_Entity::getContainerComponent(*((Entity **)v1 + 1));
  v4 = result;
  if ( result )
  {
    v5 = *((_DWORD *)v1 + 5);
    v6 = (*(int (**)(void))(**(_DWORD **)(result + 4) + 16))();
    j_ItemInstance::ItemInstance((ItemInstance *)&v20, v6);
    v7 = v23 == 0;
    if ( v23 )
      v7 = v20 == 0;
    if ( !v7 && !j_ItemInstance::isNull((ItemInstance *)&v20) && v22 )
    {
      v8 = *((_BYTE *)v1 + 24);
      if ( v8 > v22 )
        v8 = v22;
      *((_DWORD *)v1 + 6) = v8;
      j_ItemInstance::ItemInstance((ItemInstance *)&v16, (int)&v20);
      j_ItemInstance::set((ItemInstance *)&v16, *((_BYTE *)v1 + 24));
      v9 = *((float *)v1 + 1);
      j_AgentCommands::Command::_getNextPosFromDirection((int)&v13, (int)v1, *((_BYTE *)v1 + 18));
      j_Entity::dropTowards(v9, (const ItemInstance *)&v16, v13, v14, v15);
      j_ItemInstance::remove((ItemInstance *)&v20, *((_DWORD *)v1 + 6));
      v10 = *((_DWORD *)v1 + 5);
      (*(void (**)(void))(**(_DWORD **)(v4 + 4) + 32))();
      v11 = 0;
      if ( *((_DWORD *)v1 + 6) > 0 )
        v11 = 1;
      *((_BYTE *)v1 + 16) = v11;
      v12 = *((_DWORD *)v1 + 5);
      (*(void (**)(void))(**(_DWORD **)(v4 + 4) + 84))();
      if ( v19 )
        j_operator delete(v19);
      if ( v18 )
        j_operator delete(v18);
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
    }
    if ( v25 )
      j_operator delete(v25);
    if ( v24 )
      j_operator delete(v24);
    result = v21;
    if ( v21 )
      result = (*(int (**)(void))(*(_DWORD *)v21 + 4))();
  }
  return result;
}


signed int __fastcall AgentCommands::GetItemCountCommand::isDone(AgentCommands::GetItemCountCommand *this)
{
  return 1;
}


int __fastcall AgentCommands::PlaceCommand::execute(AgentCommands::PlaceCommand *this)
{
  ItemInstance *v1; // r5@0
  AgentCommands::PlaceCommand *v2; // r4@1
  int v3; // r0@1
  bool v4; // zf@1
  __int16 v5; // r0@6
  int result; // r0@8
  __int16 v7; // r0@10
  int v8; // [sp+0h] [bp-58h]@10
  int v9; // [sp+8h] [bp-50h]@16
  void *v10; // [sp+24h] [bp-34h]@14
  void *ptr; // [sp+34h] [bp-24h]@12

  v2 = this;
  v3 = *((_BYTE *)this + 39);
  v4 = v3 == 0;
  if ( v3 )
  {
    v1 = (AgentCommands::PlaceCommand *)((char *)v2 + 24);
    v4 = *((_DWORD *)v2 + 6) == 0;
  }
  if ( v4 || j_ItemInstance::isNull(v1) || !*((_BYTE *)v2 + 38) )
    j_ItemInstance::ItemInstance((int)&v8);
    v7 = (*(int (**)(void))(**((_DWORD **)v2 + 1) + 488))();
    if ( j_EntityClassTree::isMob(v7) == 1 )
      (*(void (**)(void))(**((_DWORD **)v2 + 1) + 912))();
    if ( ptr )
      j_operator delete(ptr);
    if ( v10 )
      j_operator delete(v10);
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
    result = 0;
  else
    v5 = (*(int (**)(void))(**((_DWORD **)v2 + 1) + 488))();
    if ( j_EntityClassTree::isMob(v5) == 1 )
    result = (*(int (**)(void))(**((_DWORD **)v2 + 1) + 488))();
    if ( result == 312 )
      result = j_j_j__ZN5Agent8swingArmEv_0(*((Agent **)v2 + 1));
  return result;
}


signed int __fastcall AgentCommands::MoveCommand::isDone(AgentCommands::MoveCommand *this)
{
  signed int v7; // r6@4
  signed int v8; // r0@6
  int v11; // r0@11

  _R4 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 1) + 488))() == 312 )
  {
    _R0 = *((_DWORD *)_R4 + 1);
    __asm
    {
      VLDR            S2, [R4,#0x14]
      VLDR            S6, [R4,#0x18]
      VLDR            S0, [R0,#0x48]
      VLDR            S4, [R0,#0x4C]
      VSUB.F32        S2, S2, S0
      VLDR            S10, [R4,#0x1C]
      VSUB.F32        S6, S6, S4
      VLDR            S8, [R0,#0x50]
      VSUB.F32        S10, S10, S8
      VMUL.F32        S12, S2, S2
      VMUL.F32        S14, S6, S6
      VMUL.F32        S1, S10, S10
      VADD.F32        S12, S14, S12
      VLDR            S14, =0.0004
      VADD.F32        S12, S12, S1
      VCMPE.F32       S12, S14
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      goto LABEL_15;
      VLDR            S12, [R4,#0x24]
      VLDR            S14, [R4,#0x28]
      VSUB.F32        S0, S0, S12
      VLDR            S1, [R4,#0x2C]
      VSUB.F32        S4, S4, S14
      VSUB.F32        S8, S8, S1
      VMUL.F32        S0, S0, S2
      VMUL.F32        S2, S4, S6
      VMUL.F32        S4, S8, S10
      VADD.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VCMPE.F32       S0, #0.0
LABEL_15:
      (*(void (**)(void))(*(_DWORD *)_R0 + 48))();
      v7 = 1;
    else
      v7 = 0;
    v8 = 0;
    if ( *((_BYTE *)_R4 + 32) )
      _R1 = *((_DWORD *)_R4 + 1);
      __asm
      {
        VLDR            S0, [R4,#0x30]
        VLDR            S2, [R4,#0x34]
        VLDR            S6, [R1,#0x6C]
        VLDR            S8, [R1,#0x70]
        VMUL.F32        S0, S0, S6
        VLDR            S4, [R4,#0x38]
        VMUL.F32        S2, S2, S8
        VLDR            S10, [R1,#0x74]
        VMUL.F32        S4, S4, S10
        VADD.F32        S0, S2, S0
        VLDR            S2, =1.1921e-7
        VADD.F32        S0, S0, S4
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v8 = 1;
    if ( (v8 | v7) != 1 )
      return 0;
    j_Agent::setMoveDirection(*((Agent **)_R4 + 1), (const Vec3 *)&Vec3::ZERO);
    v11 = *((_DWORD *)_R4 + 1);
    *(_QWORD *)(v11 + 108) = *(_QWORD *)&Vec3::ZERO;
    *(_DWORD *)(v11 + 116) = dword_2822498;
    *((_BYTE *)_R4 + 16) = v7;
  }
  return 1;
}


signed int __fastcall AgentCommands::TillCommand::isDone(AgentCommands::TillCommand *this)
{
  AgentCommands::TillCommand *v1; // r4@1
  int v7; // r0@4
  signed int result; // r0@7
  int v9[3]; // [sp+18h] [bp-28h]@4
  float v10; // [sp+24h] [bp-1Ch]@4
  float v12; // [sp+2Ch] [bp-14h]@4

  v1 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 1) + 488))() == 312
    && j_Agent::swingAnimationCompleted(*((Agent **)v1 + 1)) != 1 )
  {
    result = 0;
  }
  else
    if ( !j_ItemInstance::isNull((AgentCommands::TillCommand *)((char *)v1 + 24)) )
    {
      j_AgentCommands::Command::_getNextPosFromDirection((int)&v10, (int)v1, *((_BYTE *)v1 + 96));
      __asm
      {
        VMOV.F32        S0, #-1.0
        VLDR            S2, [SP,#0x40+var_18]
        VADD.F32        S0, S2, S0
        VMOV            R2, S0
      }
      j_BlockPos::BlockPos((BlockPos *)v9, v10, _R2, v12);
      v7 = *((_BYTE *)v1 + 96);
      if ( *((_BYTE *)v1 + 96) )
        v7 = 1;
      *((_BYTE *)v1 + 16) = j_ItemInstance::useOn(
                              (AgentCommands::TillCommand *)((char *)v1 + 24),
                              *((Entity **)v1 + 1),
                              v9[0],
                              (v7 ^ 1) + v9[1],
                              v9[2],
                              v7,
                              0.0,
                              0);
    }
    result = 1;
  return result;
}


void __fastcall AgentCommands::Command::fireCommandDoneEvent(int a1)
{
  AgentCommands::Command::fireCommandDoneEvent(a1);
}


int __fastcall AgentCommands::TransferToCommand::execute(AgentCommands::TransferToCommand *this)
{
  AgentCommands::TransferToCommand *v1; // r4@1
  __int16 v2; // r0@1
  int result; // r0@9
  int v4; // r5@9
  int v5; // r1@10
  int v6; // r0@10
  bool v7; // zf@10
  int v8; // r1@17
  int v9; // r0@17
  bool v10; // zf@17
  signed int v11; // r6@22
  int v12; // r0@24
  int v13; // r6@24
  int v14; // r1@30
  int v15; // r1@30
  int v16; // [sp+0h] [bp-130h]@17
  int v17; // [sp+8h] [bp-128h]@35
  void *v18; // [sp+24h] [bp-10Ch]@33
  void *v19; // [sp+34h] [bp-FCh]@31
  int v20; // [sp+48h] [bp-E8h]@17
  int v21; // [sp+50h] [bp-E0h]@41
  unsigned __int8 v22; // [sp+56h] [bp-DAh]@21
  char v23; // [sp+57h] [bp-D9h]@17
  void *v24; // [sp+6Ch] [bp-C4h]@39
  void *v25; // [sp+7Ch] [bp-B4h]@37
  int v26; // [sp+90h] [bp-A0h]@10
  int v27; // [sp+98h] [bp-98h]@47
  unsigned __int8 v28; // [sp+9Eh] [bp-92h]@14
  char v29; // [sp+9Fh] [bp-91h]@10
  void *v30; // [sp+B4h] [bp-7Ch]@45
  void *v31; // [sp+C4h] [bp-6Ch]@43
  char v32; // [sp+D8h] [bp-58h]@1
  int v33; // [sp+E0h] [bp-50h]@7
  void *v34; // [sp+FCh] [bp-34h]@5
  void *ptr; // [sp+10Ch] [bp-24h]@3

  v1 = this;
  j_ItemInstance::ItemInstance((int)&v32);
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 912))();
  if ( ptr )
    j_operator delete(ptr);
  if ( v34 )
    j_operator delete(v34);
  if ( v33 )
    (*(void (**)(void))(*(_DWORD *)v33 + 4))();
  v33 = 0;
  result = j_Entity::getContainerComponent(*((Entity **)v1 + 1));
  v4 = result;
  if ( result )
  {
    v5 = *((_DWORD *)v1 + 5);
    v6 = (*(int (**)(void))(**(_DWORD **)(result + 4) + 16))();
    j_ItemInstance::ItemInstance((ItemInstance *)&v26, v6);
    v7 = v29 == 0;
    if ( v29 )
      v7 = v26 == 0;
    if ( v7 || j_ItemInstance::isNull((ItemInstance *)&v26) || !v28 )
      goto LABEL_43;
    if ( (signed int)v28 < *((_DWORD *)v1 + 6) )
      *((_DWORD *)v1 + 6) = v28;
    v8 = *((_DWORD *)v1 + 7);
    v9 = (*(int (**)(void))(**(_DWORD **)(v4 + 4) + 16))();
    j_ItemInstance::ItemInstance((ItemInstance *)&v20, v9);
    j_ItemInstance::ItemInstance((ItemInstance *)&v16, (int)&v26);
    v10 = v23 == 0;
    if ( v23 )
      v10 = v20 == 0;
    if ( v10 || j_ItemInstance::isNull((ItemInstance *)&v20) || !v22 )
    {
      j_ItemInstance::operator=((int)&v20, (int)&v16);
      j_ItemInstance::set((ItemInstance *)&v20, *((_DWORD *)v1 + 6));
      j_ItemInstance::set((ItemInstance *)&v26, v28 - *((_DWORD *)v1 + 6));
    }
    else
      v11 = j_ItemInstance::getId((ItemInstance *)&v20);
      if ( v11 != j_ItemInstance::getId((ItemInstance *)&v26) || j_ItemInstance::isFullStack((ItemInstance *)&v20) )
        goto LABEL_29;
      v12 = j_ItemInstance::getMaxStackSize((ItemInstance *)&v20);
      v13 = v12 - v22;
      if ( *((_DWORD *)v1 + 6) < v13 )
        v13 = *((_DWORD *)v1 + 6);
      j_ItemInstance::set((ItemInstance *)&v20, v22 + v13);
      j_ItemInstance::set((ItemInstance *)&v26, v28 - v13);
    *((_BYTE *)v1 + 16) = 1;
LABEL_29:
    if ( *((_BYTE *)v1 + 16) )
      v14 = *((_DWORD *)v1 + 7);
      (*(void (**)(void))(**(_DWORD **)(v4 + 4) + 32))();
      v15 = *((_DWORD *)v1 + 5);
    if ( v19 )
      j_operator delete(v19);
    if ( v18 )
      j_operator delete(v18);
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 4))();
    if ( v25 )
      j_operator delete(v25);
    if ( v24 )
      j_operator delete(v24);
    if ( v21 )
      (*(void (**)(void))(*(_DWORD *)v21 + 4))();
LABEL_43:
    if ( v31 )
      j_operator delete(v31);
    if ( v30 )
      j_operator delete(v30);
    result = v27;
    if ( v27 )
      result = (*(int (**)(void))(*(_DWORD *)v27 + 4))();
  }
  return result;
}


signed int __fastcall AgentCommands::TurnCommand::isDone(AgentCommands::TurnCommand *this, float a2)
{
  signed int result; // r0@2

  _R4 = this;
  __asm { VLDR            S4, =1.1921e-7 }
  _R0 = *((_DWORD *)this + 1);
  __asm
  {
    VLDR            S2, [R4,#0x18]
    VLDR            S0, [R0,#0x7C]
    VSUB.F32        S2, S0, S2
    VABS.F32        S2, S2
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VMOV            R0, S0 }
    *((_BYTE *)_R4 + 16) = 1;
    *(_DWORD *)(*((_DWORD *)_R4 + 1) + 124) = j_mce::Math::snapRotationToCardinal(_R0, a2);
    result = 1;
  else
    result = 0;
  return result;
}


void __fastcall AgentCommands::TransferToCommand::~TransferToCommand(AgentCommands::TransferToCommand *this)
{
  AgentCommands::TransferToCommand::~TransferToCommand(this);
}


signed int __fastcall AgentCommands::AttackCommand::isDone(AgentCommands::AttackCommand *this)
{
  AgentCommands::AttackCommand *v1; // r4@1
  int v2; // r0@3
  __int64 v3; // r1@3
  int v9; // r6@3
  const AABB *v10; // r0@3
  unsigned __int64 *v11; // r8@3
  int v12; // r9@3
  int v13; // r0@3
  int *v14; // r5@3
  int *v15; // r7@3
  int i; // r6@3
  int v17; // r0@5
  signed int result; // r0@10
  char v19; // [sp+8h] [bp-98h]@8
  float v20; // [sp+30h] [bp-70h]@3
  float v21; // [sp+3Ch] [bp-64h]@3
  int v22; // [sp+40h] [bp-60h]@3
  char v23; // [sp+48h] [bp-58h]@3
  float v24; // [sp+64h] [bp-3Ch]@3
  int v25; // [sp+68h] [bp-38h]@3
  __int64 v27; // [sp+70h] [bp-30h]@3
  int v28; // [sp+78h] [bp-28h]@3

  v1 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 1) + 488))() == 312
    && j_Agent::swingAnimationCompleted(*((Agent **)v1 + 1)) != 1 )
  {
    result = 0;
  }
  else
    v2 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 52))();
    v3 = *(_QWORD *)v2;
    v28 = *(_DWORD *)(v2 + 8);
    v27 = v3;
    j_AgentCommands::Command::_getNextPosFromDirection((int)&v24, (int)v1, *((_BYTE *)v1 + 18));
    __asm { VMOV.F32        S0, #-0.5 }
    _R0 = v25;
    __asm
    {
      VMOV.F32        S2, #0.5
      VLDR            S6, [SP,#0xA0+var_3C]
      VMOV.F32        S4, #1.0
      VLDR            S8, [SP,#0xA0+var_34]
      VMOV            S12, R0
      VADD.F32        S10, S6, S0
      VADD.F32        S6, S6, S2
      VADD.F32        S0, S8, S0
      VADD.F32        S4, S12, S4
      VADD.F32        S2, S8, S2
      VSTR            S10, [SP,#0xA0+var_64]
    }
    v22 = v25;
      VSTR            S6, [SP,#0xA0+var_70]
      VSTR            S4, [SP,#0xA0+var_6C]
      VSTR            S0, [SP,#0xA0+var_5C]
      VSTR            S2, [SP,#0xA0+var_68]
    j_AABB::AABB((int)&v23, (int)&v21, (int)&v20);
    v9 = j_Entity::getRegion(*((Entity **)v1 + 1));
    v10 = (const AABB *)j_AABB::expand((AABB *)&v23, (const Vec3 *)&v27);
    v11 = (unsigned __int64 *)j_BlockSource::fetchEntities2(v9, 1, v10, 1);
    v12 = j_Player::canUseAbility(*((_DWORD *)v1 + 2), &Abilities::ATTACK_MOBS);
    v13 = j_Player::canUseAbility(*((_DWORD *)v1 + 2), &Abilities::ATTACK_PLAYERS);
    v14 = (int *)(*v11 >> 32);
    v15 = (int *)*v11;
    for ( i = v13; v14 != v15; ++v15 )
      if ( *v15 != *((_DWORD *)v1 + 1) )
      {
        _ZF = j_Entity::hasType(*v15, 319) == 0;
        v17 = v12;
        if ( !_ZF )
          v17 = i;
        if ( v17 == 1 )
        {
          j_EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v19, *((Entity **)v1 + 1), 2);
          *((_BYTE *)v1 + 16) = j_Entity::hurt((Entity *)*v15, (const EntityDamageSource *)&v19, 5, 1, 0);
          j_EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v19);
        }
      }
    result = 1;
  return result;
}


AABB *__fastcall AgentCommands::MoveCommand::_adjustDestinationForPartialBlocks(AgentCommands::MoveCommand *this)
{
  int v10; // r0@4
  BlockSource *v11; // r5@4
  BlockSource *v12; // r0@4
  char *v13; // r0@4
  unsigned __int64 *v14; // r10@4
  int v16; // r0@4
  AABB *v17; // r6@4
  int *v19; // r3@12
  int v21; // r4@19
  signed int v22; // r5@19
  signed int v23; // r0@20
  AABB *result; // r0@28
  AABB *v25; // r6@28
  int *v27; // r3@36
  int v29; // r4@43
  signed int v30; // r7@43
  int v31; // [sp+8h] [bp-D0h]@4
  float v32; // [sp+Ch] [bp-CCh]@4
  char v33; // [sp+18h] [bp-C0h]@4
  char v34; // [sp+24h] [bp-B4h]@4
  char v35; // [sp+30h] [bp-A8h]@4
  char v37; // [sp+4Ch] [bp-8Ch]@4
  char v38; // [sp+58h] [bp-80h]@4
  float v39; // [sp+64h] [bp-74h]@4

  _R11 = this;
  _R0 = (*(int (**)(void))(**((_DWORD **)this + 1) + 52))();
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S4, [R11,#0x14]
    VLDR            S2, [R0,#8]
    VLDR            S6, [R11,#0x1C]
    VSUB.F32        S0, S4, S0
    VSUB.F32        S2, S6, S2
    VMUL.F32        S4, S0, S0
    VMUL.F32        S6, S2, S2
    VADD.F32        S4, S6, S4
    VLDR            S6, =0.0001
    VSQRT.F32       S4, S4
    VCMPE.F32       S4, S6
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VLDR            S0, =0.4 }
    _R0 = &Vec3::ZERO;
    __asm { VLDR            S2, [R0,#4] }
    _R8 = dword_2822498;
    __asm { VMUL.F32        S18, S2, S0 }
    _R9 = Vec3::ZERO;
  else
    __asm
    {
      VDIV.F32        S2, S2, S4
      VDIV.F32        S0, S0, S4
      VMOV            R8, S2
      VLDR            S18, =0.0
      VMOV            R9, S0
    }
  v10 = (*(int (**)(void))(**((_DWORD **)_R11 + 1) + 52))();
  j_BlockPos::BlockPos((int)&v37, v10);
  j_Vec3::Vec3((int)&v38, (int)&v37);
  j_AABB::AABB((int)&v39, (int)&v38, 1065353216);
  j_BlockPos::BlockPos((int)&v33, (int)_R11 + 20);
  j_Vec3::Vec3((int)&v34, (int)&v33);
  j_AABB::AABB((int)&v35, (int)&v34, 1065353216);
    VLDR            S0, =0.01
    VLDR            S2, [SP,#0xD8+var_98]
    VADD.F32        S0, S2, S0
    VSTR            S0, [SP,#0xD8+var_98]
  v11 = (BlockSource *)j_Entity::getRegion(*((Entity **)_R11 + 1));
  v12 = (BlockSource *)j_Entity::getRegion(*((Entity **)_R11 + 1));
  v13 = j_BlockSource::fetchCollisionShapes(v11, v12, (const AABB *)&v35, 0, 1, 0);
    VLDR            S0, =0.4
    VMOV            S2, R9
    VMOV            S4, R8
  v14 = (unsigned __int64 *)v13;
  __asm { VMUL.F32        S24, S2, S0 }
  _R0 = *((_DWORD *)_R11 + 1);
    VMUL.F32        S22, S4, S0
    VLDR            S16, [R0,#0x4C]
    VSTR            S24, [SP,#0xD8+var_CC]
    VSTR            S18, [SP,#0xD8+var_C8]
    VSTR            S22, [SP,#0xD8+var_C4]
  j_AABB::move((AABB *)&v39, (const Vec3 *)&v32);
  v31 = *((_DWORD *)_R11 + 6);
  v16 = *v14 >> 32;
  v17 = (AABB *)*v14;
    VMOV            S0, R1
    VMOV.F32        S26, S0
  if ( !_ZF )
      VMOV.F32        S26, S0
      VLDR            S2, [SP,#0xD8+var_74]
    _R2 = (int)v17 + 20;
    do
      __asm
      {
        VLDR            S4, [R2,#-8]
        VCMPE.F32       S4, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
        {
          VLDR            S4, [SP,#0xD8+var_68]
          VLDR            S6, [R2,#-0x14]
          VCMPE.F32       S6, S4
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          __asm
          {
            VLDR            S4, [SP,#0xD8+var_6C]
            VLDR            S6, [R2]
            VCMPE.F32       S6, S4
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm
            {
              VLDR            S4, [SP,#0xD8+var_60]
              VLDR            S6, [R2,#-0xC]
              VCMPE.F32       S6, S4
              VMRS            APSR_nzcv, FPSCR
            }
            if ( _NF ^ _VF )
              __asm { VLDR            S4, [R2,#-4] }
              v19 = &v31;
              __asm
              {
                VCMPE.F32       S26, S4
                VMRS            APSR_nzcv, FPSCR
              }
              if ( _NF ^ _VF )
                v19 = (int *)(_R2 - 4);
              v31 = *v19;
              __asm { VMOV            S26, R3 }
      _R2 += 28;
    while ( _R2 - v16 != 20 );
  _R1 = *((_DWORD *)_R11 + 1);
    VSUB.F32        S4, S26, S16
    VLDR            S20, =1.1921e-7
    VLDR            S2, [R1,#0x148]
    VADD.F32        S2, S2, S20
    VCMPE.F32       S4, S2
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      VADD.F32        S2, S26, S20
      VMOV.F32        S4, #1.0
      VSTR            S2, [SP,#0xD8+var_70]
      VLDR            S2, [SP,#0xD8+var_64]
      VADD.F32        S2, S2, S4
      VSTR            S2, [SP,#0xD8+var_64]
    if ( !_ZF )
      v21 = v16 - 28;
      v22 = 1;
      do
        v23 = j_AABB::intersects(v17, (const AABB *)&v39);
        v22 &= v23 ^ 1;
        if ( v23 )
          break;
        _ZF = v21 == (_DWORD)v17;
        v17 = (AABB *)((char *)v17 + 28);
      while ( !_ZF );
      if ( v22 != 1 )
        goto LABEL_28;
      __asm { VLDR            S0, [R11,#0x18] }
      VCMPE.F32       S0, S26
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S0, S26 }
      VMOV.F32        S16, S0
      VSTR            S0, [R11,#0x18]
LABEL_28:
  result = (AABB *)(*v14 >> 32);
  v25 = (AABB *)*v14;
    VMOV.F32        S18, S0
      VMOV.F32        S18, S0
    _R1 = (int)v25 + 20;
        VLDR            S4, [R1,#-8]
          VLDR            S6, [R1,#-0x14]
            VLDR            S6, [R1]
              VLDR            S6, [R1,#-0xC]
              __asm { VLDR            S4, [R1,#-4] }
              v27 = &v31;
                VCMPE.F32       S18, S4
                v27 = (int *)(_R1 - 4);
              v31 = *v27;
              __asm { VMOV            S18, R3 }
      _R1 += 28;
    while ( _R1 - (_DWORD)result != 20 );
    VSUB.F32        S4, S18, S16
      VADD.F32        S2, S18, S20
      v29 = (int)result - 28;
      v30 = 1;
        result = (AABB *)j_AABB::intersects(v25, (const AABB *)&v39);
        v30 &= (unsigned int)result ^ 1;
        if ( result )
        result = (AABB *)((char *)v25 + 28);
        _ZF = v29 == (_DWORD)v25;
        v25 = (AABB *)((char *)v25 + 28);
      if ( v30 != 1 )
        return result;
      VCMPE.F32       S0, S18
      __asm { VMOVLT.F32      S0, S18 }
    __asm { VSTR            S0, [R11,#0x18] }
  return result;
}


void __fastcall AgentCommands::TillCommand::~TillCommand(AgentCommands::TillCommand *this)
{
  AgentCommands::TillCommand::~TillCommand(this);
}


void __fastcall AgentCommands::GetItemCountCommand::fireCommandDoneEvent(AgentCommands::GetItemCountCommand *this)
{
  AgentCommands::GetItemCountCommand *v1; // r4@1
  unsigned int v2; // r3@1
  int v3; // r2@1
  void *v4; // r0@5
  void *v5; // r0@6
  void *v6; // r0@7
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  unsigned int *v9; // r2@13
  signed int v10; // r1@15
  unsigned int *v11; // r2@17
  signed int v12; // r1@19
  void **v13; // [sp+8h] [bp-60h]@5
  int v14; // [sp+40h] [bp-28h]@7
  int v15; // [sp+44h] [bp-24h]@6
  int v16; // [sp+48h] [bp-20h]@5

  v1 = this;
  v2 = *((_WORD *)this + 8);
  v3 = 2;
  if ( (_BYTE)v2 )
    v3 = 3;
  if ( v2 <= 0xFF )
    v3 = (unsigned __int8)v2;
  j_EventPacket::EventPacket(
    (int)&v13,
    *((Entity **)this + 2),
    v3,
    (int)this + 12,
    (int)&AgentCommands::Command::GetItemCountKey,
    *((_DWORD *)this + 5));
  (*(void (**)(void))(**((_DWORD **)v1 + 2) + 1448))();
  v13 = &off_26E9D30;
  v4 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v15 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


AgentCommands::GetItemSpaceCommand *__fastcall AgentCommands::GetItemSpaceCommand::GetItemSpaceCommand(AgentCommands::GetItemSpaceCommand *this, Player *a2, AgentCommandComponent *a3, int a4, int a5)
{
  Player *v5; // r6@1
  int v6; // r4@1
  AgentCommandComponent *v7; // r7@1
  AgentCommands::GetItemSpaceCommand *v8; // r5@1
  void *v9; // r0@1
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  int v13; // [sp+8h] [bp-20h]@1

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = this;
  sub_21E94B4((void **)&v13, "getitemspace");
  *(_DWORD *)v8 = &off_2724F8C;
  *((_DWORD *)v8 + 1) = j_AgentCommandComponent::getEntity(v7);
  *((_DWORD *)v8 + 2) = v5;
  sub_21E8AF4((int *)v8 + 3, &v13);
  *((_WORD *)v8 + 8) = 0;
  v9 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v13 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  *(_DWORD *)v8 = &off_272516C;
  *((_DWORD *)v8 + 5) = v6;
  *((_DWORD *)v8 + 6) = a5;
  return v8;
}


signed int __fastcall AgentCommands::GetItemDetailsCommand::execute(AgentCommands::GetItemDetailsCommand *this)
{
  AgentCommands::GetItemDetailsCommand *v1; // r4@1
  __int16 v2; // r0@1
  signed int result; // r0@9
  int v4; // [sp+0h] [bp-50h]@1
  int v5; // [sp+8h] [bp-48h]@7
  void *v6; // [sp+24h] [bp-2Ch]@5
  void *ptr; // [sp+34h] [bp-1Ch]@3

  v1 = this;
  j_ItemInstance::ItemInstance((int)&v4);
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 912))();
  if ( ptr )
    j_operator delete(ptr);
  if ( v6 )
    j_operator delete(v6);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  result = 1;
  *((_BYTE *)v1 + 16) = 1;
  return result;
}


void __fastcall AgentCommands::DropAllCommand::~DropAllCommand(AgentCommands::DropAllCommand *this)
{
  AgentCommands::DropAllCommand::~DropAllCommand(this);
}


void __fastcall AgentCommands::GetItemSpaceCommand::fireCommandDoneEvent(AgentCommands::GetItemSpaceCommand *this)
{
  AgentCommands::GetItemSpaceCommand *v1; // r4@1
  unsigned int v2; // r3@1
  int v3; // r2@1
  void *v4; // r0@5
  void *v5; // r0@6
  void *v6; // r0@7
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  unsigned int *v9; // r2@13
  signed int v10; // r1@15
  unsigned int *v11; // r2@17
  signed int v12; // r1@19
  void **v13; // [sp+8h] [bp-60h]@5
  int v14; // [sp+40h] [bp-28h]@7
  int v15; // [sp+44h] [bp-24h]@6
  int v16; // [sp+48h] [bp-20h]@5

  v1 = this;
  v2 = *((_WORD *)this + 8);
  v3 = 2;
  if ( (_BYTE)v2 )
    v3 = 3;
  if ( v2 <= 0xFF )
    v3 = (unsigned __int8)v2;
  j_EventPacket::EventPacket(
    (int)&v13,
    *((Entity **)this + 2),
    v3,
    (int)this + 12,
    (int)&AgentCommands::Command::GetItemSpaceKey,
    (*(_QWORD *)((char *)this + 20) >> 32) - *(_QWORD *)((char *)this + 20));
  (*(void (**)(void))(**((_DWORD **)v1 + 2) + 1448))();
  v13 = &off_26E9D30;
  v4 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v15 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


int __fastcall AgentCommands::DetectRedstoneCommand::DetectRedstoneCommand(int a1, int a2, AgentCommandComponent *a3, char a4)
{
  int v4; // r6@1
  char v5; // r5@1
  AgentCommandComponent *v6; // r7@1
  int v7; // r4@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+8h] [bp-20h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v12, "detectredstone");
  *(_DWORD *)v7 = &off_2724F8C;
  *(_DWORD *)(v7 + 4) = j_AgentCommandComponent::getEntity(v6);
  *(_DWORD *)(v7 + 8) = v4;
  sub_21E8AF4((int *)(v7 + 12), &v12);
  *(_WORD *)(v7 + 16) = 0;
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  *(_DWORD *)v7 = &off_272506C;
  *(_BYTE *)(v7 + 18) = v5;
  *(_BYTE *)(v7 + 17) = 1;
  return v7;
}


int __fastcall AgentCommands::TillCommand::TillCommand(int a1, int a2, AgentCommandComponent *a3, unsigned int *a4, char a5)
{
  int v5; // r6@1
  unsigned int *v6; // r5@1
  AgentCommandComponent *v7; // r7@1
  int v8; // r4@1
  void *v9; // r0@1
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  int v13; // [sp+0h] [bp-68h]@2
  int v14; // [sp+8h] [bp-60h]@6
  void *v15; // [sp+24h] [bp-44h]@4
  void *ptr; // [sp+34h] [bp-34h]@2
  int v17; // [sp+4Ch] [bp-1Ch]@1

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a1;
  sub_21E94B4((void **)&v17, "till");
  *(_DWORD *)v8 = &off_2724F8C;
  *(_DWORD *)(v8 + 4) = j_AgentCommandComponent::getEntity(v7);
  *(_DWORD *)(v8 + 8) = v5;
  sub_21E8AF4((int *)(v8 + 12), &v17);
  *(_WORD *)(v8 + 16) = 0;
  v9 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v17 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  *(_DWORD *)v8 = &off_27251AC;
  j_ItemInstance::ItemInstance(v8 + 24);
  *(_BYTE *)(v8 + 96) = a5;
  j_CommandUtils::createItemInstance((ItemInstance *)&v13, v6, 1, 0);
  j_ItemInstance::operator=(v8 + 24, (int)&v13);
  if ( ptr )
    j_operator delete(ptr);
  if ( v15 )
    j_operator delete(v15);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  return v8;
}


void __fastcall AgentCommands::InspectDataCommand::fireCommandDoneEvent(AgentCommands::InspectDataCommand *this)
{
  AgentCommands::InspectDataCommand *v1; // r4@1
  unsigned int v2; // r3@1
  int v3; // r2@1
  void *v4; // r0@5
  void *v5; // r0@6
  void *v6; // r0@7
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  unsigned int *v9; // r2@13
  signed int v10; // r1@15
  unsigned int *v11; // r2@17
  signed int v12; // r1@19
  void **v13; // [sp+8h] [bp-60h]@5
  int v14; // [sp+40h] [bp-28h]@7
  int v15; // [sp+44h] [bp-24h]@6
  int v16; // [sp+48h] [bp-20h]@5

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  v3 = 2;
  if ( (_BYTE)v2 )
    v3 = 3;
  if ( !(v2 & 0xFF00) )
    v3 = (unsigned __int8)v2;
  j_EventPacket::EventPacket(
    (int)&v13,
    *((Entity **)this + 2),
    v3,
    (int)this + 12,
    (int)&AgentCommands::Command::InspectDataKey,
    v2 >> 24);
  (*(void (**)(void))(**((_DWORD **)v1 + 2) + 1448))();
  v13 = &off_26E9D30;
  v4 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v15 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


signed int __fastcall AgentCommands::InspectDataCommand::execute(AgentCommands::InspectDataCommand *this)
{
  AgentCommands::InspectDataCommand *v1; // r4@1
  __int16 v2; // r0@1
  BlockSource *v3; // r5@9
  signed int result; // r0@9
  int v5; // [sp+0h] [bp-78h]@9
  char v6; // [sp+Ch] [bp-6Ch]@9
  char v7; // [sp+18h] [bp-60h]@1
  int v8; // [sp+20h] [bp-58h]@7
  void *v9; // [sp+3Ch] [bp-3Ch]@5
  void *ptr; // [sp+4Ch] [bp-2Ch]@3

  v1 = this;
  j_ItemInstance::ItemInstance((int)&v7);
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 912))();
  if ( ptr )
    j_operator delete(ptr);
  if ( v9 )
    j_operator delete(v9);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  v8 = 0;
  v3 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 1));
  j_AgentCommands::Command::_getNextPosFromDirection((int)&v5, (int)v1, *((_BYTE *)v1 + 18));
  j_BlockPos::BlockPos((int)&v6, (int)&v5);
  *((_BYTE *)v1 + 19) = j_BlockSource::getData(v3, (const BlockPos *)&v6);
  result = 1;
  *((_BYTE *)v1 + 16) = 1;
  return result;
}


AgentCommands::TransferToCommand *__fastcall AgentCommands::TransferToCommand::TransferToCommand(AgentCommands::TransferToCommand *this, Player *a2, AgentCommandComponent *a3, int a4, int a5, int a6)
{
  Player *v6; // r6@1
  int v7; // r5@1
  AgentCommandComponent *v8; // r7@1
  AgentCommands::TransferToCommand *v9; // r4@1
  void *v10; // r0@1
  int v11; // r0@2
  unsigned int *v13; // r2@3
  signed int v14; // r1@5
  int v15; // [sp+4h] [bp-24h]@1

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = this;
  sub_21E94B4((void **)&v15, "transfer");
  *(_DWORD *)v9 = &off_2724F8C;
  *((_DWORD *)v9 + 1) = j_AgentCommandComponent::getEntity(v8);
  *((_DWORD *)v9 + 2) = v6;
  sub_21E8AF4((int *)v9 + 3, &v15);
  *((_WORD *)v9 + 8) = 0;
  v10 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  *(_DWORD *)v9 = &off_27250EC;
  v11 = (int)v9 + 20;
  *(_DWORD *)v11 = v7;
  *(_DWORD *)(v11 + 4) = a5;
  *(_DWORD *)(v11 + 8) = a6;
  return v9;
}


signed int __fastcall AgentCommands::PlaceCommand::isDone(AgentCommands::PlaceCommand *this)
{
  ItemInstance *v1; // r7@0
  AgentCommands::PlaceCommand *v2; // r4@1
  int v4; // r0@8
  __int64 v5; // r1@8
  float v6; // r6@8
  signed int result; // r0@11
  BlockSource *v18; // r8@14
  int v19; // r7@14
  int v20; // r5@14
  void (__fastcall *v21)(int *, int, int, char *); // r11@14
  int v22; // r9@14
  int v23; // r5@14
  void (__fastcall *v24)(int *, int, BlockSource *, char *); // r7@14
  ItemInstance *v25; // r10@15
  int (__fastcall *v26)(int, BlockSource *, char *); // r6@16
  int v30; // r8@18
  signed int v31; // r6@22
  ItemInstance *v32; // r0@24
  int v33; // r0@31
  int v34; // r6@31
  int v35; // r1@32
  ItemInstance *v36; // r0@32
  int v37; // r1@33
  float v38; // [sp+10h] [bp-1E8h]@0
  ItemInstance *v39; // [sp+1Ch] [bp-1DCh]@9
  char v40; // [sp+20h] [bp-1D8h]@24
  int v41; // [sp+28h] [bp-1D0h]@28
  void *v42; // [sp+44h] [bp-1B4h]@26
  void *ptr; // [sp+54h] [bp-1A4h]@24
  int v44; // [sp+6Ch] [bp-18Ch]@22
  int v45; // [sp+70h] [bp-188h]@24
  int v46; // [sp+74h] [bp-184h]@24
  char v47; // [sp+78h] [bp-180h]@22
  float v48; // [sp+84h] [bp-174h]@22
  float v51; // [sp+90h] [bp-168h]@18
  float v52; // [sp+94h] [bp-164h]@18
  float v53; // [sp+98h] [bp-160h]@18
  char v54; // [sp+9Ch] [bp-15Ch]@16
  float v55; // [sp+A8h] [bp-150h]@19
  float v56; // [sp+ACh] [bp-14Ch]@19
  float v57; // [sp+B0h] [bp-148h]@19
  char v58; // [sp+B4h] [bp-144h]@14
  int v59; // [sp+C0h] [bp-138h]@14
  unsigned __int8 v60; // [sp+C4h] [bp-134h]@18
  int v61; // [sp+C8h] [bp-130h]@18
  int v62; // [sp+D4h] [bp-124h]@18
  int v63; // [sp+D8h] [bp-120h]@18
  int v64; // [sp+DCh] [bp-11Ch]@18
  char v65; // [sp+104h] [bp-F4h]@14
  char v66; // [sp+110h] [bp-E8h]@14
  int v67; // [sp+11Ch] [bp-DCh]@14
  unsigned __int8 v68; // [sp+120h] [bp-D8h]@19
  int v69; // [sp+124h] [bp-D4h]@19
  char v70; // [sp+160h] [bp-98h]@14
  float v71; // [sp+16Ch] [bp-8Ch]@14
  float v72; // [sp+184h] [bp-74h]@8
  float v73; // [sp+188h] [bp-70h]@8
  float v74; // [sp+18Ch] [bp-6Ch]@8
  __int64 v75; // [sp+190h] [bp-68h]@8
  float v76; // [sp+198h] [bp-60h]@8

  v2 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 1) + 488))() == 312
    && j_Agent::swingAnimationCompleted(*((Agent **)v2 + 1)) != 1 )
  {
    result = 0;
  }
  else
    _ZF = *((_BYTE *)v2 + 39) == 0;
    if ( *((_BYTE *)v2 + 39) )
    {
      v1 = (AgentCommands::PlaceCommand *)((char *)v2 + 24);
      _ZF = *((_DWORD *)v2 + 6) == 0;
    }
    if ( !_ZF && !j_ItemInstance::isNull(v1) && *((_BYTE *)v2 + 38) )
      v4 = (*(int (**)(void))(**((_DWORD **)v2 + 1) + 52))();
      v5 = *(_QWORD *)v4;
      v76 = *(float *)(v4 + 8);
      v75 = v5;
      v6 = *((float *)&v5 + 1);
      _R5 = j_floorf_0(*(float *)&v5);
      _R0 = j_floorf_0(v6);
      __asm
      {
        VMOV            S18, R0
        VMOV.F32        S20, #0.5
        VMOV            S16, R5
      }
      _R0 = j_floorf_0(v76);
        VMOV            S0, R0
        VADD.F32        S16, S16, S20
        VADD.F32        S18, S18, S20
        VADD.F32        S20, S0, S20
        VSTR            S16, [SP,#0x1F8+var_68]
        VSTR            S18, [SP,#0x1F8+var_68+4]
        VSTR            S20, [SP,#0x1F8+var_60]
      j_AgentCommands::Command::_getNextPosFromDirection((int)&v72, (int)v2, *((_BYTE *)v2 + 100));
        VLDR            S0, [SP,#0x1F8+var_74]
        VLDR            S2, [SP,#0x1F8+var_70]
        VSUB.F32        S6, S0, S16
        VLDR            S4, [SP,#0x1F8+var_6C]
        VSUB.F32        S8, S2, S18
        VSUB.F32        S10, S4, S20
        VMUL.F32        S12, S6, S6
        VMUL.F32        S14, S8, S8
        VMUL.F32        S1, S10, S10
        VADD.F32        S12, S14, S12
        VLDR            S14, =0.0001
        VADD.F32        S12, S12, S1
        VSQRT.F32       S12, S12
        VCMPE.F32       S12, S14
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        v39 = v1;
        *(_QWORD *)&_R1 = *(_QWORD *)&Vec3::ZERO;
        _R0 = dword_2822498;
      else
        __asm { VDIV.F32        S10, S10, S12 }
        __asm
        {
          VDIV.F32        S8, S8, S12
          VDIV.F32        S6, S6, S12
          VMOV            R0, S10
          VMOV            R2, S8
          VMOV            R1, S6
        }
        VMOV            S6, R2
        VMOV            S8, R1
        VADD.F32        S6, S6, S6
        VADD.F32        S8, S8, S8
        VMOV            S10, R0
        VMOV.F32        S12, #-1.0
        VADD.F32        S10, S10, S10
        VADD.F32        S6, S18, S6
        VADD.F32        S8, S16, S8
        VADD.F32        S10, S20, S10
        VSTR            S8, [SP,#0x1F8+var_80]
        VSTR            S6, [SP,#0x1F8+var_7C]
        VMOV.F32        S6, #1.0
        VSTR            S10, [SP,#0x1F8+var_78]
      _R0 = &dword_1B0F5FC;
      if ( !*((_BYTE *)v2 + 100) )
        __asm { VMOVEQ.F32      S12, S6 }
        _R0 = &dword_1B0F600;
        VLDR            S6, [R0]
        VADD.F32        S2, S2, S12
        VADD.F32        S0, S6, S0
        VADD.F32        S4, S4, S6
        VSTR            S0, [SP,#0x1F8+var_8C]
        VSTR            S2, [SP,#0x1F8+var_88]
        VSTR            S4, [SP,#0x1F8+var_84]
      v18 = (BlockSource *)j_Entity::getRegion(*((Entity **)v2 + 1));
      j_BlockPos::BlockPos((int)&v70, (int)&v71);
      v19 = j_BlockSource::getBlock(v18, (const BlockPos *)&v70);
      j_BlockPos::BlockPos((int)&v66, (int)&v72);
      v20 = j_BlockSource::getBlock(v18, (const BlockPos *)&v66);
      v21 = *(void (__fastcall **)(int *, int, int, char *))(*(_DWORD *)v20 + 288);
      v22 = j_Entity::getRegion(*((Entity **)v2 + 1));
      j_BlockPos::BlockPos((int)&v65, (int)&v72);
      v21(&v67, v20, v22, &v65);
      v23 = v19;
      v24 = *(void (__fastcall **)(int *, int, BlockSource *, char *))(*(_DWORD *)v19 + 288);
      j_BlockPos::BlockPos((int)&v58, (int)&v71);
      v24(&v59, v23, v18, &v58);
      if ( v67 == 3 )
        v25 = v39;
        if ( v59 == 3
          || (v26 = *(int (__fastcall **)(int, BlockSource *, char *))(*(_DWORD *)v23 + 332),
              j_BlockPos::BlockPos((int)&v54, (int)&v71),
              v26(v23, v18, &v54) == 1)
          && j_ItemInstance::getId(v39) != *(_WORD *)(Item::mBucket + 18) )
          v30 = *((_BYTE *)v2 + 100);
          _R2 = &v72;
          _R0 = &v74;
          _R1 = &v73;
          if ( *((_BYTE *)v2 + 100) )
            v30 = 1;
        else
          j_Vec3::Vec3((int)&v51, (int)&v61);
          _R1 = (float *)&v63;
          v72 = v51;
          _R2 = (float *)&v62;
          v73 = v52;
          v74 = v53;
          _R0 = (float *)&v64;
          v30 = v60;
        j_Vec3::Vec3((int)&v55, (int)&v69);
        _R1 = (float *)&v63;
        v72 = v55;
        _R2 = (float *)&v62;
        v73 = v56;
        v74 = v57;
        _R0 = (float *)&v64;
        v30 = v68;
        VLDR            S20, [R1]
        VLDR            S18, [R0]
        VLDR            S16, [R2]
      j_BlockPos::BlockPos((int)&v47, (int)&v72);
      j_Vec3::Vec3((int)&v48, (int)&v47);
        VLDR            S22, [SP,#0x1F8+var_174]
        VLDR            S24, [SP,#0x1F8+var_170]
        VLDR            S26, [SP,#0x1F8+var_16C]
      v31 = j_Entity::getPlayerOwner(*((Entity **)v2 + 1));
      j_BlockPos::BlockPos((int)&v44, (int)&v72);
        VSUB.F32        S18, S18, S26
        VSUB.F32        S20, S20, S24
        VSUB.F32        S16, S16, S22
      if ( _ZF || (*(int (__fastcall **)(signed int))(*(_DWORD *)v31 + 652))(v31) != 1 )
          VSTR            S20, [SP,#0x1F8+var_1EC]
          VSTR            S18, [SP,#0x1F8+var_1E8]
          VSTR            S16, [SP,#0x1F8+var_1F0]
        *((_BYTE *)v2 + 16) = j_ItemInstance::useOn(v25, *((Entity **)v2 + 1), v44, v45, v46, v30, 0.0, 0.0, v38, 0);
        v32 = j_ItemInstance::ItemInstance((ItemInstance *)&v40, (int)v25);
        *((_BYTE *)v2 + 16) = j_ItemInstance::useOn(v32, *((Entity **)v2 + 1), v44, v45, v46, v30, 0.0, 0.0, v38, 0);
        if ( ptr )
          j_operator delete(ptr);
        if ( v42 )
          j_operator delete(v42);
        if ( v41 )
          (*(void (**)(void))(*(_DWORD *)v41 + 4))();
      v33 = j_Entity::getContainerComponent(*((Entity **)v2 + 1));
      v34 = v33;
      if ( v33 )
        v35 = *((_DWORD *)v2 + 24);
        v36 = (ItemInstance *)(*(int (**)(void))(**(_DWORD **)(v33 + 4) + 16))();
        if ( j_ItemInstance::operator!=(v36, v25) == 1 )
          v37 = *((_DWORD *)v2 + 24);
          (*(void (**)(void))(**(_DWORD **)(v34 + 4) + 32))();
    result = 1;
  return result;
}


signed int __fastcall AgentCommands::DropCommand::isDone(AgentCommands::DropCommand *this)
{
  return 1;
}


void __fastcall AgentCommands::MoveCommand::~MoveCommand(AgentCommands::MoveCommand *this)
{
  AgentCommands::MoveCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2724F8C;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete((void *)v1);
}


int __fastcall AgentCommands::MoveCommand::tick(AgentCommands::MoveCommand *this)
{
  int result; // r0@1
  __int64 v8; // [sp+0h] [bp-18h]@4
  int v9; // [sp+8h] [bp-10h]@4

  _R4 = this;
  result = (*(int (**)(void))(**((_DWORD **)this + 1) + 488))();
  if ( result == 312 )
  {
    _R0 = (Agent *)*((_DWORD *)_R4 + 1);
    __asm
    {
      VLDR            S0, [R4,#0x14]
      VLDR            S2, [R4,#0x18]
      VLDR            S6, [R0,#0x48]
      VLDR            S8, [R0,#0x4C]
      VSUB.F32        S0, S0, S6
      VLDR            S4, [R4,#0x1C]
      VSUB.F32        S2, S2, S8
      VLDR            S10, [R0,#0x50]
      VSUB.F32        S4, S4, S10
      VMUL.F32        S6, S0, S0
      VMUL.F32        S8, S2, S2
      VMUL.F32        S10, S4, S4
      VADD.F32        S6, S8, S6
      VLDR            S8, =0.0001
      VADD.F32        S6, S6, S10
      VSQRT.F32       S6, S6
      VCMPE.F32       S6, S8
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      v9 = dword_2822498;
      v8 = *(_QWORD *)&Vec3::ZERO;
    else
      __asm
      {
        VDIV.F32        S0, S0, S6
        VDIV.F32        S2, S2, S6
        VDIV.F32        S4, S4, S6
        VSTR            S0, [SP,#0x18+var_18]
        VSTR            S2, [SP,#0x18+var_18+4]
        VSTR            S4, [SP,#0x18+var_10]
      }
    j_Agent::setMoveDirection(_R0, (const Vec3 *)&v8);
    result = 1;
    *(_BYTE *)(*((_DWORD *)_R4 + 1) + 216) = 1;
    if ( !*((_BYTE *)_R4 + 32) )
      *((_BYTE *)_R4 + 32) = 1;
  }
  return result;
}


void __fastcall AgentCommands::GetItemCountCommand::fireCommandDoneEvent(AgentCommands::GetItemCountCommand *this)
{
  AgentCommands::GetItemCountCommand::fireCommandDoneEvent(this);
}


void __fastcall AgentCommands::InspectDataCommand::fireCommandDoneEvent(AgentCommands::InspectDataCommand *this)
{
  AgentCommands::InspectDataCommand::fireCommandDoneEvent(this);
}


void __fastcall AgentCommands::DetectCommand::~DetectCommand(AgentCommands::DetectCommand *this)
{
  AgentCommands::DetectCommand::~DetectCommand(this);
}


signed int __fastcall AgentCommands::DetectCommand::isDone(AgentCommands::DetectCommand *this)
{
  return 1;
}


int __fastcall AgentCommands::DropAllCommand::DropAllCommand(int a1, int a2, AgentCommandComponent *a3, char a4)
{
  int v4; // r6@1
  char v5; // r4@1
  AgentCommandComponent *v6; // r7@1
  int v7; // r5@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+8h] [bp-20h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v12, "dropall");
  *(_DWORD *)v7 = &off_2724F8C;
  *(_DWORD *)(v7 + 4) = j_AgentCommandComponent::getEntity(v6);
  *(_DWORD *)(v7 + 8) = v4;
  sub_21E8AF4((int *)(v7 + 12), &v12);
  *(_WORD *)(v7 + 16) = 0;
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  *(_DWORD *)v7 = &off_27250CC;
  *(_BYTE *)(v7 + 18) = v5;
  return v7;
}


int __fastcall AgentCommands::DetectCommand::execute(AgentCommands::DetectCommand *this)
{
  AgentCommands::DetectCommand *v1; // r4@1
  __int16 v2; // r0@1
  char v3; // r10@9
  BlockSource *v4; // r5@9
  Block *v5; // r8@9
  Entity *v6; // r6@9
  int result; // r0@9
  char v12; // [sp+4h] [bp-8Ch]@9
  char v13; // [sp+10h] [bp-80h]@9
  char v14; // [sp+1Ch] [bp-74h]@9
  char v15; // [sp+28h] [bp-68h]@1
  int v16; // [sp+30h] [bp-60h]@7
  void *v17; // [sp+4Ch] [bp-44h]@5
  void *ptr; // [sp+5Ch] [bp-34h]@3

  v1 = this;
  j_ItemInstance::ItemInstance((int)&v15);
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 912))();
  if ( ptr )
    j_operator delete(ptr);
  if ( v17 )
    j_operator delete(v17);
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  v3 = 0;
  v16 = 0;
  v4 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 1));
  j_AgentCommands::Command::_getNextPosFromDirection((int)&v14, (int)v1, *((_BYTE *)v1 + 18));
  j_BlockPos::BlockPos((int)&v13, (int)&v14);
  v5 = (Block *)j_BlockSource::getBlock(v4, (const BlockPos *)&v13);
  v6 = (Entity *)*((_DWORD *)v1 + 1);
  j_BlockPos::BlockPos((int)&v12, (int)&v14);
  result = j_BlockSource::checkBlockDestroyPermissions(
             v4,
             v6,
             (const BlockPos *)&v12,
             (const ItemInstance *)&ItemInstance::EMPTY_ITEM,
             1);
  if ( result == 1 )
  {
    result = j_Block::getDestroySpeed(v5);
    __asm
    {
      VMOV            S0, R0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      v3 = 1;
    *((_BYTE *)v1 + 16) = v3;
  }
  return result;
}


signed int __fastcall AgentCommands::TransferToCommand::isDone(AgentCommands::TransferToCommand *this)
{
  return 1;
}


void __fastcall AgentCommands::CollectCommand::execute(AgentCommands::CollectCommand *this)
{
  AgentCommands::CollectCommand *v1; // r4@1
  __int16 v2; // r0@1
  int v3; // r0@9
  int v4; // r6@9
  int v5; // r7@9
  int v6; // r5@9
  int v7; // r6@9
  int v8; // r7@9
  int v9; // r0@9
  int v10; // r5@9
  int v11; // r0@9
  unsigned __int64 *v12; // r0@9
  unsigned __int64 *v13; // r7@9
  ItemEntity **v14; // r9@9
  int v15; // r5@9
  int v16; // r6@9
  signed int v17; // r0@9
  ItemEntity **v18; // r0@11
  int v19; // r0@14
  int v20; // r7@14
  int v21; // r0@17
  bool v22; // zf@17
  int v23; // r5@20
  ItemEntity **v24; // r7@20
  ContainerComponent *v25; // r0@21
  int v26; // r0@21
  int v27; // r0@26
  bool v28; // zf@26
  int v29; // r7@29
  ItemEntity **v30; // r5@29
  ItemEntity *v31; // r6@30
  ContainerComponent *v32; // r0@31
  signed int v33; // [sp+0h] [bp-C8h]@9
  signed int v34; // [sp+4h] [bp-C4h]@9
  int v35; // [sp+8h] [bp-C0h]@9
  char v36; // [sp+Ch] [bp-BCh]@9
  char v37; // [sp+28h] [bp-A0h]@9
  char v38; // [sp+34h] [bp-94h]@9
  int v39; // [sp+40h] [bp-88h]@9
  int v40; // [sp+44h] [bp-84h]@9
  int v41; // [sp+48h] [bp-80h]@9
  int v42; // [sp+4Ch] [bp-7Ch]@9
  int v43; // [sp+50h] [bp-78h]@9
  int v44; // [sp+54h] [bp-74h]@9
  int v45; // [sp+58h] [bp-70h]@9
  char v46; // [sp+60h] [bp-68h]@1
  int v47; // [sp+68h] [bp-60h]@7
  void *v48; // [sp+84h] [bp-44h]@5
  void *ptr; // [sp+94h] [bp-34h]@3

  v1 = this;
  j_ItemInstance::ItemInstance((int)&v46);
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 912))();
  if ( ptr )
    j_operator delete(ptr);
  if ( v48 )
    j_operator delete(v48);
  if ( v47 )
    (*(void (**)(void))(*(_DWORD *)v47 + 4))();
  v47 = 0;
  v3 = *((_DWORD *)v1 + 1);
  v4 = *(_DWORD *)(v3 + 268);
  v5 = *(_DWORD *)(v3 + 272);
  v39 = *(_DWORD *)(v3 + 264);
  v40 = v4;
  v41 = v5;
  v6 = *(_DWORD *)(v3 + 280);
  v7 = *(_DWORD *)(v3 + 284);
  v8 = *(_DWORD *)(v3 + 288);
  v42 = *(_DWORD *)(v3 + 276);
  v43 = v6;
  v44 = v7;
  v45 = v8;
  v9 = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
  j_BlockPos::BlockPos((int)&v37, v9);
  j_Vec3::Vec3((int)&v38, (int)&v37);
  j_AABB::centerAt((AABB *)&v39, (const Vec3 *)&v38);
  v10 = j_Entity::getRegion(*((Entity **)v1 + 1));
  v11 = *((_DWORD *)v1 + 1);
  v33 = 1077936128;
  v34 = 1077936128;
  v35 = 1077936128;
  j_AABB::resize((AABB *)&v36, (const Vec3 *)(v11 + 264), (int)&v33);
  v12 = (unsigned __int64 *)j_BlockSource::fetchEntities(v10, 64, (int)&v36, 0);
  v13 = v12;
  v14 = 0;
  v15 = *v12 >> 32;
  v16 = *v12;
  v17 = v15 - v16;
  if ( 0 != (v15 - v16) >> 2 )
  {
    if ( (unsigned int)(v17 >> 2) >= 0x40000000 )
      sub_21E57F4();
    v18 = (ItemEntity **)j_operator new(v17);
    v15 = *v13 >> 32;
    v16 = *v13;
    v14 = v18;
  }
    j___aeabi_memmove4_0((int)v14, v16);
  v19 = *((_DWORD *)v1 + 6);
  v20 = (v15 - v16) >> 2;
  if ( v19 )
    if ( v19 == 1 && v15 != v16 )
    {
      v21 = j_Entity::getContainerComponent(*((Entity **)v1 + 1));
      v22 = v21 == 0;
      if ( v21 )
        v22 = v20 == 0;
      if ( !v22 )
      {
        v23 = 4 * v20;
        v24 = v14;
        do
        {
          v25 = (ContainerComponent *)j_Entity::getContainerComponent(*((Entity **)v1 + 1));
          v26 = j_ContainerComponent::addItem(v25, *v24);
          ++v24;
          if ( v26 == 1 )
            *((_BYTE *)v1 + 16) = 1;
          v23 -= 4;
        }
        while ( v23 );
      }
    }
  else if ( v15 != v16 )
    v27 = j_Entity::getContainerComponent(*((Entity **)v1 + 1));
    v28 = v27 == 0;
    if ( v27 )
      v28 = v20 == 0;
    if ( !v28 )
      v29 = 4 * v20;
      v30 = v14;
      do
        v31 = *v30;
        if ( j_ItemInstance::getId((ItemEntity *)((char *)*v30 + 3416)) == *((_DWORD *)v1 + 5) )
          v32 = (ContainerComponent *)j_Entity::getContainerComponent(*((Entity **)v1 + 1));
          if ( j_ContainerComponent::addItem(v32, v31) == 1 )
        v29 -= 4;
        ++v30;
      while ( v29 );
  *((_BYTE *)v1 + 28) = 1;
  if ( v14 )
    j_operator delete(v14);
}


void __fastcall AgentCommands::DestroyCommand::~DestroyCommand(AgentCommands::DestroyCommand *this)
{
  AgentCommands::DestroyCommand::~DestroyCommand(this);
}


AgentCommands::GetItemCountCommand *__fastcall AgentCommands::GetItemCountCommand::GetItemCountCommand(AgentCommands::GetItemCountCommand *this, Player *a2, AgentCommandComponent *a3, int a4)
{
  Player *v4; // r6@1
  int v5; // r4@1
  AgentCommandComponent *v6; // r7@1
  AgentCommands::GetItemCountCommand *v7; // r5@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+8h] [bp-20h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = this;
  sub_21E94B4((void **)&v12, "getitemcount");
  *(_DWORD *)v7 = &off_2724F8C;
  *((_DWORD *)v7 + 1) = j_AgentCommandComponent::getEntity(v6);
  *((_DWORD *)v7 + 2) = v4;
  sub_21E8AF4((int *)v7 + 3, &v12);
  *((_WORD *)v7 + 8) = 0;
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  *(_DWORD *)v7 = &off_272514C;
  *((_DWORD *)v7 + 5) = v5;
  return v7;
}


void __fastcall AgentCommands::GetItemDetailsCommand::~GetItemDetailsCommand(AgentCommands::GetItemDetailsCommand *this)
{
  AgentCommands::GetItemDetailsCommand *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5
  int v5; // r1@7
  void *v6; // r0@7
  unsigned int *v7; // r12@9
  signed int v8; // r1@11

  v1 = this;
  *(_DWORD *)this = &off_272518C;
  v2 = (void *)*((_DWORD *)this + 19);
  if ( v2 )
    j_operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 15);
  if ( v3 )
    j_operator delete(v3);
  v4 = *((_DWORD *)v1 + 8);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  *(_DWORD *)v1 = &off_2724F8C;
  v5 = *((_DWORD *)v1 + 3);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  j_operator delete((void *)v1);
}


int __fastcall AgentCommands::MoveCommand::execute(AgentCommands::MoveCommand *this)
{
  __int16 v2; // r0@1
  int result; // r0@9
  float v5; // r6@10
  float v6; // r7@10
  __int64 v14; // [sp+0h] [bp-88h]@12
  int v15; // [sp+8h] [bp-80h]@12
  int v16; // [sp+Ch] [bp-7Ch]@10
  int v17; // [sp+10h] [bp-78h]@10
  int v18; // [sp+14h] [bp-74h]@10
  char v19; // [sp+18h] [bp-70h]@1
  int v20; // [sp+20h] [bp-68h]@7
  void *v21; // [sp+3Ch] [bp-4Ch]@5
  void *ptr; // [sp+4Ch] [bp-3Ch]@3

  _R4 = this;
  j_ItemInstance::ItemInstance((int)&v19);
  v2 = (*(int (**)(void))(**((_DWORD **)_R4 + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)_R4 + 1) + 912))();
  if ( ptr )
    j_operator delete(ptr);
  if ( v21 )
    j_operator delete(v21);
  if ( v20 )
    (*(void (**)(void))(*(_DWORD *)v20 + 4))();
  v20 = 0;
  result = (*(int (**)(void))(**((_DWORD **)_R4 + 1) + 488))();
  if ( result == 312 )
  {
    j_AgentCommands::Command::_getNextPosFromDirection((int)&v16, (int)_R4, *((_BYTE *)_R4 + 18));
    *((_DWORD *)_R4 + 5) = v16;
    *((_DWORD *)_R4 + 6) = v17;
    *((_DWORD *)_R4 + 7) = v18;
    j_AgentCommands::MoveCommand::_adjustDestinationForPartialBlocks(_R4);
    _R5 = *((_DWORD *)_R4 + 1);
    *((_DWORD *)_R4 + 9) = *(_DWORD *)(_R5 + 72);
    *((_DWORD *)_R4 + 10) = *(_DWORD *)(_R5 + 76);
    *((_DWORD *)_R4 + 11) = *(_DWORD *)(_R5 + 80);
    v5 = *(float *)(_R5 + 76);
    v6 = *(float *)(_R5 + 80);
    _R0 = j_floorf_0(*(float *)(_R5 + 72));
    __asm
    {
      VMOV            S18, R0
      VMOV.F32        S16, #-0.5
    }
    _R0 = j_floorf_0(v6);
      VMOV            S0, R0
      VSUB.F32        S18, S16, S18
      VSUB.F32        S16, S16, S0
    _R0 = j_floorf_0(v5);
      VLDR            S0, [R4,#0x14]
      VMOV            S6, R0
      VLDR            S2, [R4,#0x18]
      VLDR            S4, [R4,#0x1C]
      VADD.F32        S8, S18, S0
      VSUB.F32        S6, S2, S6
      VADD.F32        S10, S16, S4
      VSTR            S8, [R4,#0x30]
      VSTR            S6, [R4,#0x34]
      VSTR            S10, [R4,#0x38]
      VLDR            S6, [R5,#0x48]
      VLDR            S8, [R5,#0x4C]
      VSUB.F32        S0, S0, S6
      VLDR            S10, [R5,#0x50]
      VSUB.F32        S2, S2, S8
      VSUB.F32        S4, S4, S10
      VMUL.F32        S6, S0, S0
      VMUL.F32        S8, S2, S2
      VMUL.F32        S10, S4, S4
      VADD.F32        S6, S8, S6
      VLDR            S8, =0.0001
      VADD.F32        S6, S6, S10
      VSQRT.F32       S6, S6
      VCMPE.F32       S6, S8
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      v15 = dword_2822498;
      v14 = *(_QWORD *)&Vec3::ZERO;
    else
      __asm
      {
        VDIV.F32        S0, S0, S6
        VDIV.F32        S2, S2, S6
        VDIV.F32        S4, S4, S6
        VSTR            S0, [SP,#0x88+var_88]
        VSTR            S2, [SP,#0x88+var_88+4]
        VSTR            S4, [SP,#0x88+var_80]
      }
    result = j_Agent::setMoveDirection((Agent *)_R5, (const Vec3 *)&v14);
  }
  return result;
}


float __fastcall AgentCommands::TurnCommand::execute(AgentCommands::TurnCommand *this)
{
  AgentCommands::TurnCommand *v1; // r4@1
  __int16 v2; // r0@1
  float result; // r0@9
  float v4; // r1@9
  int v10; // r0@10
  __int16 v12; // r0@15
  AttributeInstance *v13; // r0@16
  int v16; // [sp+0h] [bp-50h]@1
  int v17; // [sp+8h] [bp-48h]@7
  void *v18; // [sp+24h] [bp-2Ch]@5
  void *ptr; // [sp+34h] [bp-1Ch]@3

  v1 = this;
  j_ItemInstance::ItemInstance((int)&v16);
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 912))();
  if ( ptr )
    j_operator delete(ptr);
  if ( v18 )
    j_operator delete(v18);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  v17 = 0;
  result = COERCE_FLOAT((*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))());
  if ( LODWORD(result) == 312 )
  {
    _R0 = *((_DWORD *)v1 + 1);
    __asm
    {
      VLDR            S0, [R0,#0x7C]
      VSTR            S0, [R4,#0x18]
    }
    v10 = *((_BYTE *)v1 + 18);
    if ( v10 == 5 )
      __asm { VLDR            S2, =90.0 }
    else
      if ( v10 != 4 )
      {
LABEL_15:
        __asm { VMOV            R0, S0 }
        *((_DWORD *)v1 + 6) = j_mce::Math::wrapDegrees(_R0, v4);
        v12 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
        if ( j_EntityClassTree::isMob(v12) == 1 )
        {
          v13 = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)v1 + 1) + 1004))();
          _R0 = j_AttributeInstance::getCurrentValue(v13);
          __asm { VMOV            S0, R0 }
        }
        else
          __asm { VMOV.F32        S0, #0.25 }
        __asm
          VMUL.F32        S0, S0, S0
          VLDR            S2, =150.0
          VMUL.F32        S0, S0, S2
          VMOV            R0, S0
        result = j_floorf_0(_R0);
        *((float *)v1 + 5) = result;
        return result;
      }
      __asm { VLDR            S2, =-90.0 }
      VADD.F32        S0, S0, S2
    goto LABEL_15;
  }
  return result;
}


void __fastcall AgentCommands::GetItemSpaceCommand::fireCommandDoneEvent(AgentCommands::GetItemSpaceCommand *this)
{
  AgentCommands::GetItemSpaceCommand::fireCommandDoneEvent(this);
}


signed int __fastcall AgentCommands::DestroyCommand::isDone(AgentCommands::DestroyCommand *this)
{
  AgentCommands::DestroyCommand *v1; // r4@1
  BlockSource *v2; // r0@3
  Level *v3; // r5@4
  BlockSource *v4; // r0@4
  signed int result; // r0@5
  char v6; // [sp+8h] [bp-28h]@3
  char v7; // [sp+14h] [bp-1Ch]@3

  v1 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 1) + 488))() == 312
    && j_Agent::swingAnimationCompleted(*((Agent **)v1 + 1)) != 1 )
  {
    result = 0;
  }
  else
    j_AgentCommands::Command::_getNextPosFromDirection((int)&v6, (int)v1, *((_BYTE *)v1 + 18));
    j_BlockPos::BlockPos((int)&v7, (int)&v6);
    v2 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 1));
    if ( j_BlockSource::checkBlockDestroyPermissions(
           v2,
           *((Entity **)v1 + 2),
           (const BlockPos *)&v7,
           (const ItemInstance *)&ItemInstance::EMPTY_ITEM,
           1) == 1 )
    {
      v3 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 1));
      v4 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 1));
      *((_BYTE *)v1 + 16) = j_Level::destroyBlock(v3, v4, (const BlockPos *)&v7, 1);
    }
    result = 1;
  return result;
}


int __fastcall AgentCommands::AttackCommand::execute(AgentCommands::AttackCommand *this)
{
  AgentCommands::AttackCommand *v1; // r4@1
  __int16 v2; // r0@1
  int result; // r0@9
  int v4; // [sp+0h] [bp-50h]@1
  int v5; // [sp+8h] [bp-48h]@7
  void *v6; // [sp+24h] [bp-2Ch]@5
  void *ptr; // [sp+34h] [bp-1Ch]@3

  v1 = this;
  j_ItemInstance::ItemInstance((int)&v4);
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 912))();
  if ( ptr )
    j_operator delete(ptr);
  if ( v6 )
    j_operator delete(v6);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  v5 = 0;
  result = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( result == 312 )
    result = j_Agent::swingArm(*((Agent **)v1 + 1));
  return result;
}


int __fastcall AgentCommands::Command::_getNextPosFromDirection(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r8@1
  int v5; // r9@1
  int v6; // r0@1
  __int64 v7; // kr00_8@1
  float v8; // r4@1
  __int16 v17; // r0@1
  int result; // r0@1
  float v19; // r1@1
  void **v21; // r0@8
  float v25; // r1@12

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = (*(int (**)(void))(**(_DWORD **)(a2 + 4) + 52))();
  v7 = *(_QWORD *)v6;
  v8 = *(float *)(v6 + 8);
  _R5 = j_floorf_0(COERCE_FLOAT(*(_QWORD *)v6));
  _R7 = j_floorf_0(*((float *)&v7 + 1));
  __asm
  {
    VMOV.F32        S16, #0.5
    VMOV            S18, R5
  }
  _R0 = j_floorf_0(v8);
    VMOV            S0, R0
    VADD.F32        S18, S18, S16
    VADD.F32        S16, S0, S16
    VSTR            S18, [R8]
  *(float *)(v4 + 4) = _R7;
  __asm { VSTR            S16, [R8,#8] }
  _R0 = *(_DWORD *)(v3 + 4);
  __asm { VLDR            S20, [R0,#0x7C] }
  v17 = (*(int (**)(void))(*(_DWORD *)_R0 + 488))();
  result = j_EntityClassTree::isMob(v17);
  if ( result == 1 )
    result = *(_DWORD *)(v3 + 4) + 3412;
    __asm { VLDREQ          S20, [R0] }
  __asm { VMOV            S0, R7 }
  switch ( v5 )
    case 0:
      __asm { VMOV.F32        S2, #1.0; jumptable 01B0C81E case 0 }
      goto LABEL_6;
    case 1:
      __asm { VMOV.F32        S2, #-1.0; jumptable 01B0C81E case 1 }
LABEL_6:
      __asm
      {
        VADD.F32        S0, S0, S2
        VSTR            S0, [R8,#4]
      }
      return result;
    case 2:
      _R0 = &mce::Math::DEGRAD;
        VLDR            S0, [R0]
        VMUL.F32        S0, S0, S20
      goto LABEL_12;
    case 3:
      __asm { VLDR            S0, =180.0 }
      v21 = &mce::Math::DEGRAD;
      goto LABEL_11;
    case 4:
      __asm { VLDR            S0, =-90.0 }
    case 5:
      __asm { VLDR            S0, =90.0 }
LABEL_11:
      __asm { VADD.F32        S0, S20, S0 }
      _R0 = *v21;
        VLDR            S2, [R0]
        VMUL.F32        S0, S2, S0
LABEL_12:
      __asm { VMOV            R4, S0 }
      _R0 = j_mce::Math::sin(_R4, v19);
        VMOV            S0, R0
        VSUB.F32        S0, S18, S0
        VSTR            S0, [R8]
      result = j_mce::Math::cos(_R4, v25);
        VADD.F32        S0, S16, S0
        VSTR            S0, [R8,#8]
      break;
    default:
  return result;
}


void __fastcall AgentCommands::GetItemSpaceCommand::~GetItemSpaceCommand(AgentCommands::GetItemSpaceCommand *this)
{
  AgentCommands::GetItemSpaceCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2724F8C;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete((void *)v1);
}


void __fastcall AgentCommands::DetectCommand::~DetectCommand(AgentCommands::DetectCommand *this)
{
  AgentCommands::DetectCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2724F8C;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete((void *)v1);
}


int __fastcall AgentCommands::Command::Command(int a1, int a2, AgentCommandComponent *a3, int *a4)
{
  int v4; // r6@1
  int *v5; // r4@1
  int v6; // r5@1

  v4 = a1;
  v5 = a4;
  v6 = a2;
  *(_DWORD *)a1 = &off_2724F8C;
  *(_DWORD *)(a1 + 4) = j_AgentCommandComponent::getEntity(a3);
  *(_DWORD *)(v4 + 8) = v6;
  sub_21E8AF4((int *)(v4 + 12), v5);
  *(_WORD *)(v4 + 16) = 0;
  return v4;
}


void __fastcall AgentCommands::TurnCommand::~TurnCommand(AgentCommands::TurnCommand *this)
{
  AgentCommands::TurnCommand::~TurnCommand(this);
}


int __fastcall AgentCommands::TurnCommand::tick(AgentCommands::TurnCommand *this, int a2, int a3, float a4)
{
  AgentCommands::TurnCommand *v4; // r4@1
  mce::Math *v5; // r0@1
  float v6; // r1@1
  int result; // r0@1

  v4 = this;
  v5 = (mce::Math *)j_mce::Math::clampRotate(
                      *(mce::Math **)(*((_DWORD *)this + 1) + 124),
                      COERCE_FLOAT(*(_QWORD *)((char *)this + 20) >> 32),
                      COERCE_FLOAT(*(_QWORD *)((char *)this + 20)),
                      a4);
  result = j_mce::Math::wrapDegrees(v5, v6);
  *(_DWORD *)(*((_DWORD *)v4 + 1) + 124) = result;
  return result;
}


void __fastcall AgentCommands::CollectCommand::~CollectCommand(AgentCommands::CollectCommand *this)
{
  AgentCommands::CollectCommand::~CollectCommand(this);
}


int __fastcall AgentCommands::DetectRedstoneCommand::execute(AgentCommands::DetectRedstoneCommand *this)
{
  AgentCommands::DetectRedstoneCommand *v1; // r4@1
  __int16 v2; // r0@1
  char v3; // r6@9
  Dimension *v4; // r0@9
  CircuitSystem *v5; // r5@9
  int result; // r0@9
  int v7; // [sp+0h] [bp-78h]@9
  char v8; // [sp+Ch] [bp-6Ch]@9
  char v9; // [sp+18h] [bp-60h]@1
  int v10; // [sp+20h] [bp-58h]@7
  void *v11; // [sp+3Ch] [bp-3Ch]@5
  void *ptr; // [sp+4Ch] [bp-2Ch]@3

  v1 = this;
  j_ItemInstance::ItemInstance((int)&v9);
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 912))();
  if ( ptr )
    j_operator delete(ptr);
  if ( v11 )
    j_operator delete(v11);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  v3 = 0;
  v10 = 0;
  v4 = (Dimension *)j_Entity::getDimension(*((Entity **)v1 + 1));
  v5 = (CircuitSystem *)j_Dimension::getCircuitSystem(v4);
  j_AgentCommands::Command::_getNextPosFromDirection((int)&v8, (int)v1, *((_BYTE *)v1 + 18));
  j_BlockPos::BlockPos((int)&v7, (int)&v8);
  result = j_CircuitSystem::getStrength(v5, (const BlockPos *)&v7);
  if ( result > 0 )
    v3 = 1;
  *((_BYTE *)v1 + 16) = v3;
  return result;
}


int __fastcall AgentCommands::DestroyCommand::execute(AgentCommands::DestroyCommand *this)
{
  AgentCommands::DestroyCommand *v1; // r4@1
  __int16 v2; // r0@1
  int result; // r0@9
  int v4; // [sp+0h] [bp-50h]@1
  int v5; // [sp+8h] [bp-48h]@7
  void *v6; // [sp+24h] [bp-2Ch]@5
  void *ptr; // [sp+34h] [bp-1Ch]@3

  v1 = this;
  j_ItemInstance::ItemInstance((int)&v4);
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 912))();
  if ( ptr )
    j_operator delete(ptr);
  if ( v6 )
    j_operator delete(v6);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  v5 = 0;
  result = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( result == 312 )
    result = j_Agent::swingArm(*((Agent **)v1 + 1));
  return result;
}


AgentCommands::GetItemDetailsCommand *__fastcall AgentCommands::GetItemDetailsCommand::~GetItemDetailsCommand(AgentCommands::GetItemDetailsCommand *this)
{
  AgentCommands::GetItemDetailsCommand *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5
  int v5; // r1@7
  void *v6; // r0@7
  unsigned int *v8; // r12@9
  signed int v9; // r1@11

  v1 = this;
  *(_DWORD *)this = &off_272518C;
  v2 = (void *)*((_DWORD *)this + 19);
  if ( v2 )
    j_operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 15);
  if ( v3 )
    j_operator delete(v3);
  v4 = *((_DWORD *)v1 + 8);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  *(_DWORD *)v1 = &off_2724F8C;
  v5 = *((_DWORD *)v1 + 3);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v5 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  return v1;
}


void __fastcall AgentCommands::DetectRedstoneCommand::~DetectRedstoneCommand(AgentCommands::DetectRedstoneCommand *this)
{
  AgentCommands::DetectRedstoneCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2724F8C;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete((void *)v1);
}


void __fastcall AgentCommands::Command::fireCommandDoneEvent(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r5@1
  Entity *v4; // r6@1
  void **v5; // r0@5
  void *v6; // r0@5
  void *v7; // r0@6
  void *v8; // r0@7
  void *v9; // r0@8
  void *v10; // r0@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  unsigned int *v13; // r2@15
  signed int v14; // r1@17
  unsigned int *v15; // r2@19
  signed int v16; // r1@21
  unsigned int *v17; // r2@23
  signed int v18; // r1@25
  unsigned int *v19; // r2@27
  signed int v20; // r1@29
  int v21; // [sp+Ch] [bp-8h]@5
  int v22; // [sp+14h] [bp+0h]@5
  void **v23; // [sp+18h] [bp+4h]@5
  int v24; // [sp+50h] [bp+3Ch]@9
  int v25; // [sp+54h] [bp+40h]@8
  int v26; // [sp+58h] [bp+44h]@7

  v1 = a1;
  v2 = *(_WORD *)(a1 + 16);
  v3 = 2;
  v4 = *(Entity **)(v1 + 8);
  if ( (_BYTE)v2 )
    v3 = 3;
  if ( v2 <= 0xFF )
    v3 = (unsigned __int8)v2;
  sub_21E94B4((void **)&v22, (const char *)&unk_257BC67);
  v5 = sub_21E94B4((void **)&v21, (const char *)&unk_257BC67);
  j_EventPacket::EventPacket((int)&v23, v4, v3, v1 + 12, (int)&v22, (int)v5);
  v6 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v12 = __ldrex(v11);
        __strex(v12 - 1, v11);
      }
      while ( &v22 );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v22 - 4);
        v14 = __ldrex(v13);
        __strex(v14 - 1, v13);
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  (*(void (**)(void))(**(_DWORD **)(v1 + 8) + 1448))();
  v23 = &off_26E9D30;
  v8 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v26 - 4);
        v16 = __ldrex(v15);
        __strex(v16 - 1, v15);
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v25 - 4);
        v18 = __ldrex(v17);
        __strex(v18 - 1, v17);
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v24 - 4);
        v20 = __ldrex(v19);
        __strex(v20 - 1, v19);
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


void __fastcall AgentCommands::Command::~Command(void *ptr)
{
  void *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = ptr;
  *(_DWORD *)ptr = &off_2724F8C;
  v2 = *((_DWORD *)ptr + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete(v1);
}


int __fastcall AgentCommands::InspectCommand::InspectCommand(int a1, int a2, AgentCommandComponent *a3, char a4)
{
  int v4; // r6@1
  char v5; // r5@1
  AgentCommandComponent *v6; // r7@1
  int v7; // r4@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+Ch] [bp-24h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v12, "inspect");
  *(_DWORD *)v7 = &off_2724F8C;
  *(_DWORD *)(v7 + 4) = j_AgentCommandComponent::getEntity(v6);
  *(_DWORD *)(v7 + 8) = v4;
  sub_21E8AF4((int *)(v7 + 12), &v12);
  *(_WORD *)(v7 + 16) = 0;
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  *(_DWORD *)v7 = &off_272500C;
  *(_BYTE *)(v7 + 18) = v5;
  sub_21E94B4((void **)(v7 + 20), (const char *)&unk_257BC67);
  return v7;
}


void __fastcall AgentCommands::InspectCommand::fireCommandDoneEvent(AgentCommands::InspectCommand *this)
{
  AgentCommands::InspectCommand::fireCommandDoneEvent(this);
}


void __fastcall AgentCommands::AttackCommand::~AttackCommand(AgentCommands::AttackCommand *this)
{
  AgentCommands::AttackCommand::~AttackCommand(this);
}


void __fastcall AgentCommands::DropCommand::~DropCommand(AgentCommands::DropCommand *this)
{
  AgentCommands::DropCommand::~DropCommand(this);
}


signed int __fastcall AgentCommands::GetItemCountCommand::execute(AgentCommands::GetItemCountCommand *this)
{
  AgentCommands::GetItemCountCommand *v1; // r4@1
  __int16 v2; // r0@1
  signed int result; // r0@9
  int v4; // [sp+0h] [bp-50h]@1
  int v5; // [sp+8h] [bp-48h]@7
  void *v6; // [sp+24h] [bp-2Ch]@5
  void *ptr; // [sp+34h] [bp-1Ch]@3

  v1 = this;
  j_ItemInstance::ItemInstance((int)&v4);
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 912))();
  if ( ptr )
    j_operator delete(ptr);
  if ( v6 )
    j_operator delete(v6);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  result = 1;
  *((_BYTE *)v1 + 16) = 1;
  return result;
}


void __fastcall AgentCommands::InspectDataCommand::~InspectDataCommand(AgentCommands::InspectDataCommand *this)
{
  AgentCommands::InspectDataCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2724F8C;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete((void *)v1);
}


void __fastcall AgentCommands::DetectRedstoneCommand::~DetectRedstoneCommand(AgentCommands::DetectRedstoneCommand *this)
{
  AgentCommands::DetectRedstoneCommand::~DetectRedstoneCommand(this);
}


void __fastcall AgentCommands::InspectCommand::~InspectCommand(AgentCommands::InspectCommand *this)
{
  AgentCommands::InspectCommand *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_272500C;
  v2 = *((_DWORD *)this + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_2724F8C;
  v4 = *((_DWORD *)v1 + 3);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  j_operator delete((void *)v1);
}


ContainerComponent *__fastcall AgentCommands::DropAllCommand::execute(AgentCommands::DropAllCommand *this)
{
  AgentCommands::DropAllCommand *v1; // r4@1
  __int16 v2; // r0@1
  ContainerComponent *result; // r0@9
  ContainerComponent *v4; // r5@9
  BlockSource *v5; // r6@10
  char v6; // [sp+4h] [bp-6Ch]@10
  char v7; // [sp+10h] [bp-60h]@1
  int v8; // [sp+18h] [bp-58h]@7
  void *v9; // [sp+34h] [bp-3Ch]@5
  void *ptr; // [sp+44h] [bp-2Ch]@3

  v1 = this;
  j_ItemInstance::ItemInstance((int)&v7);
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 912))();
  if ( ptr )
    j_operator delete(ptr);
  if ( v9 )
    j_operator delete(v9);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  v8 = 0;
  result = (ContainerComponent *)j_Entity::getContainerComponent(*((Entity **)v1 + 1));
  v4 = result;
  if ( result )
  {
    v5 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 1));
    j_AgentCommands::Command::_getNextPosFromDirection((int)&v6, (int)v1, *((_BYTE *)v1 + 18));
    result = (ContainerComponent *)j_ContainerComponent::dropContents(v4, v5, (const Vec3 *)&v6, 1);
    *((_BYTE *)v1 + 16) = 1;
  }
  return result;
}


signed int __fastcall AgentCommands::GetItemSpaceCommand::isDone(AgentCommands::GetItemSpaceCommand *this)
{
  return 1;
}


void __fastcall AgentCommands::PlaceCommand::~PlaceCommand(AgentCommands::PlaceCommand *this)
{
  AgentCommands::PlaceCommand::~PlaceCommand(this);
}


int __fastcall AgentCommands::DestroyCommand::DestroyCommand(int a1, int a2, AgentCommandComponent *a3, char a4)
{
  int v4; // r6@1
  char v5; // r4@1
  AgentCommandComponent *v6; // r7@1
  int v7; // r5@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+8h] [bp-20h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v12, "destroy");
  *(_DWORD *)v7 = &off_2724F8C;
  *(_DWORD *)(v7 + 4) = j_AgentCommandComponent::getEntity(v6);
  *(_DWORD *)(v7 + 8) = v4;
  sub_21E8AF4((int *)(v7 + 12), &v12);
  *(_WORD *)(v7 + 16) = 0;
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  *(_DWORD *)v7 = &off_272508C;
  *(_BYTE *)(v7 + 18) = v5;
  return v7;
}


void __fastcall AgentCommands::InspectCommand::fireCommandDoneEvent(AgentCommands::InspectCommand *this)
{
  AgentCommands::InspectCommand *v1; // r4@1
  unsigned int v2; // r0@1
  __int64 v3; // r2@1
  int v4; // r2@1
  void *v5; // r0@5
  void *v6; // r0@6
  void *v7; // r0@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  unsigned int *v12; // r2@17
  signed int v13; // r1@19
  __int64 v14; // [sp+0h] [bp-68h]@1
  void **v15; // [sp+8h] [bp-60h]@5
  int v16; // [sp+40h] [bp-28h]@7
  int v17; // [sp+44h] [bp-24h]@6
  int v18; // [sp+48h] [bp-20h]@5

  v1 = this;
  v2 = *((_WORD *)this + 8);
  HIDWORD(v3) = (char *)v1 + 20;
  LODWORD(v3) = &AgentCommands::Command::InspectKey;
  v14 = v3;
  v4 = 2;
  if ( (_BYTE)v2 )
    v4 = 3;
  if ( v2 <= 0xFF )
    v4 = (unsigned __int8)v2;
  j_EventPacket::EventPacket((int)&v15, *((Entity **)v1 + 2), v4, (int)v1 + 12, v14, SHIDWORD(v14));
  (*(void (**)(void))(**((_DWORD **)v1 + 2) + 1448))();
  v15 = &off_26E9D30;
  v5 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v18 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v17 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


signed int __fastcall AgentCommands::DetectRedstoneCommand::isDone(AgentCommands::DetectRedstoneCommand *this)
{
  return 1;
}


void __fastcall AgentCommands::CollectCommand::execute(AgentCommands::CollectCommand *this)
{
  AgentCommands::CollectCommand::execute(this);
}


int __fastcall AgentCommands::MoveCommand::MoveCommand(int a1, int a2, AgentCommandComponent *a3, char a4)
{
  int v4; // r6@1
  char v5; // r5@1
  AgentCommandComponent *v6; // r7@1
  int v7; // r4@1
  void *v8; // r0@1
  int result; // r0@2
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+8h] [bp-20h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v12, "move");
  *(_DWORD *)v7 = &off_2724F8C;
  *(_DWORD *)(v7 + 4) = j_AgentCommandComponent::getEntity(v6);
  *(_DWORD *)(v7 + 8) = v4;
  sub_21E8AF4((int *)(v7 + 12), &v12);
  *(_WORD *)(v7 + 16) = 0;
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  *(_DWORD *)v7 = &off_2724FAC;
  *(_BYTE *)(v7 + 18) = v5;
  result = v7;
  *(_BYTE *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 28) = 0;
  *(_DWORD *)(v7 + 20) = 0;
  *(_DWORD *)(v7 + 24) = 0;
  *(_DWORD *)(v7 + 36) = 0;
  *(_DWORD *)(v7 + 40) = 0;
  *(_DWORD *)(v7 + 44) = 0;
  *(_DWORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 52) = 0;
  *(_DWORD *)(v7 + 56) = 0;
  return result;
}


void __fastcall AgentCommands::MoveCommand::~MoveCommand(AgentCommands::MoveCommand *this)
{
  AgentCommands::MoveCommand::~MoveCommand(this);
}


void __fastcall AgentCommands::GetItemDetailsCommand::~GetItemDetailsCommand(AgentCommands::GetItemDetailsCommand *this)
{
  AgentCommands::GetItemDetailsCommand::~GetItemDetailsCommand(this);
}


void __fastcall AgentCommands::TurnCommand::~TurnCommand(AgentCommands::TurnCommand *this)
{
  AgentCommands::TurnCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2724F8C;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete((void *)v1);
}


void __fastcall AgentCommands::TransferToCommand::~TransferToCommand(AgentCommands::TransferToCommand *this)
{
  AgentCommands::TransferToCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2724F8C;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete((void *)v1);
}


int __fastcall AgentCommands::PlaceCommand::PlaceCommand(int a1, int a2, AgentCommandComponent *a3, int a4, int a5, char a6)
{
  int v6; // r6@1
  int v7; // r5@1
  AgentCommandComponent *v8; // r7@1
  int v9; // r4@1
  void *v10; // r0@1
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  int v14; // [sp+4h] [bp-24h]@1

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a1;
  sub_21E94B4((void **)&v14, "place");
  *(_DWORD *)v9 = &off_2724F8C;
  *(_DWORD *)(v9 + 4) = j_AgentCommandComponent::getEntity(v8);
  *(_DWORD *)(v9 + 8) = v6;
  sub_21E8AF4((int *)(v9 + 12), &v14);
  *(_WORD *)(v9 + 16) = 0;
  v10 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  *(_DWORD *)v9 = &off_272512C;
  j_ItemInstance::ItemInstance((ItemInstance *)(v9 + 24), v7);
  *(_DWORD *)(v9 + 96) = a5;
  *(_BYTE *)(v9 + 100) = a6;
  return v9;
}


void __fastcall AgentCommands::GetItemDetailsCommand::fireCommandDoneEvent(AgentCommands::GetItemDetailsCommand *this)
{
  ItemInstance *v1; // r7@0
  AgentCommands::GetItemDetailsCommand *v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r0@1
  bool v5; // zf@5
  Entity *v6; // r6@5
  void *v7; // r0@12
  void *v8; // r0@13
  void *v9; // r0@14
  void *v10; // r0@15
  unsigned int *v11; // r2@17
  signed int v12; // r1@19
  unsigned int *v13; // r2@21
  signed int v14; // r1@23
  unsigned int *v15; // r2@25
  signed int v16; // r1@27
  unsigned int *v17; // r2@29
  signed int v18; // r1@31
  int v19; // [sp+Ch] [bp-64h]@10
  void **v20; // [sp+10h] [bp-60h]@12
  int v21; // [sp+48h] [bp-28h]@15
  int v22; // [sp+4Ch] [bp-24h]@14
  int v23; // [sp+50h] [bp-20h]@13

  v2 = this;
  v3 = 2;
  v4 = *((_WORD *)this + 8);
  if ( (_BYTE)v4 )
    v3 = 3;
  if ( v4 <= 0xFF )
    v3 = (unsigned __int8)v4;
  v5 = *((_BYTE *)v2 + 39) == 0;
  v6 = (Entity *)*((_DWORD *)v2 + 2);
  if ( *((_BYTE *)v2 + 39) )
  {
    v1 = (AgentCommands::GetItemDetailsCommand *)((char *)v2 + 24);
    v5 = *((_DWORD *)v2 + 6) == 0;
  }
  if ( v5 || j_ItemInstance::isNull(v1) || !*((_BYTE *)v2 + 38) )
    sub_21E94B4((void **)&v19, " ");
  else
    j_ItemInstance::getRawNameId((ItemInstance *)&v19, (int)v1);
  j_EventPacket::EventPacket((int)&v20, v6, v3, (int)v2 + 12, (int)&AgentCommands::Command::GetItemDetailKey, (int)&v19);
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v19 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  (*(void (**)(void))(**((_DWORD **)v2 + 2) + 1448))();
  v20 = &off_26E9D30;
  v8 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v23 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v22 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v21 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


void __fastcall AgentCommands::TillCommand::~TillCommand(AgentCommands::TillCommand *this)
{
  AgentCommands::TillCommand *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5
  int v5; // r1@7
  void *v6; // r0@7
  unsigned int *v7; // r12@9
  signed int v8; // r1@11

  v1 = this;
  *(_DWORD *)this = &off_27251AC;
  v2 = (void *)*((_DWORD *)this + 19);
  if ( v2 )
    j_operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 15);
  if ( v3 )
    j_operator delete(v3);
  v4 = *((_DWORD *)v1 + 8);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  *(_DWORD *)v1 = &off_2724F8C;
  v5 = *((_DWORD *)v1 + 3);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  j_operator delete((void *)v1);
}


signed int __fastcall AgentCommands::GetItemDetailsCommand::isDone(AgentCommands::GetItemDetailsCommand *this)
{
  return 1;
}


signed int __fastcall AgentCommands::InspectCommand::execute(AgentCommands::InspectCommand *this)
{
  AgentCommands::InspectCommand *v1; // r4@1
  __int16 v2; // r0@1
  BlockSource *v3; // r5@9
  int v4; // r0@9
  signed int result; // r0@9
  int v6; // [sp+0h] [bp-78h]@9
  char v7; // [sp+Ch] [bp-6Ch]@9
  char v8; // [sp+18h] [bp-60h]@1
  int v9; // [sp+20h] [bp-58h]@7
  void *v10; // [sp+3Ch] [bp-3Ch]@5
  void *ptr; // [sp+4Ch] [bp-2Ch]@3

  v1 = this;
  j_ItemInstance::ItemInstance((int)&v8);
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
  if ( j_EntityClassTree::isMob(v2) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 1) + 912))();
  if ( ptr )
    j_operator delete(ptr);
  if ( v10 )
    j_operator delete(v10);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  v9 = 0;
  v3 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 1));
  j_AgentCommands::Command::_getNextPosFromDirection((int)&v6, (int)v1, *((_BYTE *)v1 + 18));
  j_BlockPos::BlockPos((int)&v7, (int)&v6);
  v4 = j_BlockSource::getBlock(v3, (const BlockPos *)&v7);
  EntityInteraction::setInteractText((int *)v1 + 5, (int *)(v4 + 12));
  result = 1;
  *((_BYTE *)v1 + 16) = 1;
  return result;
}


void __fastcall AgentCommands::GetItemCountCommand::~GetItemCountCommand(AgentCommands::GetItemCountCommand *this)
{
  AgentCommands::GetItemCountCommand *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2724F8C;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_operator delete((void *)v1);
}


signed int __fastcall AgentCommands::MoveCommand::_reachedPosition(AgentCommands::MoveCommand *this)
{
  signed int result; // r0@3

  _R1 = this;
  _R0 = *((_DWORD *)this + 1);
  __asm
  {
    VLDR            S2, [R1,#0x14]
    VLDR            S6, [R1,#0x18]
    VLDR            S0, [R0,#0x48]
    VLDR            S4, [R0,#0x4C]
    VSUB.F32        S2, S2, S0
    VLDR            S10, [R1,#0x1C]
    VSUB.F32        S6, S6, S4
    VLDR            S8, [R0,#0x50]
    VSUB.F32        S10, S10, S8
    VMUL.F32        S12, S2, S2
    VMUL.F32        S14, S6, S6
    VMUL.F32        S1, S10, S10
    VADD.F32        S12, S14, S12
    VLDR            S14, =0.0004
    VADD.F32        S12, S12, S1
    VCMPE.F32       S12, S14
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    goto LABEL_7;
    VLDR            S12, [R1,#0x24]
    VLDR            S14, [R1,#0x28]
    VSUB.F32        S0, S0, S12
    VLDR            S1, [R1,#0x2C]
    VSUB.F32        S4, S4, S14
    VSUB.F32        S8, S8, S1
    VMUL.F32        S0, S0, S2
    VMUL.F32        S2, S4, S6
    VMUL.F32        S4, S8, S10
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, #0.0
LABEL_7:
    (*(void (**)(void))(*(_DWORD *)_R0 + 48))();
    result = 1;
  else
    result = 0;
  return result;
}


int __fastcall AgentCommands::CollectCommand::CollectCommand(int a1, int a2, AgentCommandComponent *a3, int a4, int a5)
{
  int v5; // r6@1
  int v6; // r5@1
  AgentCommandComponent *v7; // r7@1
  int v8; // r4@1
  void *v9; // r0@1
  int result; // r0@2
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  int v13; // [sp+4h] [bp-24h]@1

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a1;
  sub_21E94B4((void **)&v13, "collect");
  *(_DWORD *)v8 = &off_2724F8C;
  *(_DWORD *)(v8 + 4) = j_AgentCommandComponent::getEntity(v7);
  *(_DWORD *)(v8 + 8) = v5;
  sub_21E8AF4((int *)(v8 + 12), &v13);
  *(_WORD *)(v8 + 16) = 0;
  v9 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v13 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  *(_DWORD *)v8 = &off_272510C;
  *(_DWORD *)(v8 + 20) = v6;
  *(_DWORD *)(v8 + 24) = a5;
  result = v8;
  *(_BYTE *)(v8 + 28) = 0;
  return result;
}


int __fastcall AgentCommands::DropCommand::DropCommand(int a1, int a2, AgentCommandComponent *a3, int a4, int a5, char a6)
{
  int v6; // r6@1
  int v7; // r4@1
  AgentCommandComponent *v8; // r7@1
  int v9; // r5@1
  void *v10; // r0@1
  int result; // r0@2
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  int v14; // [sp+4h] [bp-24h]@1

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a1;
  sub_21E94B4((void **)&v14, "drop");
  *(_DWORD *)v9 = &off_2724F8C;
  *(_DWORD *)(v9 + 4) = j_AgentCommandComponent::getEntity(v8);
  *(_DWORD *)(v9 + 8) = v6;
  sub_21E8AF4((int *)(v9 + 12), &v14);
  *(_WORD *)(v9 + 16) = 0;
  v10 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  *(_DWORD *)v9 = &off_27250AC;
  *(_BYTE *)(v9 + 18) = a6;
  result = v9;
  *(_DWORD *)(v9 + 20) = v7;
  *(_DWORD *)(v9 + 24) = a5;
  return result;
}


AgentCommands::TillCommand *__fastcall AgentCommands::TillCommand::~TillCommand(AgentCommands::TillCommand *this)
{
  AgentCommands::TillCommand *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5
  int v5; // r1@7
  void *v6; // r0@7
  unsigned int *v8; // r12@9
  signed int v9; // r1@11

  v1 = this;
  *(_DWORD *)this = &off_27251AC;
  v2 = (void *)*((_DWORD *)this + 19);
  if ( v2 )
    j_operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 15);
  if ( v3 )
    j_operator delete(v3);
  v4 = *((_DWORD *)v1 + 8);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  *(_DWORD *)v1 = &off_2724F8C;
  v5 = *((_DWORD *)v1 + 3);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v5 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  return v1;
}
