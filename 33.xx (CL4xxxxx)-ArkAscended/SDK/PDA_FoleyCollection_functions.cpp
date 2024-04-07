#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PDA_FoleyCollection.PDA_FoleyCollection_C
// (None)

class UClass* UPDA_FoleyCollection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PDA_FoleyCollection_C");

	return Clss;
}


// PDA_FoleyCollection_C PDA_FoleyCollection.Default__PDA_FoleyCollection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPDA_FoleyCollection_C* UPDA_FoleyCollection_C::GetDefaultObj()
{
	static class UPDA_FoleyCollection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPDA_FoleyCollection_C*>(UPDA_FoleyCollection_C::StaticClass()->DefaultObject);

	return Default;
}

}


