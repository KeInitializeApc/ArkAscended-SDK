#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BoneModifiersContainer.BoneModifiersContainer_C
// (None)

class UClass* UBoneModifiersContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BoneModifiersContainer_C");

	return Clss;
}


// BoneModifiersContainer_C BoneModifiersContainer.Default__BoneModifiersContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBoneModifiersContainer_C* UBoneModifiersContainer_C::GetDefaultObj()
{
	static class UBoneModifiersContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBoneModifiersContainer_C*>(UBoneModifiersContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


