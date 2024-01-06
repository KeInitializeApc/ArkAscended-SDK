#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StructureSeatingBaseBP.StructureSeatingBaseBP_C
// (Actor)

class UClass* AStructureSeatingBaseBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StructureSeatingBaseBP_C");

	return Clss;
}


// StructureSeatingBaseBP_C StructureSeatingBaseBP.Default__StructureSeatingBaseBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStructureSeatingBaseBP_C* AStructureSeatingBaseBP_C::GetDefaultObj()
{
	static class AStructureSeatingBaseBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStructureSeatingBaseBP_C*>(AStructureSeatingBaseBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


