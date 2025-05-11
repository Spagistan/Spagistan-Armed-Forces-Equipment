//Vehicles

#define backpack_xx(a,b) class _xx_##a {backpack = #a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = #a; count = b;}
#define item_xx(a,b) class _xx_##a {name = #a; count = b;}
#define mag_xx(a,b) class _xx_##a {magazine = #a; count = b;}

class CfgVehicles
{
  #include "backpacks/BackPacks_Vehicles.hpp"
  #include "hats/Hats_Vehicles.hpp"
  #include "uniforms/Uniforms_Vehicles.hpp"
  #include "vests/Vests_Vehicles.hpp"
  
  #include "backpacks/NG_Backpacks_Vehicles.hpp"

};


#undef backpack_xx
#undef mag_xx
#undef weap_xx
#undef item_xx