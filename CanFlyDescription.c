

const char *__fastcall CanFlyDescription::getJsonName(CanFlyDescription *this)
{
  return "minecraft:can_fly";
}


const char *__fastcall CanFlyDescription::getDescription(CanFlyDescription *this)
{
  return "Marks the entity as being able to fly, the pathfinder won't be restricted to paths where a solid block is requi"
         "red underneath it.";
}
