#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StructureBaseBP.StructureBaseBP_C
// (Actor)

class UClass* AStructureBaseBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StructureBaseBP_C");

	return Clss;
}


// StructureBaseBP_C StructureBaseBP.Default__StructureBaseBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStructureBaseBP_C* AStructureBaseBP_C::GetDefaultObj()
{
	static class AStructureBaseBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStructureBaseBP_C*>(AStructureBaseBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


