#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Explosion_Demolition.DmgType_Explosion_Demolition_C
// (None)

class UClass* UDmgType_Explosion_Demolition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Explosion_Demolition_C");

	return Clss;
}


// DmgType_Explosion_Demolition_C DmgType_Explosion_Demolition.Default__DmgType_Explosion_Demolition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Explosion_Demolition_C* UDmgType_Explosion_Demolition_C::GetDefaultObj()
{
	static class UDmgType_Explosion_Demolition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Explosion_Demolition_C*>(UDmgType_Explosion_Demolition_C::StaticClass()->DefaultObject);

	return Default;
}

}


