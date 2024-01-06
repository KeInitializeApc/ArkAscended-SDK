#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Explosion.DmgType_Explosion_C
// (None)

class UClass* UDmgType_Explosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Explosion_C");

	return Clss;
}


// DmgType_Explosion_C DmgType_Explosion.Default__DmgType_Explosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Explosion_C* UDmgType_Explosion_C::GetDefaultObj()
{
	static class UDmgType_Explosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Explosion_C*>(UDmgType_Explosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


