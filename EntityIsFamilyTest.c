

void __fastcall EntityIsFamilyTest::~EntityIsFamilyTest(EntityIsFamilyTest *this)
{
  EntityIsFamilyTest *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271FC24;
  v2 = *((_DWORD *)this + 2);
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


void __fastcall EntityIsFamilyTest::~EntityIsFamilyTest(EntityIsFamilyTest *this)
{
  EntityIsFamilyTest::~EntityIsFamilyTest(this);
}


int __fastcall EntityIsFamilyTest::evaluate(FilterTest *a1, int a2)
{
  FilterTest *v2; // r4@1
  int v3; // r0@1
  int result; // r0@2
  int v5; // r0@3

  v2 = a1;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v5 = j_Entity::hasFamily(v3, (int)v2 + 8);
    result = j_FilterTest::_testValuesWithOperator(v2, v5, 1);
  }
  else
    result = 0;
  return result;
}
