

  if ( WorldInfo::isValid((WorldInfo *)&v7) )
{
    v5 = (int *)NetworkWorldInfo::getPlayerCount((NetworkWorldInfo *)&v7);
    sub_21E8AF4(v3, v5);
  }
  else
  {
    sub_21E8AF4(v3, (int *)&Util::EMPTY_STRING);
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v7);
  result = (char *)(_stack_chk_guard - v9);
  if ( _stack_chk_guard != v9 )
    _stack_chk_fail(result);
  return result;
}


  if ( WorldInfo::isValid((WorldInfo *)&v11) )
{
  else
    sub_21E8AF4((int *)v4, (int *)&Util::EMPTY_STRING);
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v11);
  result = (char *)(_stack_chk_guard - v13);
  if ( _stack_chk_guard != v13 )
    _stack_chk_fail(result);
  return result;
}


_DWORD *__fastcall WorldInfo::WorldInfo(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


  if ( WorldInfo::isValid((WorldInfo *)&v10) )
{
    v8 = WorldInfo::getStatus((WorldInfo *)&v10);
    if ( v8 != 1 )
      v8 = 0;
  }
  else
  {
    v8 = 0;
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v10);
  if ( _stack_chk_guard != v12 )
    _stack_chk_fail(_stack_chk_guard - v12);
  return v8;
}


_BOOL4 __fastcall WorldInfo::isValid(WorldInfo *this)
{
  return *(_DWORD *)this != 0;
}


  if ( WorldInfo::isValid((WorldInfo *)&v10) )
{
    v8 = 0;
    if ( WorldInfo::getStatus((WorldInfo *)&v10) == 2 )
      v8 = 1;
  }
  else
  {
    v8 = 1;
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v10);
  if ( _stack_chk_guard != v12 )
    _stack_chk_fail(_stack_chk_guard - v12);
  return v8;
}


  if ( WorldInfo::isValid((WorldInfo *)&v12) )
{
    v10 = (int *)NetworkWorldInfo::getPlayerCount((NetworkWorldInfo *)&v12);
    sub_21E8AF4(v4, v10);
  }
  else
  {
    sub_21E8AF4(v4, (int *)&Util::EMPTY_STRING);
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v12);
  result = (char *)(_stack_chk_guard - v14);
  if ( _stack_chk_guard != v14 )
    _stack_chk_fail(result);
  return result;
}


  if ( WorldInfo::isValid((WorldInfo *)&v5) )
{
    v3 = 0;
    if ( WorldInfo::getStatus((WorldInfo *)&v5) == 2 )
      v3 = 1;
  }
  else
  {
    v3 = 1;
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v5);
  if ( _stack_chk_guard != v7 )
    _stack_chk_fail(_stack_chk_guard - v7);
  return v3;
}


  if ( WorldInfo::isValid((WorldInfo *)&v5) )
{
    if ( WorldInfo::getStatus((WorldInfo *)&v5) == 1 )
    {
      v3 = 1;
    }
    else
      v3 = 0;
      if ( !NetworkWorldInfo::getPingStatus((NetworkWorldInfo *)&v5) )
        v3 = 1;
  }
  else
  {
    v3 = 0;
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v5);
  if ( _stack_chk_guard != v7 )
    _stack_chk_fail(_stack_chk_guard - v7);
  return v3;
}


_DWORD *__fastcall WorldInfo::setWorldType(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


  if ( WorldInfo::isValid((WorldInfo *)&v7) == 1 )
{
    v5 = (int *)NetworkWorldInfo::getPlayerCount((NetworkWorldInfo *)&v7);
    sub_21E8AF4(v3, v5);
  }
  else
  {
    sub_21E8AF4(v3, (int *)&Util::EMPTY_STRING);
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v7);
  result = (char *)(_stack_chk_guard - v9);
  if ( _stack_chk_guard != v9 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall WorldInfo::getWorldType(WorldInfo *this)
{
  return *(_DWORD *)this;
}


  if ( WorldInfo::isValid((WorldInfo *)&v10) )
{
    v8 = 0;
    if ( !WorldInfo::getStatus((WorldInfo *)&v10) )
      v8 = 1;
  }
  else
  {
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v10);
  if ( _stack_chk_guard != v12 )
    _stack_chk_fail(_stack_chk_guard - v12);
  return v8;
}


  if ( WorldInfo::isValid((WorldInfo *)&v11) == 1 )
{
  else
    sub_21E8AF4((int *)v4, (int *)&Util::EMPTY_STRING);
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v11);
  result = (char *)(_stack_chk_guard - v13);
  if ( _stack_chk_guard != v13 )
    _stack_chk_fail(result);
  return result;
}


  if ( WorldInfo::isValid((WorldInfo *)&v5) )
{
    v3 = 0;
    if ( !WorldInfo::getStatus((WorldInfo *)&v5) )
      v3 = 1;
  }
  else
  {
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v5);
  if ( _stack_chk_guard != v7 )
    _stack_chk_fail(_stack_chk_guard - v7);
  return v3;
}


int __fastcall WorldInfo::setStatus(int result, int a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}


  if ( WorldInfo::isValid((WorldInfo *)&v11) )
{
  else
    sub_21E8AF4((int *)v4, (int *)&Util::EMPTY_STRING);
  NetworkWorldInfo::~NetworkWorldInfo((NetworkWorldInfo *)&v11);
  result = (char *)(_stack_chk_guard - v13);
  if ( _stack_chk_guard != v13 )
    _stack_chk_fail(result);
  return result;
}
