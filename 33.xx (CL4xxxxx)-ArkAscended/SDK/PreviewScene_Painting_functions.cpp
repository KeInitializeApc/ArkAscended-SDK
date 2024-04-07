#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PreviewScene_Painting.PreviewScene_Painting_C
// (Actor)

class UClass* APreviewScene_Painting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PreviewScene_Painting_C");

	return Clss;
}


// PreviewScene_Painting_C PreviewScene_Painting.Default__PreviewScene_Painting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APreviewScene_Painting_C* APreviewScene_Painting_C::GetDefaultObj()
{
	static class APreviewScene_Painting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APreviewScene_Painting_C*>(APreviewScene_Painting_C::StaticClass()->DefaultObject);

	return Default;
}

}


