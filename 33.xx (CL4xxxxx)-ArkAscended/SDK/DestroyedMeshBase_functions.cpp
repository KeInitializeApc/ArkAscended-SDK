#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DestroyedMeshBase.DestroyedMeshBase_C
// (Actor)

class UClass* ADestroyedMeshBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DestroyedMeshBase_C");

	return Clss;
}


// DestroyedMeshBase_C DestroyedMeshBase.Default__DestroyedMeshBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADestroyedMeshBase_C* ADestroyedMeshBase_C::GetDefaultObj()
{
	static class ADestroyedMeshBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADestroyedMeshBase_C*>(ADestroyedMeshBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


