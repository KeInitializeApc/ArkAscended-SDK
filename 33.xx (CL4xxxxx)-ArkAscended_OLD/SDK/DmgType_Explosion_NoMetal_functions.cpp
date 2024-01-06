#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Explosion_NoMetal.DmgType_Explosion_NoMetal_C
// (None)

class UClass* UDmgType_Explosion_NoMetal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Explosion_NoMetal_C");

	return Clss;
}


// DmgType_Explosion_NoMetal_C DmgType_Explosion_NoMetal.Default__DmgType_Explosion_NoMetal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Explosion_NoMetal_C* UDmgType_Explosion_NoMetal_C::GetDefaultObj()
{
	static class UDmgType_Explosion_NoMetal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Explosion_NoMetal_C*>(UDmgType_Explosion_NoMetal_C::StaticClass()->DefaultObject);

	return Default;
}

}


