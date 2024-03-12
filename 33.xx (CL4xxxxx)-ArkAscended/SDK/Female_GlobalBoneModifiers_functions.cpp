#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Female_GlobalBoneModifiers.Female_GlobalBoneModifiers_C
// (None)

class UClass* UFemale_GlobalBoneModifiers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Female_GlobalBoneModifiers_C");

	return Clss;
}


// Female_GlobalBoneModifiers_C Female_GlobalBoneModifiers.Default__Female_GlobalBoneModifiers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFemale_GlobalBoneModifiers_C* UFemale_GlobalBoneModifiers_C::GetDefaultObj()
{
	static class UFemale_GlobalBoneModifiers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFemale_GlobalBoneModifiers_C*>(UFemale_GlobalBoneModifiers_C::StaticClass()->DefaultObject);

	return Default;
}

}


